
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int cvmx_wqe_t ;
struct TYPE_3__ {int addr; scalar_t__ no_work; } ;
struct TYPE_4__ {TYPE_1__ s_work; int u64; } ;
typedef TYPE_2__ cvmx_pow_tag_load_resp_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline cvmx_wqe_t *FUNC_2(int VAR_1)
{
 cvmx_pow_tag_load_resp_t VAR_2;

 VAR_0;
 VAR_2.u64 = FUNC_1(VAR_1);

 if (VAR_2.s_work.no_work)
  return ((void*)0);
 else
  return (cvmx_wqe_t *) FUNC_0(VAR_2.s_work.addr);
}
