
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ch341_private {char line_status; int lock; scalar_t__ multi_status_change; } ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct usb_device*,int,int,int ,char*,unsigned int const) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (unsigned int const,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct usb_device *VAR_4, struct ch341_private *VAR_5)
{
 char *VAR_6;
 int VAR_7;
 const unsigned VAR_8 = 8;
 unsigned long VAR_9;

 FUNC_1("ch341_get_status()");

 VAR_6 = FUNC_3(VAR_8, VAR_3);
 if (!VAR_6)
  return -VAR_1;

 VAR_7 = FUNC_0(VAR_4, 0x95, 0x0706, 0, VAR_6, VAR_8);
 if (VAR_7 < 0)
  goto out;


 if (VAR_7 == 2) {
  VAR_7 = 0;
  FUNC_4(&VAR_5->lock, VAR_9);
  VAR_5->line_status = (~(*VAR_6)) & VAR_0;
  VAR_5->multi_status_change = 0;
  FUNC_5(&VAR_5->lock, VAR_9);
 } else
  VAR_7 = -VAR_2;

out: FUNC_2(VAR_6);
 return VAR_7;
}
