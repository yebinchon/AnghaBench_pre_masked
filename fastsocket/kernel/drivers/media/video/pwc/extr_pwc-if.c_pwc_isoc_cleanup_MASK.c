
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwc_device {scalar_t__ iso_init; scalar_t__ error_status; int udev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pwc_device*) ;
 int FUNC_2 (struct pwc_device*) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(struct pwc_device *VAR_1)
{
 FUNC_0(">> pwc_isoc_cleanup()\n");
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->iso_init == 0)
  return;

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);




 if (VAR_1->error_status != VAR_0) {
  FUNC_0("Setting alternate interface 0.\n");
  FUNC_3(VAR_1->udev, 0, 0);
 }

 VAR_1->iso_init = 0;
 FUNC_0("<< pwc_isoc_cleanup()\n");
}
