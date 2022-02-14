
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fw_packet {int ack; int (* callback ) (struct fw_packet*,TYPE_1__*,int ) ;int header; int speed; int payload_length; int payload_bus; struct driver_data* driver_data; } ;
struct TYPE_2__ {int device; } ;
struct context {int tasklet; } ;
struct fw_ohci {TYPE_1__ card; struct context at_request_ctx; } ;
struct fw_card {int dummy; } ;
struct driver_data {int * packet; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct fw_ohci* FUNC_1 (struct fw_card*) ;
 int FUNC_2 (char,int ,int ,int) ;
 int FUNC_3 (struct fw_packet*,TYPE_1__*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct fw_card *VAR_3, struct fw_packet *VAR_4)
{
 struct fw_ohci *VAR_5 = FUNC_1(VAR_3);
 struct context *VAR_6 = &VAR_5->at_request_ctx;
 struct driver_data *VAR_7 = VAR_4->driver_data;
 int VAR_8 = -VAR_1;

 FUNC_4(&VAR_6->tasklet);

 if (VAR_4->ack != 0)
  goto out;

 if (VAR_4->payload_bus)
  FUNC_0(VAR_5->card.device, VAR_4->payload_bus,
     VAR_4->payload_length, VAR_0);

 FUNC_2('T', VAR_4->speed, VAR_4->header, 0x20);
 VAR_7->packet = ((void*)0);
 VAR_4->ack = VAR_2;
 VAR_4->callback(VAR_4, &VAR_5->card, VAR_4->ack);
 VAR_8 = 0;
 out:
 FUNC_5(&VAR_6->tasklet);

 return VAR_8;
}
