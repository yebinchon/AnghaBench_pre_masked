
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uuid_le ;
struct vmbus_channel {int dummy; } ;
struct hv_device {int dev_instance; int dev_type; struct vmbus_channel* channel; } ;


 int VAR_0 ;
 struct hv_device* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (char*) ;

struct hv_device *FUNC_3(uuid_le *VAR_1,
         uuid_le *VAR_2,
         struct vmbus_channel *VAR_3)
{
 struct hv_device *VAR_4;

 VAR_4 = FUNC_0(sizeof(struct hv_device), VAR_0);
 if (!VAR_4) {
  FUNC_2("Unable to allocate device object for child device\n");
  return ((void*)0);
 }

 VAR_4->channel = VAR_3;
 FUNC_1(&VAR_4->dev_type, VAR_1, sizeof(uuid_le));
 FUNC_1(&VAR_4->dev_instance, VAR_2,
        sizeof(uuid_le));


 return VAR_4;
}
