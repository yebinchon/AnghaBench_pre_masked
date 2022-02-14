
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sd {size_t sensor; scalar_t__ bridge; int gain; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;
struct TYPE_2__ {int flags; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 __u8 VAR_5;
 __u8 VAR_6[3] = { 0, 0, 0 };

 if (VAR_2[VAR_4->sensor].flags & VAR_1) {

  FUNC_1(VAR_3);
  return;
 }

 if (VAR_4->bridge == VAR_0) {
  VAR_5 = VAR_4->gain >> 1;
  VAR_6[0] = VAR_5;
  VAR_6[1] = VAR_5;
  VAR_6[2] = VAR_5;
  FUNC_0(VAR_3, 0x05, VAR_6, 3);
 } else {
  VAR_5 = VAR_4->gain >> 4;
  VAR_6[0] = VAR_5 << 4 | VAR_5;
  VAR_6[1] = VAR_5;
  FUNC_0(VAR_3, 0x10, VAR_6, 2);
 }
}
