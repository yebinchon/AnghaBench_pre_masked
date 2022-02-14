
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_20__ {int contents; int leafnum; scalar_t__ expansionbbox; scalar_t__ numsides; } ;
typedef TYPE_2__ mapbrush_t ;
struct TYPE_21__ {int numbrushes; } ;
typedef TYPE_3__ entity_t ;
struct TYPE_22__ {int numbboxes; TYPE_1__* bboxes; } ;
struct TYPE_19__ {scalar_t__ presencetype; int maxs; int mins; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_5__ VAR_15 ;
 TYPE_3__* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;

void FUNC_8(mapbrush_t *VAR_19, entity_t *VAR_20, int VAR_21)
{
 int VAR_22;

 mapbrush_t *VAR_23[16];


 if (!FUNC_5(VAR_20))
 {
  VAR_18 -= VAR_19->numsides;
  VAR_19->numsides = 0;
  return;
 }

 FUNC_3(VAR_20, VAR_19);


 FUNC_4(VAR_19);


 VAR_19->contents &= ~VAR_3;

 if (VAR_19->contents & (VAR_0|VAR_2))
 {
  VAR_19->contents = VAR_2;
  VAR_19->leafnum = -1;
 }

 if (VAR_19->contents & (VAR_14 | VAR_9))
 {

  VAR_19->contents &= ~(VAR_14 | VAR_9);
  VAR_19->contents |= VAR_11;
  VAR_19->leafnum = -1;
 }

 if (VAR_19->contents & VAR_1)
 {
  VAR_19->contents = VAR_11;
  VAR_19->leafnum = -1;
 }





 if (!(VAR_19->contents & (VAR_11
         | VAR_6
         | VAR_2
         | VAR_4
         | VAR_12
         | VAR_5
         | VAR_13
         | VAR_7
         | VAR_10
         | VAR_8
         )))
 {
  VAR_18 -= VAR_19->numsides;
  VAR_19->numsides = 0;
  return;
 }



 if (VAR_21)
 {






  FUNC_2(VAR_19);
  FUNC_6(VAR_19);
  FUNC_7(VAR_19);
 }

 VAR_20 = &VAR_16[0];

 VAR_17++;
 VAR_20->numbrushes++;

 if (VAR_19->contents & (VAR_13
         | VAR_7
         | VAR_10
         | VAR_12
         | VAR_5
         | VAR_4
         | VAR_8
         ))
 {
  VAR_19->expansionbbox = 0;


  FUNC_1(VAR_19, VAR_15.bboxes[0].mins, VAR_15.bboxes[0].maxs);
  FUNC_2(VAR_19);
 }

 else if (VAR_19->contents & VAR_2)
 {
  VAR_19->expansionbbox = 0;


  FUNC_1(VAR_19, VAR_15.bboxes[0].mins, VAR_15.bboxes[0].maxs);
  FUNC_2(VAR_19);
 }

 else if (VAR_19->contents & (VAR_11
          | VAR_6
          ))
 {

  VAR_23[0] = VAR_19;

  for (VAR_22 = 1; VAR_22 < VAR_15.numbboxes; VAR_22++)
  {
   VAR_23[VAR_22] = FUNC_0(VAR_19, VAR_20);
  }

  for (VAR_22 = 0; VAR_22 < VAR_15.numbboxes; VAR_22++)
  {
   FUNC_1(VAR_23[VAR_22], VAR_15.bboxes[VAR_22].mins, VAR_15.bboxes[VAR_22].maxs);
   VAR_23[VAR_22]->expansionbbox = VAR_15.bboxes[VAR_22].presencetype;
   FUNC_2(VAR_23[VAR_22]);
  }
 }
}
