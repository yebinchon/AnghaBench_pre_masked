
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int qid7; } ;
union cvmx_pko_reg_queue_ptrs1 {scalar_t__ u64; TYPE_2__ s; } ;
struct TYPE_3__ {int tail; int queue; scalar_t__ buf_ptr; scalar_t__ qos_mask; int port; scalar_t__ index; } ;
union cvmx_pko_mem_queue_ptrs {scalar_t__ u64; TYPE_1__ s; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,scalar_t__) ;

void FUNC_6(void)
{
 union cvmx_pko_mem_queue_ptrs VAR_5;
 int VAR_6;

 FUNC_4();

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_5.u64 = 0;
  VAR_5.s.tail = 1;
  VAR_5.s.index = 0;
  VAR_5.s.port = VAR_2;
  VAR_5.s.queue = VAR_6 & 0x7f;
  VAR_5.s.qos_mask = 0;
  VAR_5.s.buf_ptr = 0;
  if (!FUNC_1(VAR_4)) {
   union cvmx_pko_reg_queue_ptrs1 VAR_7;
   VAR_7 = 0;
   VAR_7 = VAR_6 >> 7;
   FUNC_5(VAR_3, VAR_7);
  }
  FUNC_5(VAR_1, VAR_5.u64);
  FUNC_3(FUNC_0(VAR_6));
 }
 FUNC_2();
}
