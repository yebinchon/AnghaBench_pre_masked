
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vxge_hw_ring_rxd_1 {scalar_t__ control_1; scalar_t__ control_0; } ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_ring {struct __vxge_hw_channel channel; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int FUNC_0 (struct __vxge_hw_channel*,void**) ;

enum vxge_hw_status FUNC_1(struct __vxge_hw_ring *VAR_1,
 void **VAR_2)
{
 enum vxge_hw_status VAR_3;
 struct __vxge_hw_channel *VAR_4;

 VAR_4 = &VAR_1->channel;

 VAR_3 = FUNC_0(VAR_4, VAR_2);

 if (VAR_3 == VAR_0) {
  struct vxge_hw_ring_rxd_1 *VAR_5 =
   (struct vxge_hw_ring_rxd_1 *)*VAR_2;

  VAR_5->control_0 = VAR_5->control_1 = 0;
 }

 return VAR_3;
}
