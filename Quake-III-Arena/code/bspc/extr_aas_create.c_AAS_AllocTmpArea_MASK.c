
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* l_prev; struct TYPE_4__* l_next; scalar_t__ areanum; } ;
typedef TYPE_1__ tmp_area_t ;
struct TYPE_5__ {int numareas; TYPE_1__* areas; int areanum; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__ VAR_0 ;

tmp_area_t *FUNC_1(void)
{
 tmp_area_t *VAR_1;

 VAR_1 = (tmp_area_t *) FUNC_0(sizeof(tmp_area_t));
 VAR_1->areanum = VAR_0.areanum++;
 VAR_1->l_prev = ((void*)0);
 VAR_1->l_next = VAR_0.areas;
 if (VAR_0.areas) VAR_0.areas->l_prev = VAR_1;
 VAR_0.areas = VAR_1;
 VAR_0.numareas++;
 return VAR_1;
}
