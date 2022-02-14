
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * sides; } ;
typedef TYPE_1__ bspbrush_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 int VAR_1 ;

bspbrush_t *FUNC_2 (int VAR_2)
{
 bspbrush_t *VAR_3;
 int VAR_4;

 VAR_4 = (int)&(((bspbrush_t *)0)->sides[VAR_2]);
 VAR_3 = FUNC_0(VAR_4);
 FUNC_1 (VAR_3, 0, VAR_4);
 if (VAR_1 == 1)
  VAR_0++;
 return VAR_3;
}
