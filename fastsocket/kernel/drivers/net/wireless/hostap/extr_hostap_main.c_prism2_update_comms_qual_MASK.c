
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct hostap_interface {TYPE_2__* local; } ;
struct hfa384x_comms_quality {int noise_level; int signal_level; int comm_qual; } ;
typedef int sq ;
typedef void* s16 ;
struct TYPE_4__ {scalar_t__ sta_fw_ver; void* last_comms_qual_update; void* avg_noise; void* avg_signal; void* comms_qual; int dev; TYPE_1__* func; } ;
typedef TYPE_2__ local_info_t ;
struct TYPE_3__ {scalar_t__ (* get_rid ) (int ,int ,struct hfa384x_comms_quality*,int,int) ;} ;


 void* FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int,int) ;
 void* VAR_2 ;
 void* FUNC_2 (int ) ;
 struct hostap_interface* FUNC_3 (struct net_device*) ;
 scalar_t__ FUNC_4 (int ,int ,struct hfa384x_comms_quality*,int,int) ;
 scalar_t__ FUNC_5 (int ,int ,struct hfa384x_comms_quality*,int,int) ;

int FUNC_6(struct net_device *VAR_3)
{
 struct hostap_interface *VAR_4;
 local_info_t *VAR_5;
 int VAR_6 = 0;
 struct hfa384x_comms_quality VAR_7;

 VAR_4 = FUNC_3(VAR_3);
 VAR_5 = VAR_4->local;
 if (!VAR_5->sta_fw_ver)
  VAR_6 = -1;
 else if (VAR_5->sta_fw_ver >= FUNC_1(1,3,1)) {
  if (VAR_5->func->get_rid(VAR_5->dev,
      VAR_1,
      &VAR_7, sizeof(VAR_7), 1) >= 0) {
   VAR_5->comms_qual = (s16) FUNC_2(VAR_7.comm_qual);
   VAR_5->avg_signal = (s16) FUNC_2(VAR_7.signal_level);
   VAR_5->avg_noise = (s16) FUNC_2(VAR_7.noise_level);
   VAR_5->last_comms_qual_update = VAR_2;
  } else
   VAR_6 = -1;
 } else {
  if (VAR_5->func->get_rid(VAR_5->dev, VAR_0,
      &VAR_7, sizeof(VAR_7), 1) >= 0) {
   VAR_5->comms_qual = FUNC_2(VAR_7.comm_qual);
   VAR_5->avg_signal = FUNC_0(
    FUNC_2(VAR_7.signal_level));
   VAR_5->avg_noise = FUNC_0(
    FUNC_2(VAR_7.noise_level));
   VAR_5->last_comms_qual_update = VAR_2;
  } else
   VAR_6 = -1;
 }

 return VAR_6;
}
