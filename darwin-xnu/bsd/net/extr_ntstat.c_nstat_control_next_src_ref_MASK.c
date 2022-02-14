
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int nstat_src_ref_t ;
struct TYPE_3__ {int ncs_next_srcref; } ;
typedef TYPE_1__ nstat_control_state ;



__attribute__((used)) static nstat_src_ref_t
FUNC_0(
 nstat_control_state *VAR_0)
{
 return ++VAR_0->ncs_next_srcref;
}
