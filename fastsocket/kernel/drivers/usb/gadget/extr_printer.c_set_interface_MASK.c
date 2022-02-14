
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct printer_dev {int interface; int gadget; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct printer_dev*,char*,...) ;

 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct printer_dev*) ;
 int FUNC_3 (struct printer_dev*) ;

__attribute__((used)) static int
FUNC_4(struct printer_dev *VAR_2, unsigned VAR_3)
{
 int VAR_4 = 0;

 if (FUNC_1(VAR_2->gadget) && VAR_2->interface < 0) {

  FUNC_0(VAR_2, "can't change interfaces\n");
  return -VAR_1;
 }


 switch (VAR_2->interface) {
 case 128:
  FUNC_2(VAR_2);
  break;
 }

 switch (VAR_3) {
 case 128:
  VAR_4 = FUNC_3(VAR_2);
  if (VAR_4) {
   FUNC_2(VAR_2);
  } else {
   VAR_2->interface = 128;
  }
  break;
 default:
  VAR_4 = -VAR_0;

 }

 if (!VAR_4)
  FUNC_0(VAR_2, "Using interface %x\n", VAR_3);

 return VAR_4;
}
