
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {TYPE_1__* ctrls; } ;
struct gspca_dev {int usb_err; } ;
typedef scalar_t__ __s32 ;
struct TYPE_2__ {scalar_t__ val; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_2, __s32 VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_2;


 VAR_4->ctrls[VAR_0].val = VAR_3;
 if (VAR_3)
  VAR_4->ctrls[VAR_1].val = 0;
 FUNC_0(VAR_2);
 return VAR_2->usb_err;
}
