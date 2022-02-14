
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* control; } ;
struct usb_line6_variax {int dumpreq; TYPE_1__ model_data; } ;
struct usb_interface {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char*,char*,char*,unsigned int,unsigned int) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, char *VAR_1, int VAR_2)
{
 static const int VAR_3 = 0x7f;
 static const int VAR_4 = 0xf;
 static const int VAR_5 = 1000;

 int VAR_6 = 0;
 unsigned VAR_7, VAR_8;
 struct usb_interface *VAR_9 = FUNC_2(VAR_0);
 struct usb_line6_variax *VAR_10 = FUNC_3(VAR_9);
 const unsigned char *VAR_11 = VAR_10->model_data.control + VAR_2;
 int VAR_12 = FUNC_0(&VAR_10->dumpreq, 0);
 if (VAR_12 < 0)
  return VAR_12;

 if ((VAR_11[0] == 0) && (VAR_11[1] == 0) && (VAR_11[2] == 0))
  VAR_7 = VAR_8 = 0;
 else {
  int VAR_13 = (((VAR_11[0] & 0x7f) << 1) | (VAR_11[1] >> 7)) - VAR_3;
  unsigned VAR_14 = (VAR_11[1] << 8) | VAR_11[2] | 0x8000;
  VAR_13 -= VAR_4;

  if (VAR_13 >= 0) {
   VAR_7 = VAR_14 << VAR_13;
   VAR_8 = 0;
  } else {
   VAR_7 = VAR_14 >> -VAR_13;
   VAR_8 = (VAR_14 << (32 + VAR_13)) & 0xffffffff;
  }

  VAR_8 = (VAR_8 / ((1UL << 31) / (VAR_5 / 2 * 10)) + 5) / 10;
 }

 VAR_6 += FUNC_1(VAR_1 + VAR_6, "%s%d.%03d\n", ((VAR_11[0] & 0x80) ? "-" : ""), VAR_7, VAR_8);
 return VAR_6;
}
