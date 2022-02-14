
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct vxge_hw_fifo_txd {int control_0; scalar_t__ host_control; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_2__* stats; struct __vxge_hw_channel channel; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
typedef enum vxge_hw_fifo_tcode { ____Placeholder_vxge_hw_fifo_tcode } vxge_hw_fifo_tcode ;
struct TYPE_3__ {scalar_t__ usage_cnt; } ;
struct TYPE_4__ {TYPE_1__ common_stats; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct __vxge_hw_channel*) ;
 int FUNC_3 (struct __vxge_hw_channel*,void**) ;

enum vxge_hw_status FUNC_4(
 struct __vxge_hw_fifo *VAR_3, void **VAR_4,
 enum vxge_hw_fifo_tcode *VAR_5)
{
 struct __vxge_hw_channel *VAR_6;
 struct vxge_hw_fifo_txd *VAR_7;
 enum vxge_hw_status VAR_8 = VAR_2;

 VAR_6 = &VAR_3->channel;

 FUNC_3(VAR_6, VAR_4);

 VAR_7 = (struct vxge_hw_fifo_txd *)*VAR_4;
 if (VAR_7 == ((void*)0)) {
  VAR_8 = VAR_1;
  goto exit;
 }


 if (!(VAR_7->control_0 & VAR_0)) {

  FUNC_1(VAR_7->host_control != 0);

  FUNC_2(VAR_6);

  *VAR_5 = (u8)FUNC_0(VAR_7->control_0);

  if (VAR_3->stats->common_stats.usage_cnt > 0)
   VAR_3->stats->common_stats.usage_cnt--;

  VAR_8 = VAR_2;
  goto exit;
 }


 *VAR_4 = ((void*)0);
 VAR_8 = VAR_1;
exit:
 return VAR_8;
}
