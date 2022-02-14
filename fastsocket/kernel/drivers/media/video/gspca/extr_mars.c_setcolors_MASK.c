
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int* usb_buf; } ;
typedef int s16 ;
struct TYPE_2__ {int val; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 s16 VAR_3;

 VAR_3 = VAR_2->ctrls[VAR_0].val;
 VAR_1->usb_buf[0] = 0x5f;
 VAR_1->usb_buf[1] = VAR_3 << 3;
 VAR_1->usb_buf[2] = ((VAR_3 >> 2) & 0xf8) | 0x04;
 FUNC_0(VAR_1, 3);
}
