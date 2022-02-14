
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int* usb_buf; } ;
struct TYPE_2__ {scalar_t__ val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 VAR_2->usb_buf[0] = 0x22;
 if (VAR_3->ctrls[VAR_1].val)
  VAR_2->usb_buf[1] = 0x76;
 else if (VAR_3->ctrls[VAR_0].val)
  VAR_2->usb_buf[1] = 0x7a;
 else
  VAR_2->usb_buf[1] = 0x7e;
 FUNC_0(VAR_2, 2);
}
