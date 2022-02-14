
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbat_info {int devicetype; } ;
struct us_data {int transport; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct us_data*,struct usbat_info*) ;

__attribute__((used)) static int FUNC_1(struct us_data *VAR_3,
          struct usbat_info *VAR_4,
          int VAR_5)
{

 if (!VAR_4->devicetype)
  VAR_4->devicetype = VAR_5;

 if (!VAR_4->devicetype)
  FUNC_0(VAR_3, VAR_4);

 switch (VAR_4->devicetype) {
 default:
  return VAR_0;

 case 128:
  VAR_3->transport = VAR_2;
  break;

 case 129:
  VAR_3->transport = VAR_1;
  break;
 }

 return 0;
}
