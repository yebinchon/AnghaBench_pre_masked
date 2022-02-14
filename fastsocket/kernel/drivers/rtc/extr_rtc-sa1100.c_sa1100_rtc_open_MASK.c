
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (int ,struct device*) ;
 int FUNC_2 (int ,int ,int ,char*,struct device*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_2(VAR_2, VAR_4, VAR_0,
    "rtc 1Hz", VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_6, "IRQ %d already in use.\n", VAR_2);
  goto fail_ui;
 }
 VAR_7 = FUNC_2(VAR_3, VAR_4, VAR_0,
    "rtc Alrm", VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_6, "IRQ %d already in use.\n", VAR_3);
  goto fail_ai;
 }
 VAR_7 = FUNC_2(VAR_1, VAR_5, VAR_0,
    "rtc timer", VAR_6);
 if (VAR_7) {
  FUNC_0(VAR_6, "IRQ %d already in use.\n", VAR_1);
  goto fail_pi;
 }
 return 0;

 fail_pi:
 FUNC_1(VAR_3, VAR_6);
 fail_ai:
 FUNC_1(VAR_2, VAR_6);
 fail_ui:
 return VAR_7;
}
