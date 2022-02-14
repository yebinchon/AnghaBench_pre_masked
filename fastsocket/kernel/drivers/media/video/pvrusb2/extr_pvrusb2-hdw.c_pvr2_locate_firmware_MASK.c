
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_hdw {TYPE_1__* usb_dev; } ;
struct firmware {int dummy; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct firmware const**,char const*,int *) ;
 int FUNC_2 (char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_3(struct pvr2_hdw *VAR_3,
    const struct firmware **VAR_4,
    const char *VAR_5,
    unsigned int VAR_6,
    const char *VAR_7[])
{
 unsigned int VAR_8;
 int VAR_9 = -VAR_0;
 for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
  VAR_9 = FUNC_1(VAR_4,
           VAR_7[VAR_8],
           &VAR_3->usb_dev->dev);
  if (!VAR_9) {
   FUNC_2("Located %s firmware: %s;"
           " uploading...",
           VAR_5,
           VAR_7[VAR_8]);
   return VAR_8;
  }
  if (VAR_9 == -VAR_1) continue;
  FUNC_0(VAR_2,
      "request_firmware fatal error with code=%d",VAR_9);
  return VAR_9;
 }
 FUNC_0(VAR_2,
     "***WARNING***"
     " Device %s firmware"
     " seems to be missing.",
     VAR_5);
 FUNC_0(VAR_2,
     "Did you install the pvrusb2 firmware files"
     " in their proper location?");
 if (VAR_6 == 1) {
  FUNC_0(VAR_2,
      "request_firmware unable to locate %s file %s",
      VAR_5,VAR_7[0]);
 } else {
  FUNC_0(VAR_2,
      "request_firmware unable to locate"
      " one of the following %s files:",
      VAR_5);
  for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++) {
   FUNC_0(VAR_2,
       "request_firmware: Failed to find %s",
       VAR_7[VAR_8]);
  }
 }
 return VAR_9;
}
