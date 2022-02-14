
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {size_t curr_mode; int dev; TYPE_2__ cam; } ;
struct TYPE_3__ {int priv; } ;


 int FUNC_0 (int ,int,int) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 int VAR_1;

 VAR_1 = VAR_0->cam.cam_mode[VAR_0->curr_mode].priv;
 FUNC_0(VAR_0->dev, 0x8500, VAR_1);
 switch (VAR_1) {
 case 0:
 case 1:
  FUNC_0(VAR_0->dev, 0x8700, 0x28);
  break;
 default:


  FUNC_0(VAR_0->dev, 0x8700, 0x23);
  break;
 }
 FUNC_0(VAR_0->dev, 0x8112, 0x10 | 0x20);
 return 0;
}
