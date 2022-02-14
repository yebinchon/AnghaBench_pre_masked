
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int ctrl_inac; int* usb_buf; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 VAR_2->ctrl_inac = (1 << VAR_1) | (1 << VAR_0);
 if (VAR_3->ctrls[VAR_1].val || VAR_3->ctrls[VAR_0].val) {
  VAR_3->ctrls[VAR_1].val = 0;
  VAR_3->ctrls[VAR_0].val = 0;
  FUNC_2(VAR_2);
  FUNC_0(20);
 }

 VAR_2->usb_buf[0] = 1;
 VAR_2->usb_buf[1] = 0;
 FUNC_1(VAR_2, 2);
}
