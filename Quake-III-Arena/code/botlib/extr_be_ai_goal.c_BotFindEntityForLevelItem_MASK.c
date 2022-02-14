
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_9__ {size_t iteminfo; int entitynum; int origin; } ;
typedef TYPE_2__ levelitem_t ;
struct TYPE_10__ {TYPE_1__* iteminfo; } ;
typedef TYPE_3__ itemconfig_t ;
struct TYPE_11__ {scalar_t__* origin; scalar_t__* lastvisorigin; } ;
typedef TYPE_4__ aas_entityinfo_t ;
struct TYPE_8__ {int modelindex; } ;


 int FUNC_0 (int,TYPE_4__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,scalar_t__*,int ) ;
 TYPE_3__* VAR_0 ;

void FUNC_5(levelitem_t *VAR_1)
{
 int VAR_2, VAR_3;
 itemconfig_t *VAR_4;
 aas_entityinfo_t VAR_5;
 vec3_t VAR_6;

 VAR_4 = VAR_0;
 if (!VAR_0) return;
 for (VAR_2 = FUNC_2(0); VAR_2; VAR_2 = FUNC_2(VAR_2))
 {

  VAR_3 = FUNC_1(VAR_2);

  if (!VAR_3) continue;

  FUNC_0(VAR_2, &VAR_5);

  if (VAR_5.origin[0] != VAR_5.lastvisorigin[0] ||
    VAR_5.origin[1] != VAR_5.lastvisorigin[1] ||
    VAR_5.origin[2] != VAR_5.lastvisorigin[2]) continue;

  if (VAR_4->iteminfo[VAR_1->iteminfo].modelindex == VAR_3)
  {

   FUNC_4(VAR_1->origin, VAR_5.origin, VAR_6);
   if (FUNC_3(VAR_6) < 30)
   {

    VAR_1->entitynum = VAR_2;
   }
  }
 }
}
