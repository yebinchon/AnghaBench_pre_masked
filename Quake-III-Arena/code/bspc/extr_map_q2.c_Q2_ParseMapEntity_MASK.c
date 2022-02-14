
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ vec_t ;
struct TYPE_20__ {char* string; } ;
typedef TYPE_1__ token_t ;
struct TYPE_21__ {size_t planenum; int texinfo; } ;
typedef TYPE_2__ side_t ;
typedef int script_t ;
typedef int qboolean ;
struct TYPE_22__ {int numsides; int contents; TYPE_2__* original_sides; } ;
typedef TYPE_3__ mapbrush_t ;
struct TYPE_23__ {struct TYPE_23__* next; } ;
typedef TYPE_4__ epair_t ;
struct TYPE_24__ {int firstbrush; int numbrushes; int areaportalnum; scalar_t__* origin; TYPE_4__* epairs; } ;
typedef TYPE_5__ entity_t ;
struct TYPE_25__ {int normal; scalar_t__ dist; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*) ;
 int FUNC_1 (char*,...) ;
 size_t FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (TYPE_5__*,char*,scalar_t__*) ;
 size_t VAR_1 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *) ;
 TYPE_4__* FUNC_7 (int *) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *,TYPE_5__*) ;
 int FUNC_10 (TYPE_5__*,char*,char*) ;
 int FUNC_11 (TYPE_7__*,int *,scalar_t__*) ;
 char* FUNC_12 (TYPE_5__*,char*) ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 TYPE_3__* VAR_5 ;
 TYPE_7__* VAR_6 ;
 int FUNC_13 (TYPE_5__*,int ,int) ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_14 (char*,char*,int) ;
 scalar_t__ FUNC_15 (char*,char*) ;

qboolean FUNC_16(script_t *VAR_11)
{
 entity_t *VAR_12;
 epair_t *VAR_13;
 side_t *VAR_14;
 int VAR_15, VAR_16;
 int VAR_17, VAR_18;
 vec_t VAR_19;
 mapbrush_t *VAR_20;
 token_t VAR_21;

 if (!FUNC_5(VAR_11, &VAR_21)) return 0;

 if (FUNC_15(VAR_21.string, "{") )
  FUNC_1 ("ParseEntity: { not found");

 if (VAR_7 == VAR_1)
  FUNC_1 ("num_entities == MAX_MAP_ENTITIES");

 VAR_17 = VAR_8;
 VAR_18 = VAR_9;

 VAR_12 = &VAR_4[VAR_7];
 VAR_7++;
 FUNC_13 (VAR_12, 0, sizeof(*VAR_12));
 VAR_12->firstbrush = VAR_8;
 VAR_12->numbrushes = 0;



 do
 {
  if (!FUNC_5(VAR_11, &VAR_21))
  {
   FUNC_1("ParseEntity: EOF without closing brace");
  }
  if (!FUNC_15(VAR_21.string, "}")) break;
  if (!FUNC_15(VAR_21.string, "{"))
  {
   FUNC_9(VAR_11, VAR_12);
  }
  else
  {
   FUNC_6(VAR_11);
   VAR_13 = FUNC_7(VAR_11);
   VAR_13->next = VAR_12->epairs;
   VAR_12->epairs = VAR_13;
  }
 } while(1);

 FUNC_3(VAR_12, "origin", VAR_12->origin);




 if (VAR_12->origin[0] || VAR_12->origin[1] || VAR_12->origin[2])
 {
  for (VAR_15=0 ; VAR_15<VAR_12->numbrushes ; VAR_15++)
  {
   VAR_20 = &VAR_5[VAR_12->firstbrush + VAR_15];
   for (VAR_16=0 ; VAR_16<VAR_20->numsides ; VAR_16++)
   {
    VAR_14 = &VAR_20->original_sides[VAR_16];
    VAR_19 = VAR_6[VAR_14->planenum].dist -
     FUNC_0 (VAR_6[VAR_14->planenum].normal, VAR_12->origin);
    VAR_14->planenum = FUNC_2 (VAR_6[VAR_14->planenum].normal, VAR_19);
    VAR_14->texinfo = FUNC_11 (&VAR_6[VAR_14->planenum],
     &VAR_10[VAR_14-VAR_2], VAR_12->origin);
   }
   FUNC_4 (VAR_20);
  }
 }



 if (!FUNC_15 ("func_group", FUNC_12 (VAR_12, "classname")))
 {
  FUNC_8 (VAR_12);
  VAR_12->numbrushes = 0;
  return 1;
 }



 if (!FUNC_15 ("func_areaportal", FUNC_12 (VAR_12, "classname")))
 {
  char VAR_22[128];

  if (VAR_12->numbrushes != 1)
   FUNC_1 ("Entity %i: func_areaportal can only be a single brush", VAR_7-1);

  VAR_20 = &VAR_5[VAR_8-1];
  VAR_20->contents = VAR_0;
  VAR_3++;
  VAR_12->areaportalnum = VAR_3;

  FUNC_14 (VAR_22, "%i", VAR_3);
  FUNC_10 (VAR_12, "style", VAR_22);
  FUNC_8 (VAR_12);
  return 1;
 }

 return 1;
}
