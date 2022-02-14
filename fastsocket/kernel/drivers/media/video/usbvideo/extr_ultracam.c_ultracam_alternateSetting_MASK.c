
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvd {int last_error; int iface; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct uvd *VAR_1, int VAR_2)
{
 static const char VAR_3[] = "ultracam_alternateSetting";
 int VAR_4;
 VAR_4 = FUNC_1(VAR_1->dev, VAR_1->iface, VAR_2);
 if (VAR_4 < 0) {
  FUNC_0("%s: usb_set_interface error", VAR_3);
  VAR_1->last_error = VAR_4;
  return -VAR_0;
 }
 return 0;
}
