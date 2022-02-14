
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vmstorage_channel_properties {int dummy; } ;
struct vmbus_channel {TYPE_1__* primary_channel; } ;
struct storvsc_device {int open_sub_channel; } ;
struct hv_device {int dummy; } ;
struct TYPE_2__ {struct hv_device* device_obj; } ;


 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int FUNC_1 (struct vmstorage_channel_properties*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct vmbus_channel*,int ,int ,void*,int,int ,struct vmbus_channel*) ;

__attribute__((used)) static void FUNC_3(struct vmbus_channel *VAR_2)
{
 struct hv_device *VAR_3 = VAR_2->primary_channel->device_obj;
 struct storvsc_device *VAR_4;
 struct vmstorage_channel_properties VAR_5;

 VAR_4 = FUNC_0(VAR_3);
 if (!VAR_4)
  return;

 if (VAR_4->open_sub_channel == 0)
  return;

 FUNC_1(&VAR_5, 0, sizeof(struct vmstorage_channel_properties));

 FUNC_2(VAR_2,
     VAR_1,
     VAR_1,
     (void *)&VAR_5,
     sizeof(struct vmstorage_channel_properties),
     VAR_0, VAR_2);
}
