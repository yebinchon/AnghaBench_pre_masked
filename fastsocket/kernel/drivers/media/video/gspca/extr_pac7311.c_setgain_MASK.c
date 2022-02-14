
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int gain; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 int VAR_3 = VAR_0 - VAR_2->gain;

 if (VAR_3 < 1)
  VAR_3 = 1;
 else if (VAR_3 > 245)
  VAR_3 = 245;
 FUNC_0(VAR_1, 0xff, 0x04);
 FUNC_0(VAR_1, 0x0e, 0x00);
 FUNC_0(VAR_1, 0x0f, VAR_3);


 FUNC_0(VAR_1, 0x11, 0x01);
}
