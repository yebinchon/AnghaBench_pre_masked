
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {int timeout; scalar_t__ errors; int q; int cmd_flags; int cmd_type; int cmd; int cmd_len; } ;
struct pktcdvd_device {TYPE_1__* bdev; } ;
struct packet_command {scalar_t__ data_direction; scalar_t__ quiet; int * cmd; int buflen; int buffer; } ;
struct TYPE_2__ {int bd_disk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct request_queue* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ,struct request*,int ) ;
 struct request* FUNC_3 (struct request_queue*,int ,int ) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (struct request_queue*,struct request*,int ,int ,int ) ;
 int FUNC_6 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_7(struct pktcdvd_device *VAR_10, struct packet_command *VAR_11)
{
 struct request_queue *VAR_12 = FUNC_1(VAR_10->bdev);
 struct request *VAR_13;
 int VAR_14 = 0;

 VAR_13 = FUNC_3(VAR_12, (VAR_11->data_direction == VAR_1) ?
        VAR_8 : VAR_5, VAR_9);
 if (!VAR_13)
  return -VAR_3;

 if (VAR_11->buflen) {
  if (FUNC_5(VAR_12, VAR_13, VAR_11->buffer, VAR_11->buflen, VAR_9))
   goto out;
 }

 VAR_13->cmd_len = FUNC_0(VAR_11->cmd[0]);
 FUNC_6(VAR_13->cmd, VAR_11->cmd, VAR_0);

 VAR_13->timeout = 60*VAR_4;
 VAR_13->cmd_type = VAR_7;
 if (VAR_11->quiet)
  VAR_13->cmd_flags |= VAR_6;

 FUNC_2(VAR_13->q, VAR_10->bdev->bd_disk, VAR_13, 0);
 if (VAR_13->errors)
  VAR_14 = -VAR_2;
out:
 FUNC_4(VAR_13);
 return VAR_14;
}
