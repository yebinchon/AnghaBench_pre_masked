
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int name; } ;
struct hfa384x_tx_frame {scalar_t__ sw_support; int duration_id; int seq_ctrl; int tx_rate; int retry_count; int status; } ;
struct TYPE_5__ {int frame_dump; struct net_device* dev; } ;
typedef TYPE_1__ local_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int ,int ,int ,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,struct hfa384x_tx_frame*,int,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,struct hfa384x_tx_frame*,char**) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(local_info_t *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->dev;
 char *VAR_6 = ((void*)0);
 struct hfa384x_tx_frame VAR_7;

 if (FUNC_3(VAR_4, 0, &VAR_7, &VAR_6))
  goto fail;

 if (VAR_4->frame_dump & VAR_3) {
  FUNC_1(VAR_0, "%s: TX - status=0x%04x "
         "retry_count=%d tx_rate=%d seq_ctrl=%d "
         "duration_id=%d\n",
         VAR_5->name, FUNC_5(VAR_7.status),
         VAR_7.retry_count, VAR_7.tx_rate,
         FUNC_5(VAR_7.seq_ctrl),
         FUNC_5(VAR_7.duration_id));
 }

 if (VAR_7.sw_support)
  FUNC_2(VAR_4, &VAR_7, 1, VAR_6);
 FUNC_4(VAR_6);

 fail:
 FUNC_0(VAR_2, VAR_1);
}
