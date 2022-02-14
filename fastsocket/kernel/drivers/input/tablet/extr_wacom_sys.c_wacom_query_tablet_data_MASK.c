
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wacom_features {scalar_t__ type; } ;
struct usb_interface {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned char*) ;
 unsigned char* FUNC_1 (int,int ) ;
 int FUNC_2 (struct usb_interface*,int ,int,unsigned char*,int,int) ;
 int FUNC_3 (struct usb_interface*,int ,int,unsigned char*,int,int) ;

__attribute__((used)) static int FUNC_4(struct usb_interface *VAR_5, struct wacom_features *VAR_6)
{
 unsigned char *VAR_7;
 int VAR_8 = 0, VAR_9 = 2;
 int VAR_10 = -VAR_0;

 VAR_7 = FUNC_1(4, VAR_1);
 if (!VAR_7)
  return VAR_10;



 if (VAR_6->type == VAR_3) {
  do {
   VAR_7[0] = 3;
   VAR_7[1] = 4;
   VAR_7[2] = 0;
   VAR_7[3] = 0;
   VAR_9 = 3;
   VAR_10 = FUNC_3(VAR_5, VAR_4,
    VAR_9, VAR_7, 4, 1);
   if (VAR_10 >= 0)
    VAR_10 = FUNC_2(VAR_5,
     VAR_4, VAR_9,
     VAR_7, 4, 1);
  } while ((VAR_10 < 0 || VAR_7[1] != 4) && VAR_8++ < 5);
 } else if (VAR_6->type != VAR_2) {
  do {
   VAR_7[0] = 2;
   VAR_7[1] = 2;
   VAR_10 = FUNC_3(VAR_5, VAR_4,
    VAR_9, VAR_7, 2, 1);
   if (VAR_10 >= 0)
    VAR_10 = FUNC_2(VAR_5,
     VAR_4, VAR_9,
     VAR_7, 2, 1);
  } while ((VAR_10 < 0 || VAR_7[1] != 2) && VAR_8++ < 5);
 }

 FUNC_0(VAR_7);

 return VAR_10 < 0 ? VAR_10 : 0;
}
