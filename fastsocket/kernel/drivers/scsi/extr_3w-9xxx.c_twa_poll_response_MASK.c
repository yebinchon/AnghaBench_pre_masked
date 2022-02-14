
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ status; } ;
struct TYPE_11__ {scalar_t__ status; int opcode__reserved; } ;
struct TYPE_13__ {TYPE_2__ oldcommand; TYPE_1__ newcommand; } ;
struct TYPE_16__ {TYPE_3__ command; } ;
struct TYPE_15__ {int host; TYPE_6__** command_packet_virt; } ;
struct TYPE_14__ {int response_id; int value; } ;
typedef TYPE_4__ TW_Response_Queue ;
typedef TYPE_5__ TW_Device_Extension ;
typedef TYPE_6__ TW_Command_Full ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_5__*,int,int ,int ) ;
 scalar_t__ FUNC_6 (TYPE_5__*,int ,int) ;

__attribute__((used)) static int FUNC_7(TW_Device_Extension *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6 = 1, VAR_7 = 0, VAR_8;
 TW_Response_Queue VAR_9;
 TW_Command_Full *VAR_10 = VAR_3->command_packet_virt[VAR_4];

 if (FUNC_6(VAR_3, VAR_2, VAR_5) == 0) {
  VAR_9.value = FUNC_4(FUNC_3(VAR_3));
  VAR_8 = FUNC_2(VAR_9.response_id);
  if (VAR_4 != VAR_8) {
   FUNC_1(VAR_3->host, VAR_0, 0x1e, "Found unexpected request id while polling for response");
   goto out;
  }
  if (FUNC_0(VAR_10->command.newcommand.opcode__reserved) == VAR_1) {
   if (VAR_10->command.newcommand.status != 0) {

    FUNC_5(VAR_3, VAR_4, 0, 0);
    goto out;
   }
   VAR_7 = 1;
  } else {
   if (VAR_10->command.oldcommand.status != 0) {

    FUNC_5(VAR_3, VAR_4, 0, 0);
    goto out;
   }
   VAR_7 = 1;
  }
 }

 if (VAR_7)
  VAR_6 = 0;
out:
 return VAR_6;
}
