
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ entitynum; int contents; } ;
typedef TYPE_1__ mapbrush_t ;
struct TYPE_7__ {int areaportalnum; } ;
typedef TYPE_2__ entity_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;

mapbrush_t *FUNC_1(entity_t *VAR_3)
{
 int VAR_4, VAR_5;
 mapbrush_t *VAR_6;


 VAR_4 = VAR_3->areaportalnum;

 for (VAR_5 = 0; VAR_5 < VAR_2 && VAR_4; VAR_5++)
 {
  VAR_6 = &VAR_1[VAR_5];

  if (VAR_6->entitynum == 0)
  {
   if (VAR_6->contents & VAR_0)
   {
    VAR_4--;
   }
  }
 }
 if (VAR_5 < VAR_2)
 {
  return VAR_6;
 }
 else
 {
  FUNC_0("area portal %d brush not found\n", VAR_3->areaportalnum);
  return ((void*)0);
 }
}
