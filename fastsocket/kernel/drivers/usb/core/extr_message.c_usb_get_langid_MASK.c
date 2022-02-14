
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int have_langid; int string_langid; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct usb_device*,int ,int ,unsigned char*) ;

__attribute__((used)) static int FUNC_3(struct usb_device *VAR_2, unsigned char *VAR_3)
{
 int VAR_4;

 if (VAR_2->have_langid)
  return 0;

 if (VAR_2->string_langid < 0)
  return -VAR_1;

 VAR_4 = FUNC_2(VAR_2, 0, 0, VAR_3);



 if (VAR_4 == -VAR_0 || (VAR_4 > 0 && VAR_4 < 4)) {
  VAR_2->string_langid = 0x0409;
  VAR_2->have_langid = 1;
  FUNC_1(&VAR_2->dev,
   "string descriptor 0 malformed (err = %d), "
   "defaulting to 0x%04x\n",
    VAR_4, VAR_2->string_langid);
  return 0;
 }




 if (VAR_4 < 0) {
  FUNC_1(&VAR_2->dev, "string descriptor 0 read error: %d\n",
     VAR_4);
  VAR_2->string_langid = -1;
  return -VAR_1;
 }


 VAR_2->string_langid = VAR_3[2] | (VAR_3[3] << 8);
 VAR_2->have_langid = 1;
 FUNC_0(&VAR_2->dev, "default language 0x%04x\n",
    VAR_2->string_langid);
 return 0;
}
