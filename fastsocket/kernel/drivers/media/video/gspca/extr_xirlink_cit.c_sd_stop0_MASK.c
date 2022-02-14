
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; scalar_t__ button_state; } ;
struct gspca_dev {int input_dev; int dev; } ;
 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int,int ) ;
 int FUNC_3 (struct gspca_dev*) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;



 if (!VAR_1->dev)
  return;

 switch (VAR_2->model) {
 case 132:




  FUNC_4(VAR_1, 0x00c0, 0x0100);
  break;
 case 131:
  FUNC_3(VAR_1);
  FUNC_2(VAR_1, 0x0100, 0);
  FUNC_4(VAR_1, 0x81, 0x0100);
  break;
 case 130:
 case 128:
  FUNC_0(VAR_1, 0x0030, 0x0004);

  FUNC_4(VAR_1, 0x0080, 0x0100);
  FUNC_4(VAR_1, 0x0020, 0x0111);
  FUNC_4(VAR_1, 0x00a0, 0x0111);

  FUNC_0(VAR_1, 0x0030, 0x0002);

  FUNC_4(VAR_1, 0x0020, 0x0111);
  FUNC_4(VAR_1, 0x0000, 0x0112);
  break;
 case 129:
  FUNC_4(VAR_1, 0x0006, 0x012c);
  FUNC_1(VAR_1, 0x0046, 0x0000);
  FUNC_2(VAR_1, 0x0116, 0);
  FUNC_4(VAR_1, 0x0064, 0x0116);
  FUNC_2(VAR_1, 0x0115, 0);
  FUNC_4(VAR_1, 0x0003, 0x0115);
  FUNC_4(VAR_1, 0x0008, 0x0123);
  FUNC_4(VAR_1, 0x0000, 0x0117);
  FUNC_4(VAR_1, 0x0000, 0x0112);
  FUNC_4(VAR_1, 0x0080, 0x0100);
  break;
 case 133:
  FUNC_1(VAR_1, 0x0049, 0x00ff);
  FUNC_4(VAR_1, 0x0006, 0x012c);
  FUNC_4(VAR_1, 0x0000, 0x0116);




  FUNC_4(VAR_1, 0x0008, 0x0123);
  FUNC_4(VAR_1, 0x0000, 0x0117);
  FUNC_4(VAR_1, 0x0003, 0x0133);
  FUNC_4(VAR_1, 0x0000, 0x0111);



  FUNC_4(VAR_1, 0x00c0, 0x0100);
  break;
 }
}
