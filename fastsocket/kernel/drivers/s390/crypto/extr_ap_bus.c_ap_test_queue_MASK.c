
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int dummy; } ;
typedef unsigned long ap_qid_t ;



__attribute__((used)) static inline struct ap_queue_status
FUNC_0(ap_qid_t VAR_0, int *VAR_1, int *VAR_2)
{
 register unsigned long VAR_3 asm ("0") = VAR_0;
 register struct ap_queue_status VAR_4 asm ("1");
 register unsigned long VAR_5 asm ("2") = 0UL;

 asm volatile(".long 0xb2af0000"
       : "+d" (VAR_3), "=d" (VAR_4), "+d" (VAR_5) : : "cc");
 *VAR_2 = (int) (VAR_5 >> 24);
 *VAR_1 = (int) (VAR_5 & 0xff);
 return VAR_4;
}
