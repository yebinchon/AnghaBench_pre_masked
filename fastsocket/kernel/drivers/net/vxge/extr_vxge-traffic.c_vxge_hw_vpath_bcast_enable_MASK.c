
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct __vxge_hw_vpath_handle {struct __vxge_hw_virtualpath* vpath; } ;
struct __vxge_hw_virtualpath {TYPE_1__* vp_reg; int * ringh; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;
struct TYPE_2__ {int rxmac_vcfg0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int,int *) ;

enum vxge_hw_status FUNC_2(
   struct __vxge_hw_vpath_handle *VAR_3)
{
 u64 VAR_4;
 struct __vxge_hw_virtualpath *VAR_5;
 enum vxge_hw_status VAR_6 = VAR_1;

 if ((VAR_3 == ((void*)0)) || (VAR_3->vpath->ringh == ((void*)0))) {
  VAR_6 = VAR_0;
  goto exit;
 }

 VAR_5 = VAR_3->vpath;

 VAR_4 = FUNC_0(&VAR_5->vp_reg->rxmac_vcfg0);

 if (!(VAR_4 & VAR_2)) {
  VAR_4 |= VAR_2;
  FUNC_1(VAR_4, &VAR_5->vp_reg->rxmac_vcfg0);
 }
exit:
 return VAR_6;
}
