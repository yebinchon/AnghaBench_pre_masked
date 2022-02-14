
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_host_config {int dummy; } ;
struct TYPE_2__ {int bNumConfigurations; } ;
struct device {int dummy; } ;
struct usb_device {scalar_t__ authorized; unsigned char** rawdescriptors; TYPE_1__ descriptor; int * config; struct device dev; } ;
struct usb_config_descriptor {int wTotalLength; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,char*,unsigned int,unsigned int,...) ;
 int FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned int,int ) ;
 void* FUNC_4 (unsigned int,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 unsigned int FUNC_6 (int,unsigned int) ;
 int FUNC_7 (struct usb_device*,int ,unsigned int,unsigned char*,unsigned int) ;
 int FUNC_8 (struct device*,unsigned int,int *,unsigned char*,unsigned int) ;

int FUNC_9(struct usb_device *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 int VAR_9 = VAR_7->descriptor.bNumConfigurations;
 int VAR_10 = 0;
 unsigned int VAR_11, VAR_12;
 unsigned char *VAR_13;
 unsigned char *VAR_14;
 struct usb_config_descriptor *VAR_15;

 VAR_11 = 0;
 if (VAR_7->authorized == 0)
  goto out_not_authorized;
 VAR_10 = -VAR_1;
 if (VAR_9 > VAR_6) {
  FUNC_1(VAR_8, "too many configurations: %d, "
      "using maximum allowed: %d\n", VAR_9, VAR_6);
  VAR_7->descriptor.bNumConfigurations = VAR_9 = VAR_6;
 }

 if (VAR_9 < 1) {
  FUNC_0(VAR_8, "no configurations\n");
  return -VAR_0;
 }

 VAR_12 = VAR_9 * sizeof(struct usb_host_config);
 VAR_7->config = FUNC_4(VAR_12, VAR_3);
 if (!VAR_7->config)
  goto err2;

 VAR_12 = VAR_9 * sizeof(char *);
 VAR_7->rawdescriptors = FUNC_4(VAR_12, VAR_3);
 if (!VAR_7->rawdescriptors)
  goto err2;

 VAR_13 = FUNC_3(VAR_5, VAR_3);
 if (!VAR_13)
  goto err2;
 VAR_15 = (struct usb_config_descriptor *)VAR_13;

 VAR_10 = 0;
 for (; VAR_11 < VAR_9; VAR_11++) {


  VAR_10 = FUNC_7(VAR_7, VAR_4, VAR_11,
      VAR_13, VAR_5);
  if (VAR_10 < 0) {
   FUNC_0(VAR_8, "unable to read config index %d "
       "descriptor/%s: %d\n", VAR_11, "start", VAR_10);
   if (VAR_10 != -VAR_2)
    goto err;
   FUNC_0(VAR_8, "chopping to %d config(s)\n", VAR_11);
   VAR_7->descriptor.bNumConfigurations = VAR_11;
   break;
  } else if (VAR_10 < 4) {
   FUNC_0(VAR_8, "config index %d descriptor too short "
       "(expected %i, got %i)\n", VAR_11,
       VAR_5, VAR_10);
   VAR_10 = -VAR_0;
   goto err;
  }
  VAR_12 = FUNC_6((int) FUNC_5(VAR_15->wTotalLength),
      VAR_5);


  VAR_14 = FUNC_3(VAR_12, VAR_3);
  if (!VAR_14) {
   VAR_10 = -VAR_1;
   goto err;
  }
  VAR_10 = FUNC_7(VAR_7, VAR_4, VAR_11,
      VAR_14, VAR_12);
  if (VAR_10 < 0) {
   FUNC_0(VAR_8, "unable to read config index %d "
       "descriptor/%s\n", VAR_11, "all");
   FUNC_2(VAR_14);
   goto err;
  }
  if (VAR_10 < VAR_12) {
   FUNC_1(VAR_8, "config index %d descriptor too short "
       "(expected %i, got %i)\n", VAR_11, VAR_12, VAR_10);
   VAR_12 = VAR_10;
  }

  VAR_7->rawdescriptors[VAR_11] = VAR_14;

  VAR_10 = FUNC_8(&VAR_7->dev, VAR_11,
      &VAR_7->config[VAR_11], VAR_14, VAR_12);
  if (VAR_10 < 0) {
   ++VAR_11;
   goto err;
  }
 }
 VAR_10 = 0;

err:
 FUNC_2(VAR_13);
out_not_authorized:
 VAR_7->descriptor.bNumConfigurations = VAR_11;
err2:
 if (VAR_10 == -VAR_1)
  FUNC_0(VAR_8, "out of memory\n");
 return VAR_10;
}
