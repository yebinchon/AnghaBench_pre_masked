
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsusb_device_t {int udev; } ;
struct SmsMsgHdr_ST {int dummy; } ;


 int FUNC_0 (struct SmsMsgHdr_ST*) ;
 int FUNC_1 (int ,int ,void*,size_t,int*,int) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct smsusb_device_t *VAR_3 = (struct smsusb_device_t *) VAR_0;
 int VAR_4;

 FUNC_0((struct SmsMsgHdr_ST *)VAR_1);
 return FUNC_1(VAR_3->udev, FUNC_2(VAR_3->udev, 2),
       VAR_1, VAR_2, &VAR_4, 1000);
}
