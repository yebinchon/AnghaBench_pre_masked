
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smscore_device_t {int device; int devpath; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct smscore_device_t*) ;
 int FUNC_4 (struct smscore_device_t*,int ,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct smscore_device_t*,int ) ;

int FUNC_7(struct smscore_device_t *VAR_1)
{
 int VAR_2 = FUNC_6(
   VAR_1, FUNC_5(VAR_1->devpath));
 if (VAR_2 < 0) {
  FUNC_2("set device mode faile , rc %d", VAR_2);
  return VAR_2;
 }

 FUNC_0(&VAR_0);

 VAR_2 = FUNC_4(VAR_1, VAR_1->device, 1);
 FUNC_3(VAR_1);

 FUNC_2("device %p started, rc %d", VAR_1, VAR_2);

 FUNC_1(&VAR_0);

 return VAR_2;
}
