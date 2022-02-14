
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; } ;
struct gspca_dev {int dummy; } ;





 int FUNC_0 (struct gspca_dev*,int ,int,int) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2 = 1;

 FUNC_1(VAR_0);
 FUNC_3(VAR_0);
 FUNC_2(VAR_0);

 switch (VAR_1->bridge) {
 case 130:
 case 129:
  VAR_2 = 0;

 default:


  FUNC_0(VAR_0, 0, 0x21ad, 0x00);
  FUNC_0(VAR_0, 0, 0x21ac, 0x01);
  FUNC_0(VAR_0, 0, 0x21a3, 0x00);
  break;
 case 128:
  FUNC_0(VAR_0, 0, 0x20f5, 0x40);
  FUNC_0(VAR_0, 0, 0x20f4, 0x01);
  FUNC_0(VAR_0, 0, 0x2089, 0x00);
  break;
 }
 if (VAR_2)
  FUNC_4(VAR_0);
}
