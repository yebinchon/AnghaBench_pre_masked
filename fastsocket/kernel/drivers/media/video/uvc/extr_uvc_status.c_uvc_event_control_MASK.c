
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uvc_device {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;

__attribute__((used)) static void FUNC_1(struct uvc_device *VAR_1, __u8 *VAR_2, int VAR_3)
{
 char *VAR_4[3] = { "value", "info", "failure" };

 if (VAR_3 < 6 || VAR_2[2] != 0 || VAR_2[4] > 2) {
  FUNC_0(VAR_0, "Invalid control status event "
    "received.\n");
  return;
 }

 FUNC_0(VAR_0, "Control %u/%u %s change len %d.\n",
  VAR_2[1], VAR_2[3], VAR_4[VAR_2[4]], VAR_3);
}
