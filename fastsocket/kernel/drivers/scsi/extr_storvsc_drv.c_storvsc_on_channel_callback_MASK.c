
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct vstor_packet {int dummy; } ;
struct vmbus_channel {struct hv_device* device_obj; TYPE_1__* primary_channel; } ;
struct storvsc_cmd_request {int wait_event; int vstor_packet; } ;
struct storvsc_device {struct storvsc_cmd_request reset_request; struct storvsc_cmd_request init_request; } ;
struct hv_device {int dummy; } ;
struct TYPE_2__ {struct hv_device* device_obj; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 struct storvsc_device* FUNC_2 (struct hv_device*) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (struct hv_device*,struct vstor_packet*,struct storvsc_cmd_request*) ;
 int FUNC_5 (struct vmbus_channel*,unsigned char*,int,scalar_t__*,scalar_t__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_6(void *VAR_1)
{
 struct vmbus_channel *VAR_2 = (struct vmbus_channel *)VAR_1;
 struct hv_device *VAR_3;
 struct storvsc_device *VAR_4;
 u32 VAR_5;
 u64 VAR_6;
 unsigned char VAR_7[FUNC_0(sizeof(struct vstor_packet), 8)];
 struct storvsc_cmd_request *VAR_8;
 int VAR_9;

 if (VAR_2->primary_channel != ((void*)0))
  VAR_3 = VAR_2->primary_channel->device_obj;
 else
  VAR_3 = VAR_2->device_obj;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return;

 do {
  VAR_9 = FUNC_5(VAR_2, VAR_7,
           FUNC_0((sizeof(struct vstor_packet) -
          VAR_0), 8),
           &VAR_5, &VAR_6);
  if (VAR_9 == 0 && VAR_5 > 0) {

   VAR_8 = (struct storvsc_cmd_request *)
     (unsigned long)VAR_6;

   if ((VAR_8 == &VAR_4->init_request) ||
       (VAR_8 == &VAR_4->reset_request)) {

    FUNC_3(&VAR_8->vstor_packet, VAR_7,
           (sizeof(struct vstor_packet) -
     VAR_0));
    FUNC_1(&VAR_8->wait_event);
   } else {
    FUNC_4(VAR_3,
      (struct vstor_packet *)VAR_7,
      VAR_8);
   }
  } else {
   break;
  }
 } while (1);

 return;
}
