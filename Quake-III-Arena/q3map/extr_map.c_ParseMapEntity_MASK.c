
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_10__ {struct TYPE_10__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_11__ {scalar_t__* origin; TYPE_1__* epairs; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,char*,scalar_t__*) ;
 size_t VAR_2 ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 TYPE_1__* FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 char* FUNC_11 (TYPE_2__*,char*) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 int FUNC_12 (TYPE_2__*,int ,int) ;
 int VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_13 (char*,char*) ;
 char* VAR_12 ;

qboolean FUNC_14 (void) {
 epair_t *VAR_13;

 if (!FUNC_2 (VAR_10))
  return VAR_9;

 if (FUNC_13 (VAR_12, "{") )
 {
  FUNC_1 ("ParseEntity: { not found, found %s on line %d - last entity was at: <%4.2f, %4.2f, %4.2f>...", VAR_12, VAR_11, VAR_3[VAR_8].origin[0], VAR_3[VAR_8].origin[1], VAR_3[VAR_8].origin[2]);
 }

 if (VAR_8 == VAR_2)
  FUNC_1 ("num_entities == MAX_MAP_ENTITIES");

 VAR_4 = 0;

 VAR_6 = &VAR_3[VAR_8];
 VAR_8++;
 FUNC_12 (VAR_6, 0, sizeof(*VAR_6));

 do
 {
  if (!FUNC_2 (VAR_10))
   FUNC_1 ("ParseEntity: EOF without closing brace");
  if (!FUNC_13 (VAR_12, "}") )
   break;

  if (!FUNC_13 (VAR_12, "{") ) {

   if (!FUNC_2 (VAR_10))
    break;
   if ( !FUNC_13( VAR_12, "patchDef2" ) ) {
    VAR_7++;
    FUNC_7();
   } else if ( !FUNC_13( VAR_12, "terrainDef" ) ) {
    FUNC_8();
   } else if ( !FUNC_13( VAR_12, "brushDef" ) ) {
    if (VAR_5==VAR_1)
     FUNC_1("old brush format not allowed in new brush format map");
    VAR_5=VAR_0;

    FUNC_5();
   }
   else
   {
    if (VAR_5==VAR_0)
     FUNC_1("new brush format not allowed in old brush format map");
    VAR_5=VAR_1;

    FUNC_10();
    FUNC_5();
   }
   VAR_4++;
  }
  else
  {

   VAR_13 = FUNC_6 ();
   VAR_13->next = VAR_6->epairs;
   VAR_6->epairs = VAR_13;
  }
 } while (1);

 FUNC_3 (VAR_6, "origin", VAR_6->origin);




 if (VAR_6->origin[0] || VAR_6->origin[1] || VAR_6->origin[2]) {
  FUNC_0( VAR_6 );
 }




  if (!FUNC_13("group_info", FUNC_11 (VAR_6, "classname")))
  {
    VAR_8--;
    return VAR_10;
  }



 if (!FUNC_13 ("func_group", FUNC_11 (VAR_6, "classname")))
 {
  if ( !FUNC_13 ("1", FUNC_11 (VAR_6, "terrain"))) {
   FUNC_9();
  }
  FUNC_4 (VAR_6);
  VAR_8--;
  return VAR_10;
 }

 return VAR_10;
}
