
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* points; } ;
typedef TYPE_1__ winding_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;

winding_t *FUNC_3 (int VAR_1)
{
 winding_t *VAR_2;
 int VAR_3;

 if (VAR_1 > VAR_0)
  FUNC_0 ("NewWinding: %i points", VAR_1);

 VAR_3 = (int)((winding_t *)0)->points[VAR_1];
 VAR_2 = FUNC_1 (VAR_3);
 FUNC_2 (VAR_2, 0, VAR_3);

 return VAR_2;
}
