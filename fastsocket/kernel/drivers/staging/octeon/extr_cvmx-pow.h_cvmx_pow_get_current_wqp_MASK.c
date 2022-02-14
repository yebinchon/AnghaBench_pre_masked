
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int cvmx_wqe_t ;
struct TYPE_5__ {int wqp; } ;
struct TYPE_7__ {TYPE_1__ s_sstatus4; int u64; } ;
typedef TYPE_3__ cvmx_pow_tag_load_resp_t ;
struct TYPE_6__ {int is_io; int get_cur; int get_wqp; int coreid; int did; int mem_region; } ;
struct TYPE_8__ {scalar_t__ u64; TYPE_2__ sstatus; } ;
typedef TYPE_4__ cvmx_pow_load_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static inline cvmx_wqe_t *FUNC_3(void)
{
 cvmx_pow_load_addr_t VAR_2;
 cvmx_pow_tag_load_resp_t VAR_3;

 VAR_2.u64 = 0;
 VAR_2.sstatus.mem_region = VAR_0;
 VAR_2.sstatus.is_io = 1;
 VAR_2.sstatus.did = VAR_1;
 VAR_2.sstatus.coreid = FUNC_0();
 VAR_2.sstatus.get_cur = 1;
 VAR_2.sstatus.get_wqp = 1;
 VAR_3.u64 = FUNC_2(VAR_2.u64);
 return (cvmx_wqe_t *) FUNC_1(VAR_3.s_sstatus4.wqp);
}
