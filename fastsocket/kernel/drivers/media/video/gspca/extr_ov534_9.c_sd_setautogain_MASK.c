
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ autogain; } ;
struct gspca_dev {int ctrl_inac; int usb_err; scalar_t__ streaming; } ;
typedef scalar_t__ __s32 ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_1, __s32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 VAR_3->autogain = VAR_2;

 if (VAR_1->streaming) {
  if (VAR_2)
   VAR_1->ctrl_inac |= (1 << VAR_0);
  else
   VAR_1->ctrl_inac &= ~(1 << VAR_0);
  FUNC_0(VAR_1);
 }
 return VAR_1->usb_err;
}
