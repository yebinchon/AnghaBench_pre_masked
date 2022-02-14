
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct __vxge_hw_vpath_handle {int vpath; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

enum vxge_hw_status FUNC_1(
   struct __vxge_hw_vpath_handle *VAR_2,
   u32 VAR_3)
{
 enum vxge_hw_status VAR_4 = VAR_1;

 if (VAR_2 == ((void*)0)) {
  VAR_4 = VAR_0;
  goto exit;
 }

 VAR_4 = FUNC_0(VAR_2->vpath, VAR_3);
exit:
 return VAR_4;
}
