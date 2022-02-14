
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int16_t ;
typedef int nstat_src ;
struct TYPE_3__ {scalar_t__ ncs_context; } ;
typedef TYPE_1__ nstat_control_state ;
typedef int boolean_t ;


 int VAR_0 ;

__attribute__((used)) static u_int16_t
FUNC_0(
    nstat_control_state *VAR_1,
    nstat_src *VAR_2,
    boolean_t VAR_3)
{
 u_int16_t VAR_4 = 0;

 if (VAR_2 == ((void*)0) || !VAR_3)
 {






  VAR_1->ncs_context = 0;
 }
 else
 {




  VAR_4 |= VAR_0;
 }

 return VAR_4;
}
