
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int width; } ;


 int FUNC_0 (int**) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;
 int FUNC_3 (struct gspca_dev*,int,int ) ;
 int FUNC_4 (struct gspca_dev*,unsigned short const,int) ;
 int** VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_2)
{
 const unsigned short VAR_3 = 0;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < 0)
  return VAR_5;

 FUNC_4(VAR_2, 0x0003, 0x0133);
 FUNC_4(VAR_2, 0x0000, 0x0117);
 FUNC_4(VAR_2, 0x0008, 0x0123);
 FUNC_4(VAR_2, 0x0000, 0x0100);
 FUNC_4(VAR_2, 0x0060, 0x0116);

 FUNC_4(VAR_2, 0x0000, 0x0133);
 FUNC_4(VAR_2, 0x0000, 0x0123);
 FUNC_4(VAR_2, 0x0001, 0x0117);
 FUNC_4(VAR_2, 0x0040, 0x0108);
 FUNC_4(VAR_2, 0x0019, 0x012c);
 FUNC_4(VAR_2, 0x0060, 0x0116);


 FUNC_2(VAR_2, 0x0049, 0x0000);

 FUNC_4(VAR_2, 0x0000, 0x0101);
 FUNC_4(VAR_2, 0x003a, 0x0102);
 FUNC_4(VAR_2, 0x00a0, 0x0103);
 FUNC_4(VAR_2, 0x0078, 0x0105);
 FUNC_4(VAR_2, 0x0000, 0x010a);
 FUNC_4(VAR_2, 0x0002, 0x011d);
 FUNC_4(VAR_2, 0x0000, 0x0129);
 FUNC_4(VAR_2, 0x00fc, 0x012b);
 FUNC_4(VAR_2, 0x0022, 0x012a);

 switch (VAR_2->width) {
 case 160:
  FUNC_4(VAR_2, 0x0024, 0x010b);
  FUNC_4(VAR_2, 0x0089, 0x0119);
  FUNC_4(VAR_2, 0x000a, 0x011b);
  FUNC_4(VAR_2, 0x0003, 0x011e);
  FUNC_4(VAR_2, 0x0007, 0x0104);
  FUNC_4(VAR_2, 0x0009, 0x011a);
  FUNC_4(VAR_2, 0x008b, 0x011c);
  FUNC_4(VAR_2, 0x0008, 0x0118);
  FUNC_4(VAR_2, 0x0000, 0x0132);
  break;
 case 320:
  FUNC_4(VAR_2, 0x0028, 0x010b);
  FUNC_4(VAR_2, 0x00d9, 0x0119);
  FUNC_4(VAR_2, 0x0006, 0x011b);
  FUNC_4(VAR_2, 0x0000, 0x011e);
  FUNC_4(VAR_2, 0x000e, 0x0104);
  FUNC_4(VAR_2, 0x0004, 0x011a);
  FUNC_4(VAR_2, 0x003f, 0x011c);
  FUNC_4(VAR_2, 0x000c, 0x0118);
  FUNC_4(VAR_2, 0x0000, 0x0132);
  break;
 }

 FUNC_2(VAR_2, 0x0019, 0x0031);
 FUNC_2(VAR_2, 0x001a, 0x0003);
 FUNC_2(VAR_2, 0x001b, 0x0038);
 FUNC_2(VAR_2, 0x001c, 0x0000);
 FUNC_2(VAR_2, 0x0024, 0x0001);
 FUNC_2(VAR_2, 0x0027, 0x0001);
 FUNC_2(VAR_2, 0x002a, 0x0004);
 FUNC_2(VAR_2, 0x0035, 0x000b);
 FUNC_2(VAR_2, 0x003f, 0x0001);
 FUNC_2(VAR_2, 0x0044, 0x0000);
 FUNC_2(VAR_2, 0x0054, 0x0000);
 FUNC_2(VAR_2, 0x00c4, 0x0000);
 FUNC_2(VAR_2, 0x00e7, 0x0001);
 FUNC_2(VAR_2, 0x00e9, 0x0001);
 FUNC_2(VAR_2, 0x00ee, 0x0000);
 FUNC_2(VAR_2, 0x00f3, 0x00c0);

 FUNC_4(VAR_2, VAR_3, 0x0109);
 FUNC_4(VAR_2, VAR_5, 0x0111);


 if (VAR_1) {
  for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_0); VAR_4++) {
   if (VAR_0[VAR_4][0])
    FUNC_3(VAR_2, VAR_0[VAR_4][2], 0);
   else
    FUNC_4(VAR_2, VAR_0[VAR_4][1],
           VAR_0[VAR_4][2]);
  }
 }

 return 0;
}
