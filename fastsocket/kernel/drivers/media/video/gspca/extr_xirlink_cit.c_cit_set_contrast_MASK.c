
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; int contrast; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct gspca_dev*,int,unsigned short) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->model) {
 case 132: {
  int VAR_3;

  VAR_3 = VAR_2->contrast * 1000 / 1333;
  FUNC_3(VAR_1, VAR_3, 0x0422);

  VAR_3 = VAR_2->contrast * 2000 / 1333;
  FUNC_3(VAR_1, VAR_3, 0x0423);

  VAR_3 = VAR_2->contrast * 4000 / 1333;
  FUNC_3(VAR_1, VAR_3, 0x0424);

  VAR_3 = VAR_2->contrast * 8000 / 1333;
  FUNC_3(VAR_1, VAR_3, 0x0425);
  break;
 }
 case 130:
 case 128:

  break;
 case 131:
 {

  int VAR_4, VAR_5 = (20 - VAR_2->contrast) * 1000 / 1333;
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
   FUNC_0(VAR_1, 0x0014, VAR_5);
   FUNC_2(VAR_1);
  }
  break;
 }
 case 129:
 {
  static const struct {
   unsigned short cv1;
   unsigned short cv2;
   unsigned short cv3;
  } VAR_6[7] = {
   { 0x05, 0x05, 0x0f },
   { 0x04, 0x04, 0x16 },
   { 0x02, 0x03, 0x16 },
   { 0x02, 0x08, 0x16 },
   { 0x01, 0x0c, 0x16 },
   { 0x01, 0x0e, 0x16 },
   { 0x01, 0x10, 0x16 }
  };
  int VAR_7 = VAR_2->contrast / 3;
  FUNC_1(VAR_1, 0x0067, VAR_6[VAR_7].cv1);
  FUNC_1(VAR_1, 0x005b, VAR_6[VAR_7].cv2);
  FUNC_1(VAR_1, 0x005c, VAR_6[VAR_7].cv3);
  break;
 }
 case 133:
  FUNC_1(VAR_1, 0x005b, VAR_2->contrast + 1);
  break;
 }
 return 0;
}
