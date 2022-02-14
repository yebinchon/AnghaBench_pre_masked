
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int side_t ;
typedef int plane_t ;
typedef int mapbrush_t ;
typedef int map_texinfo_t ;
struct TYPE_11__ {struct TYPE_11__* value; struct TYPE_11__* key; struct TYPE_11__* next; } ;
typedef TYPE_1__ epair_t ;
typedef int entity_t ;
typedef int brush_texture_t ;
struct TYPE_12__ {TYPE_1__* epairs; scalar_t__ winding; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 TYPE_2__* VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 TYPE_2__* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_2__* VAR_16 ;
 TYPE_2__* VAR_17 ;
 TYPE_2__* VAR_18 ;
 int FUNC_5 (TYPE_2__*,int ,int) ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 TYPE_2__* VAR_23 ;
 TYPE_2__* VAR_24 ;

void FUNC_6(void)
{
 int VAR_25;
 epair_t *VAR_26, *VAR_27;

 FUNC_2();
 FUNC_3();


 for (VAR_25 = 0; VAR_25 < VAR_21; VAR_25++)
 {
  if (VAR_6[VAR_25].winding)
  {
   FUNC_1(VAR_6[VAR_25].winding);
  }
 }


 VAR_20 = 0;
 FUNC_5(VAR_17, 0, VAR_0 * sizeof(mapbrush_t));

 VAR_21 = 0;
 FUNC_5(VAR_6, 0, VAR_1 * sizeof(side_t));
 FUNC_5(VAR_24, 0, VAR_1 * sizeof(brush_texture_t));

 VAR_22 = 0;
 FUNC_5(VAR_18, 0, VAR_2 * sizeof(plane_t));

 FUNC_5(VAR_23, 0, VAR_5 * sizeof(plane_t *));

 FUNC_5(VAR_16, 0, VAR_3 * sizeof(map_texinfo_t));
 VAR_15 = 0;

 FUNC_4(VAR_14);
 FUNC_4(VAR_13);

 VAR_8 = 0;
 VAR_10 = 0;
 VAR_7 = 0;
 VAR_9 = 0;
 VAR_11 = 0;

 for (VAR_25 = 0; VAR_25 < VAR_19; VAR_25++)
 {
  for (VAR_26 = VAR_12[VAR_25].epairs; VAR_26; VAR_26 = VAR_27)
  {
   VAR_27 = VAR_26->next;
   FUNC_0(VAR_26->key);
   FUNC_0(VAR_26->value);
   FUNC_0(VAR_26);
  }
 }
 VAR_19 = 0;
 FUNC_5(VAR_12, 0, VAR_4 * sizeof(entity_t));
}
