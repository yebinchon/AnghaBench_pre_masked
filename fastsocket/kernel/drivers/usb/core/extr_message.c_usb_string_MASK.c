
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct usb_device {scalar_t__ state; int dev; int string_langid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,char*,unsigned char,int,char*) ;
 int FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (int,int ) ;
 int FUNC_3 (struct usb_device*,unsigned char*) ;
 int FUNC_4 (struct usb_device*,int ,int,unsigned char*) ;
 int FUNC_5 (int *,int,int ,char*,size_t) ;

int FUNC_6(struct usb_device *VAR_7, int VAR_8, char *VAR_9, size_t VAR_10)
{
 unsigned char *VAR_11;
 int VAR_12;

 if (VAR_7->state == VAR_5)
  return -VAR_0;
 if (VAR_10 <= 0 || !VAR_9 || !VAR_8)
  return -VAR_1;
 VAR_9[0] = 0;
 VAR_11 = FUNC_2(256, VAR_3);
 if (!VAR_11)
  return -VAR_2;

 VAR_12 = FUNC_3(VAR_7, VAR_11);
 if (VAR_12 < 0)
  goto errout;

 VAR_12 = FUNC_4(VAR_7, VAR_7->string_langid, VAR_8, VAR_11);
 if (VAR_12 < 0)
  goto errout;

 VAR_10--;
 VAR_12 = FUNC_5((wchar_t *) &VAR_11[2], (VAR_12 - 2) / 2,
   VAR_6, VAR_9, VAR_10);
 VAR_9[VAR_12] = 0;

 if (VAR_11[1] != VAR_4)
  FUNC_0(&VAR_7->dev,
   "wrong descriptor type %02x for string %d (\"%s\")\n",
   VAR_11[1], VAR_8, VAR_9);

 errout:
 FUNC_1(VAR_11);
 return VAR_12;
}
