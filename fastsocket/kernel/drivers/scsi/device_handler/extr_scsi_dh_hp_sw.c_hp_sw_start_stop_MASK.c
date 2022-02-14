
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request {int cmd_flags; int* cmd; int q; struct hp_sw_dh_data* end_io_data; scalar_t__ sense_len; int sense; int timeout; int cmd_len; int cmd_type; } ;
struct hp_sw_dh_data {int sense; TYPE_1__* sdev; } ;
struct TYPE_2__ {int request_queue; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ,int *,struct request*,int,int ) ;
 struct request* FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_4(struct hp_sw_dh_data *VAR_12)
{
 struct request *VAR_13;

 VAR_13 = FUNC_2(VAR_12->sdev->request_queue, VAR_10, VAR_0);
 if (!VAR_13)
  return VAR_7;

 VAR_13->cmd_type = VAR_5;
 VAR_13->cmd_flags |= VAR_2 | VAR_4 |
     VAR_3;
 VAR_13->cmd_len = FUNC_0(VAR_9);
 VAR_13->cmd[0] = VAR_9;
 VAR_13->cmd[4] = 1;
 VAR_13->timeout = VAR_1;
 VAR_13->sense = VAR_12->sense;
 FUNC_3(VAR_13->sense, 0, VAR_8);
 VAR_13->sense_len = 0;
 VAR_13->end_io_data = VAR_12;

 FUNC_1(VAR_13->q, ((void*)0), VAR_13, 1, VAR_11);
 return VAR_6;
}
