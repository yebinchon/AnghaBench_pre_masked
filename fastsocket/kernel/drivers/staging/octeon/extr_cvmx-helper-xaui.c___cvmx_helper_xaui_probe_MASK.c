
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int qos_mask; int eid; int pid; scalar_t__ static_p; } ;
union cvmx_pko_mem_port_ptrs {void* u64; TYPE_2__ s; } ;
struct TYPE_4__ {int en; } ;
union cvmx_gmxx_inf_mode {void* u64; TYPE_1__ s; } ;
struct TYPE_6__ {scalar_t__ hg2tx_en; } ;
union cvmx_gmxx_hg2_control {TYPE_3__ s; void* u64; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int,int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,void*) ;

int FUNC_5(int VAR_1)
{
 int VAR_2;
 union cvmx_gmxx_hg2_control VAR_3;
 union cvmx_gmxx_inf_mode VAR_4;






 VAR_4.u64 = FUNC_3(FUNC_1(VAR_1));
 VAR_4.s.en = 1;
 FUNC_4(FUNC_1(VAR_1), VAR_4.u64);

 FUNC_2(VAR_1, 1);







 for (VAR_2 = 0; VAR_2 < 16; VAR_2++) {
  union cvmx_pko_mem_port_ptrs VAR_5;
  VAR_5.u64 = 0;




  VAR_5.s.static_p = 0;
  VAR_5.s.qos_mask = 0xff;

  VAR_5.s.eid = VAR_1 * 4;
  VAR_5.s.pid = VAR_1 * 16 + VAR_2;
  FUNC_4(VAR_0, VAR_5.u64);
 }


 VAR_3.u64 = FUNC_3(FUNC_0(VAR_1));
 if (VAR_3.s.hg2tx_en)
  return 16;
 else
  return 1;
}
