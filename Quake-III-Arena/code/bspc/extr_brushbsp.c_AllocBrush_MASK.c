
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * sides; } ;
typedef TYPE_1__ bspbrush_t ;


 TYPE_1__* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int VAR_3 ;

bspbrush_t *FUNC_3 (int VAR_4)
{
 bspbrush_t *VAR_5;
 int VAR_6;

 VAR_6 = (int)&(((bspbrush_t *)0)->sides[VAR_4]);
 VAR_5 = FUNC_0(VAR_6);
 FUNC_2 (VAR_5, 0, VAR_6);
 if (VAR_3 == 1)
 {
  VAR_0++;
  VAR_1 += FUNC_1(VAR_5);
  if (VAR_1 > VAR_2)
    VAR_2 = VAR_1;
 }
 return VAR_5;
}
