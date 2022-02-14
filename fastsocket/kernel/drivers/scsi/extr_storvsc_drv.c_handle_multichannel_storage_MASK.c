
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vstor_packet {scalar_t__ operation; int sub_channel_count; scalar_t__ status; int flags; } ;
struct storvsc_cmd_request {int wait_event; struct vstor_packet vstor_packet; } ;
struct storvsc_device {int open_sub_channel; struct storvsc_cmd_request init_request; } ;
struct hv_device {int channel; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct storvsc_device* FUNC_0 (struct hv_device*) ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct storvsc_cmd_request*,int ,int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,struct vstor_packet*,scalar_t__,unsigned long,int ,int ) ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ VAR_7 ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static void FUNC_8(struct hv_device *VAR_8, int VAR_9)
{
 struct storvsc_device *VAR_10;
 int VAR_11 = FUNC_3();
 int VAR_12;
 struct storvsc_cmd_request *VAR_13;
 struct vstor_packet *VAR_14;
 int VAR_15, VAR_16;

 VAR_12 = ((VAR_9 > VAR_11) ? VAR_11 : VAR_9);
 VAR_10 = FUNC_0(VAR_8);
 if (!VAR_10)
  return;

 VAR_13 = &VAR_10->init_request;
 VAR_14 = &VAR_13->vstor_packet;

 VAR_10->open_sub_channel = 1;



 FUNC_6(VAR_8->channel, VAR_6);






 if (FUNC_4(VAR_8->channel))
  return;

 VAR_10->open_sub_channel = 0;



 FUNC_2(VAR_13, 0, sizeof(struct storvsc_cmd_request));
 FUNC_1(&VAR_13->wait_event);
 VAR_14->operation = VAR_5;
 VAR_14->flags = VAR_1;
 VAR_14->sub_channel_count = VAR_12;

 VAR_15 = FUNC_5(VAR_8->channel, VAR_14,
          (sizeof(struct vstor_packet) -
          VAR_7),
          (unsigned long)VAR_13,
          VAR_3,
          VAR_2);

 if (VAR_15 != 0)
  return;

 VAR_16 = FUNC_7(&VAR_13->wait_event, 10*VAR_0);
 if (VAR_16 == 0)
  return;

 if (VAR_14->operation != VAR_4 ||
     VAR_14->status != 0)
  return;





 VAR_10->open_sub_channel = 1;
 FUNC_4(VAR_8->channel);
}
