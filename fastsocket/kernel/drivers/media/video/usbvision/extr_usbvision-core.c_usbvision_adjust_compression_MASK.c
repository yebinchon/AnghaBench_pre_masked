
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_usbvision {int used_bandwidth; int compr_level; int last_compr_level; scalar_t__ bridge_type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct usb_usbvision*,int ,unsigned char*,int) ;

__attribute__((used)) static int FUNC_3(struct usb_usbvision *VAR_5)
{
 int VAR_6 = 0;
 unsigned char VAR_7[6];

 FUNC_0(VAR_2, "");
 if ((VAR_4) && (VAR_5->used_bandwidth > 0)) {
  VAR_5->compr_level += (VAR_5->used_bandwidth - 90) / 2;
  FUNC_1(VAR_5->compr_level, 0, 100);
  if (VAR_5->compr_level != VAR_5->last_compr_level) {
   int VAR_8;

   if (VAR_5->bridge_type == VAR_0 || VAR_5->bridge_type == VAR_1) {
    VAR_7[0] = (unsigned char)(4 + 16 * VAR_5->compr_level / 100);
    VAR_7[1] = (unsigned char)(4 + 8 * VAR_5->compr_level / 100);
    VAR_8 = 7 + 248 * VAR_5->compr_level / 100;
    VAR_7[2] = (unsigned char)(VAR_8 & 0xFF);
    VAR_7[3] = (unsigned char)(VAR_8 & 0xFF);
    VAR_8 = 1 + 42 * VAR_5->compr_level / 100;
    VAR_7[4] = (unsigned char)(VAR_8 & 0xFF);
    VAR_7[5] = (unsigned char)(VAR_8 & 0xFF);
   } else {
    VAR_7[0] = (unsigned char)(4 + 16 * VAR_5->compr_level / 100);
    VAR_7[1] = (unsigned char)(4 + 8 * VAR_5->compr_level / 100);
    VAR_8 = 2 + 253 * VAR_5->compr_level / 100;
    VAR_7[2] = (unsigned char)(VAR_8 & 0xFF);
    VAR_7[3] = 0;
    VAR_8 = 0 + 43 * VAR_5->compr_level / 100;
    VAR_7[4] = (unsigned char)(VAR_8 & 0xFF);
    VAR_7[5] = 0;
   }
   VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_7, 6);
   if (VAR_6 == 0) {
    FUNC_0(VAR_2, "new compr params %#02x %#02x %#02x %#02x %#02x %#02x", VAR_7[0],
        VAR_7[1], VAR_7[2], VAR_7[3], VAR_7[4], VAR_7[5]);
    VAR_5->last_compr_level = VAR_5->compr_level;
   }
  }
 }
 return VAR_6;
}
