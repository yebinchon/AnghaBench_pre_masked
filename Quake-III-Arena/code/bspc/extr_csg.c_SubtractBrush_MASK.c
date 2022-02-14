
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int numsides; struct TYPE_12__* next; TYPE_1__* sides; } ;
typedef TYPE_2__ bspbrush_t ;
struct TYPE_11__ {int planenum; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,int ,TYPE_2__**,TYPE_2__**) ;

bspbrush_t *FUNC_3 (bspbrush_t *VAR_0, bspbrush_t *VAR_1)
{
 int VAR_2;
 bspbrush_t *VAR_3, *VAR_4;
 bspbrush_t *VAR_5, *VAR_6;

 VAR_6 = VAR_0;
 VAR_5 = ((void*)0);
 for (VAR_2 = 0; VAR_2 < VAR_1->numsides && VAR_6; VAR_2++)
 {
  FUNC_2(VAR_6, VAR_1->sides[VAR_2].planenum, &VAR_3, &VAR_4);
  if (VAR_6 != VAR_0) FUNC_0(VAR_6);
  if (VAR_3)
  {
   VAR_3->next = VAR_5;
   VAR_5 = VAR_3;
  }
  VAR_6 = VAR_4;
 }
 if (VAR_6)
 {
  FUNC_0 (VAR_6);
 }
 else
 {
  FUNC_1 (VAR_5);
  return VAR_0;
 }
 return VAR_5;
}
