
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ data_transfer_length; int sense_info_length; scalar_t__ length; } ;
struct vstor_packet {int operation; TYPE_1__ vm_srb; int flags; } ;
struct vmscsi_request {int dummy; } ;
struct vmbus_channel {int dummy; } ;
struct storvsc_device {int num_outstanding_req; } ;
struct TYPE_4__ {scalar_t__ len; } ;
struct storvsc_cmd_request {TYPE_2__ data_buffer; struct hv_device* device; struct vstor_packet vstor_packet; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 struct storvsc_device* FUNC_1 (struct hv_device*) ;
 int VAR_5 ;
 struct vmbus_channel* FUNC_2 (int ) ;
 int FUNC_3 (int ,struct vstor_packet*,scalar_t__,unsigned long,int ,int ) ;
 int FUNC_4 (struct vmbus_channel*,TYPE_2__*,struct vstor_packet*,scalar_t__,unsigned long) ;
 scalar_t__ VAR_6 ;

__attribute__((used)) static int FUNC_5(struct hv_device *VAR_7,
         struct storvsc_cmd_request *VAR_8)
{
 struct storvsc_device *VAR_9;
 struct vstor_packet *VAR_10;
 struct vmbus_channel *VAR_11;
 int VAR_12 = 0;

 VAR_10 = &VAR_8->vstor_packet;
 VAR_9 = FUNC_1(VAR_7);

 if (!VAR_9)
  return -VAR_0;


 VAR_8->device = VAR_7;




 VAR_11 = FUNC_2(VAR_7->channel);


 VAR_10->flags |= VAR_1;

 VAR_10->vm_srb.length = (sizeof(struct vmscsi_request) -
     VAR_6);


 VAR_10->vm_srb.sense_info_length = VAR_5;


 VAR_10->vm_srb.data_transfer_length =
 VAR_8->data_buffer.len;

 VAR_10->operation = VAR_4;

 if (VAR_8->data_buffer.len) {
  VAR_12 = FUNC_4(VAR_11,
    &VAR_8->data_buffer,
    VAR_10,
    (sizeof(struct vstor_packet) -
    VAR_6),
    (unsigned long)VAR_8);
 } else {
  VAR_12 = FUNC_3(VAR_7->channel, VAR_10,
          (sizeof(struct vstor_packet) -
    VAR_6),
          (unsigned long)VAR_8,
          VAR_3,
          VAR_2);
 }

 if (VAR_12 != 0)
  return VAR_12;

 FUNC_0(&VAR_9->num_outstanding_req);

 return VAR_12;
}
