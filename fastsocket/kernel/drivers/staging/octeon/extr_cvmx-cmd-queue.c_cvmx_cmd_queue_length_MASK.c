
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int doorbell; } ;
union cvmx_pko_mem_debug9 {TYPE_2__ cn38xx; void* u64; } ;
struct TYPE_6__ {int doorbell; } ;
union cvmx_pko_mem_debug8 {TYPE_3__ cn58xx; void* u64; } ;
struct TYPE_4__ {int dbell; } ;
union cvmx_npei_dmax_counts {TYPE_1__ s; void* u64; } ;
typedef int cvmx_cmd_queue_id_t ;





 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(cvmx_cmd_queue_id_t VAR_6)
{
 if (VAR_1) {
  if (FUNC_2(VAR_6) == ((void*)0))
   return VAR_0;
 }





 switch ((cvmx_cmd_queue_id_t) (VAR_6 & 0xff0000)) {
 case 130:






  FUNC_4(VAR_4, VAR_6 & 0xffff);
  if (FUNC_1(VAR_5)) {
   union cvmx_pko_mem_debug9 VAR_7;
   VAR_7 = FUNC_3(VAR_3);
   return VAR_7;
  } else {
   union cvmx_pko_mem_debug8 VAR_8;
   VAR_8 = FUNC_3(VAR_2);
   return VAR_8;
  }
 case 128:
 case 133:
 case 129:

  return 0;
 case 132:
  {
   union cvmx_npei_dmax_counts VAR_9;
   VAR_9.u64 =
       FUNC_3(FUNC_0
       (VAR_6 & 0x7));
   return VAR_9.s.dbell;
  }
 case 131:
  return VAR_0;
 }
 return VAR_0;
}
