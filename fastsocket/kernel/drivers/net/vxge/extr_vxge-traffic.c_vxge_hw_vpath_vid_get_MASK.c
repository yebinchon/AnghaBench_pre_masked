
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct __vxge_hw_vpath_handle {int dummy; } ;
typedef enum vxge_hw_status { ____Placeholder_vxge_hw_status } vxge_hw_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct __vxge_hw_vpath_handle*,int ,int ,int ,int *,int *) ;

enum vxge_hw_status
FUNC_2(struct __vxge_hw_vpath_handle *VAR_4, u64 *VAR_5)
{
 u64 VAR_6;
 enum vxge_hw_status VAR_7 = VAR_1;

 if (VAR_4 == ((void*)0)) {
  VAR_7 = VAR_0;
  goto exit;
 }

 VAR_7 = FUNC_1(VAR_4,
   VAR_2,
   VAR_3,
   0, VAR_5, &VAR_6);

 *VAR_5 = FUNC_0(*VAR_5);
exit:
 return VAR_7;
}
