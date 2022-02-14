
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {size_t numpoints; scalar_t__* p; } ;
typedef TYPE_1__ winding_t ;


 TYPE_1__* FUNC_0 (size_t) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;

winding_t *FUNC_2 (winding_t *VAR_0)
{
 int VAR_1;
 winding_t *VAR_2;

 VAR_2 = FUNC_0 (VAR_0->numpoints);
 VAR_1 = (int)((winding_t *)0)->p[VAR_0->numpoints];
 FUNC_1 (VAR_2, VAR_0, VAR_1);
 return VAR_2;
}
