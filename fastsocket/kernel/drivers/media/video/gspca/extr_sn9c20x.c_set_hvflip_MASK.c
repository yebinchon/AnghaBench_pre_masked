
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sd {int flags; int hflip; int vflip; int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;







 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int,int*) ;
 int FUNC_2 (struct gspca_dev*,int,int*) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 u8 VAR_3, VAR_4, VAR_5, VAR_6;
 u16 VAR_7;
 struct sd *VAR_8 = (struct sd *) VAR_2;

 if ((VAR_8->flags & VAR_0) && FUNC_0(VAR_1)) {
  VAR_5 = !VAR_8->hflip;
  VAR_6 = !VAR_8->vflip;
 } else {
  VAR_5 = VAR_8->hflip;
  VAR_6 = VAR_8->vflip;
 }

 switch (VAR_8->sensor) {
 case 128:
  FUNC_1(VAR_2, 0x1e, &VAR_3);
  VAR_3 &= ~0x30;
  VAR_4 = 0x01;
  if (VAR_5)
   VAR_3 |= 0x20;
  if (VAR_6) {
   VAR_3 |= 0x10;
   VAR_4 = 0x49;
  }
  FUNC_3(VAR_2, 0x1e, VAR_3);
  FUNC_3(VAR_2, 0x3a, VAR_4);
  break;
 case 130:
 case 131:
  FUNC_2(VAR_2, 0x20, &VAR_7);
  VAR_7 &= ~0xc0a0;
  if (VAR_5)
   VAR_7 |= 0x8080;
  if (VAR_6)
   VAR_7 |= 0x4020;
  FUNC_4(VAR_2, 0x20, VAR_7);
  break;
 case 132:
 case 133:
 case 129:
  FUNC_2(VAR_2, 0x20, &VAR_7);
  VAR_7 &= ~0x0003;
  if (VAR_5)
   VAR_7 |= 0x0002;
  if (VAR_6)
   VAR_7 |= 0x0001;
  FUNC_4(VAR_2, 0x20, VAR_7);
  break;
 case 134:
  FUNC_1(VAR_2, 0x01, &VAR_3);
  VAR_3 &= ~0x03;
  if (VAR_6)
   VAR_3 |= 0x01;
  if (VAR_5)
   VAR_3 |= 0x02;
  FUNC_3(VAR_2, 0x01, VAR_3);
  break;
 }
 return 0;
}
