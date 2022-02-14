
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int hflip; int flags; int vflip; int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;






 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_5;
 u8 VAR_7[2], VAR_8, VAR_9;

 VAR_8 = VAR_6->hflip;
 if (VAR_6->flags & VAR_0)
  VAR_8 = !VAR_8;
 VAR_9 = VAR_6->vflip;
 if (VAR_6->flags & VAR_1)
  VAR_9 = !VAR_9;
 switch (VAR_6->sensor) {
 case 133:
 case 132:
 case 131:
  VAR_7[0] = VAR_7[1] = 0;
  FUNC_0(VAR_5, 0xf0, VAR_7, 2);
  VAR_7[0] = VAR_6->sensor == 133 ? 0x03 : 0x01;
  VAR_7[1] = 0x02 * VAR_8
   | 0x01 * VAR_9;
  FUNC_0(VAR_5, 0x20, VAR_7, 2);
  break;
 case 130:
 case 129:
  VAR_7[0] = VAR_6->sensor == 130 ? 0x01 : 0x07;
  VAR_7[0] |= VAR_2 * VAR_8
   | VAR_3 * VAR_9;
  FUNC_0(VAR_5, VAR_4, VAR_7, 1);
  break;
 case 128:
  VAR_7[0] = 0;
  FUNC_0(VAR_5, 0x03, VAR_7, 1);
  VAR_7[0] = 0x80 * VAR_8
   | 0x40 * VAR_9
   | 0x06;
  FUNC_0(VAR_5, 0x1e, VAR_7, 1);
  break;
 }
}
