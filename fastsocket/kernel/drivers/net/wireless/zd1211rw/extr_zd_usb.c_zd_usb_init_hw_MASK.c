
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd_usb {int initialized; } ;
struct zd_mac {int hw; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct zd_usb*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct zd_usb*) ;
 struct zd_mac* FUNC_6 (struct zd_usb*) ;
 int FUNC_7 (struct zd_usb*) ;

int FUNC_8(struct zd_usb *VAR_0)
{
 int VAR_1;
 struct zd_mac *VAR_2 = FUNC_6(VAR_0);

 FUNC_0(FUNC_5(VAR_0), "\n");

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1) {
  FUNC_1(FUNC_5(VAR_0),
         "couldn't load firmware. Error number %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_3(FUNC_7(VAR_0));
 if (VAR_1) {
  FUNC_0(FUNC_5(VAR_0),
   "couldn't reset configuration. Error number %d\n", VAR_1);
  return VAR_1;
 }

 VAR_1 = FUNC_4(VAR_2->hw);
 if (VAR_1) {
  FUNC_0(FUNC_5(VAR_0),
           "couldn't initialize mac. Error number %d\n", VAR_1);
  return VAR_1;
 }

 VAR_0->initialized = 1;
 return 0;
}
