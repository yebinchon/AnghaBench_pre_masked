
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* cam_mode; } ;
struct gspca_dev {scalar_t__ curr_mode; TYPE_2__ cam; } ;
typedef size_t s32 ;
struct TYPE_3__ {size_t priv; } ;


 int FUNC_0 (int ) ;


 int FUNC_1 (struct gspca_dev*,int,int,int,int,int,int *) ;
 int FUNC_2 (struct gspca_dev*,int ,int ) ;
 int ** VAR_0 ;
 int ** VAR_1 ;
 int ** VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_7)
{
 s32 VAR_8 = VAR_7->cam.cam_mode[(s32) VAR_7->curr_mode].priv;

 FUNC_1(VAR_7, 0x40, 5, 0x0001, 0x0000, 0, ((void*)0));

 FUNC_2(VAR_7, VAR_6,
    FUNC_0(VAR_6));

 switch (VAR_8) {
 case 129:
  FUNC_2(VAR_7, VAR_3,
     FUNC_0(VAR_3));
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 64, VAR_0[0]);
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 40, VAR_0[1]);
  FUNC_1(VAR_7, 0x40, 3, 0x0000, 0x0200, 12, VAR_0[2]);
  break;

 case 128:
  FUNC_2(VAR_7, VAR_5,
     FUNC_0(VAR_5));
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 64, VAR_2[0]);
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 40, VAR_2[1]);
  FUNC_1(VAR_7, 0x40, 3, 0x0000, 0x0200, 12, VAR_2[2]);
  break;

 default:
  FUNC_2(VAR_7, VAR_4,
     FUNC_0(VAR_4));
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 60, VAR_1[0]);
  FUNC_1(VAR_7, 0x40, 3, 0xba00, 0x0200, 40, VAR_1[1]);
  FUNC_1(VAR_7, 0x40, 3, 0x0000, 0x0200, 12, VAR_1[2]);
  break;
 }
 return 0;
}
