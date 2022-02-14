
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsusb_device_t {int * surbs; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct smsusb_device_t*) ;
 int FUNC_2 (struct smsusb_device_t*,int *) ;

__attribute__((used)) static int FUNC_3(struct smsusb_device_t *VAR_1)
{
 int VAR_2, VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  VAR_3 = FUNC_2(VAR_1, &VAR_1->surbs[VAR_2]);
  if (VAR_3 < 0) {
   FUNC_0("smsusb_submit_urb(...) failed");
   FUNC_1(VAR_1);
   break;
  }
 }

 return VAR_3;
}
