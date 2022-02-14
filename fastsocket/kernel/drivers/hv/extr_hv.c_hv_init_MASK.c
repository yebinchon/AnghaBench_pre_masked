
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union hv_x64_msr_hypercall_contents {int enable; scalar_t__ as_uint64; int guest_physical_address; } ;
typedef int __u8 ;
typedef int __u16 ;
struct TYPE_2__ {void* hypercall_page; scalar_t__ guestid; int event_dpc; int vp_index; int synic_message_page; int synic_event_page; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int ,int ,int ) ;
 scalar_t__ FUNC_1 (int,int ,int ) ;
 TYPE_1__ VAR_8 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,scalar_t__) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,scalar_t__) ;

int FUNC_8(void)
{
 int VAR_9;
 union hv_x64_msr_hypercall_contents VAR_10;
 void *VAR_11 = ((void*)0);
 __u8 VAR_12 = 0x20;
 __u16 VAR_13 = 0;

 FUNC_2(VAR_8.synic_event_page, 0, sizeof(void *) * VAR_5);
 FUNC_2(VAR_8.synic_message_page, 0,
        sizeof(void *) * VAR_5);
 FUNC_2(VAR_8.vp_index, 0,
        sizeof(int) * VAR_5);
 FUNC_2(VAR_8.event_dpc, 0,
        sizeof(void *) * VAR_5);

 VAR_9 = FUNC_3();




 VAR_8.guestid = FUNC_1(VAR_12, VAR_4, VAR_13);
 FUNC_7(VAR_2, VAR_8.guestid);


 FUNC_4(VAR_3, VAR_10.as_uint64);

 VAR_11 = FUNC_0(VAR_7, VAR_1, VAR_6);

 if (!VAR_11)
  goto cleanup;

 VAR_10.enable = 1;

 VAR_10.guest_physical_address = FUNC_6(VAR_11);
 FUNC_7(VAR_3, VAR_10.as_uint64);


 VAR_10.as_uint64 = 0;
 FUNC_4(VAR_3, VAR_10.as_uint64);

 if (!VAR_10.enable)
  goto cleanup;

 VAR_8.hypercall_page = VAR_11;

 return 0;

cleanup:
 if (VAR_11) {
  if (VAR_10.enable) {
   VAR_10.as_uint64 = 0;
   FUNC_7(VAR_3, VAR_10.as_uint64);
  }

  FUNC_5(VAR_11);
 }

 return -VAR_0;
}
