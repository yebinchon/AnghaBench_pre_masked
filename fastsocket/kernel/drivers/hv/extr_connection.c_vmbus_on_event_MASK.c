
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union hv_synic_event_flags {size_t* flags32; } ;
typedef size_t u32 ;
struct TYPE_4__ {void** synic_event_page; } ;
struct TYPE_3__ {size_t* recv_int_page; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int,unsigned long*) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ VAR_7 ;

void FUNC_3(unsigned long VAR_8)
{
 u32 VAR_9;
 u32 VAR_10;
 int VAR_11;
 u32 VAR_12;
 u32 *VAR_13 = ((void*)0);
 void *VAR_14;
 int VAR_15 = FUNC_1();
 union hv_synic_event_flags *VAR_16;

 if ((VAR_7 == VAR_3) ||
  (VAR_7 == VAR_2)) {
  VAR_10 = VAR_1 >> 5;
  VAR_13 = VAR_6.recv_int_page;
 } else {





  VAR_10 = VAR_0;
  VAR_14 = VAR_5.synic_event_page[VAR_15];
  VAR_16 = (union hv_synic_event_flags *)VAR_14 +
       VAR_4;
  VAR_13 = VAR_16->flags32;
 }




 if (!VAR_13)
  return;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++) {
  if (!VAR_13[VAR_9])
   continue;
  for (VAR_11 = 0; VAR_11 < 32; VAR_11++) {
   if (FUNC_2(VAR_11,
    (unsigned long *)&VAR_13[VAR_9])) {
    VAR_12 = (VAR_9 << 5) + VAR_11;

    if (VAR_12 == 0)




     continue;

    FUNC_0(VAR_12);
   }
  }
 }
}
