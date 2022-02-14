
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int dummy; } ;
struct gspca_dev {int usb_err; } ;


 int FUNC_0 (struct sd*) ;
 int FUNC_1 (struct sd*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 int VAR_1;
 struct sd *VAR_2 = (struct sd *) VAR_0;

 VAR_1 = FUNC_0(VAR_2);


 if (VAR_1 >= 0)
  VAR_1 = FUNC_1(VAR_2, 0x143f, 0x01);

 VAR_0->usb_err = VAR_1;
}
