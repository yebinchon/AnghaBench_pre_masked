
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ap_queue_status {int dummy; } ;
typedef int ap_qid_t ;



__attribute__((used)) static inline struct ap_queue_status FUNC_0(ap_qid_t VAR_0)
{
 register unsigned long VAR_1 asm ("0") = VAR_0 | 0x01000000UL;
 register struct ap_queue_status VAR_2 asm ("1");
 register unsigned long VAR_3 asm ("2") = 0UL;

 asm volatile(
  ".long 0xb2af0000"
  : "+d" (VAR_1), "=d" (VAR_2), "+d" (VAR_3) : : "cc");
 return VAR_2;
}
