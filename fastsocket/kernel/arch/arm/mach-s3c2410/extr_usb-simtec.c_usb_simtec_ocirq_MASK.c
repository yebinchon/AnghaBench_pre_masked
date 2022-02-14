
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c2410_hcd_info {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct s3c2410_hcd_info*,int) ;

__attribute__((used)) static irqreturn_t
FUNC_4(int VAR_1, void *VAR_2)
{
 struct s3c2410_hcd_info *VAR_3 = VAR_2;

 if (FUNC_1(FUNC_0(10)) == 0) {
  FUNC_2("usb_simtec: over-current irq (oc detected)\n");
  FUNC_3(VAR_3, 3);
 } else {
  FUNC_2("usb_simtec: over-current irq (oc cleared)\n");
  FUNC_3(VAR_3, 0);
 }

 return VAR_0;
}
