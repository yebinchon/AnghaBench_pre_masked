
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct hv_vmbus_device_id {int guid; } ;
typedef int __u8 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;

__attribute__((used)) static const struct hv_vmbus_device_id *FUNC_2(
     const struct hv_vmbus_device_id *VAR_0,
     __u8 *VAR_1)
{
 for (; !FUNC_0(VAR_0->guid); VAR_0++)
  if (!FUNC_1(&VAR_0->guid, VAR_1, sizeof(uuid_le)))
   return VAR_0;

 return ((void*)0);
}
