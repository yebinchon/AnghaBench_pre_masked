
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint64_t ;
struct TYPE_3__ {void* record_id; void* physaddr; void* length; } ;
typedef TYPE_1__ dbg_record_header_t ;


 TYPE_1__* FUNC_0 () ;

int FUNC_1(uint64_t VAR_0, uint64_t VAR_1, uint64_t VAR_2)
{
 dbg_record_header_t *VAR_3 = FUNC_0();
 if (VAR_3 == ((void*)0))
  return -1;
 VAR_3->length = VAR_2;
 VAR_3->physaddr = VAR_1;

 __asm__ volatile("dmb ish" : : : "memory");
 VAR_3->record_id = VAR_0;
 return 0;
}
