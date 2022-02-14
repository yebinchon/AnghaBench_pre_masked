
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sd {int exposure; } ;
struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef int __u8 ;
struct TYPE_3__ {scalar_t__ priv; } ;


 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 __u8 VAR_2;




 VAR_2 = 120 * VAR_1->exposure / 1000;
 if (VAR_2 < 2)
  VAR_2 = 2;
 else if (VAR_2 > 63)
  VAR_2 = 63;

 FUNC_0(VAR_0, 0xff, 0x04);
 FUNC_0(VAR_0, 0x02, VAR_2);



 FUNC_0(VAR_0, 0xff, 0x01);
 if (VAR_0->cam.cam_mode[(int)VAR_0->curr_mode].priv &&
   VAR_2 <= 3) {
  FUNC_0(VAR_0, 0x08, 0x09);
 } else {
  FUNC_0(VAR_0, 0x08, 0x08);
 }


 FUNC_0(VAR_0, 0x11, 0x01);
}
