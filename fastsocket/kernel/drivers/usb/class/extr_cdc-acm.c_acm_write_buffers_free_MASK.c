
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct acm_wb {int dmah; int buf; } ;
struct acm {int writesize; struct acm_wb* wb; int control; } ;


 int VAR_0 ;
 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (struct usb_device*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct acm *VAR_1)
{
 int VAR_2;
 struct acm_wb *VAR_3;
 struct usb_device *VAR_4 = FUNC_0(VAR_1->control);

 for (VAR_3 = &VAR_1->wb[0], VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_3++)
  FUNC_1(VAR_4, VAR_1->writesize, VAR_3->buf, VAR_3->dmah);
}
