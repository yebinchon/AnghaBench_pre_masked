
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int bridge; int* jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;





 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_8,
   u8 *VAR_9,
   int VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_8;
 int VAR_12, VAR_13 = 0;
 static u8 VAR_14[] = {0xff, 0xd9};


 switch (VAR_11->bridge) {
 case 129:
  if (VAR_9[0] == 0xff) {
   if (VAR_9[1] != 0x01) {

    return;
   }
   VAR_13 = 1;
   VAR_9 += VAR_6;
   VAR_10 -= VAR_6;
  } else {
   VAR_9 += 1;
   VAR_10 -= 1;
  }
  break;
 case 128:
  if (VAR_9[0] == 0xff) {
   VAR_13 = 1;
   VAR_9 += VAR_7;
   VAR_10 -= VAR_7;
  } else {
   VAR_9 += 2;
   VAR_10 -= 2;
  }
  break;
 default:


  switch (VAR_9[0]) {
  case 0xfe:
   VAR_13 = 1;
   VAR_9 += VAR_5;
   VAR_10 -= VAR_5;
   break;
  case 0xff:

   return;
  default:
   VAR_9 += 1;
   VAR_10 -= 1;
   break;
  }
  break;
 case 130:
  switch (VAR_9[0]) {
  case 0xfe:
   VAR_13 = 1;
   VAR_9 += VAR_4;
   VAR_10 -= VAR_4;
   break;
  case 0xff:

   return;
  default:
   VAR_9 += 1;
   VAR_10 -= 1;
   break;
  }
  break;
 }
 if (VAR_13) {
  FUNC_0(VAR_8, VAR_3,
    VAR_14, 2);


  FUNC_0(VAR_8, VAR_0,
   VAR_11->jpeg_hdr, VAR_2);
 }


 VAR_12 = 0;
 do {
  if (VAR_9[VAR_12] == 0xff) {
   FUNC_0(VAR_8, VAR_1,
     VAR_9, VAR_12 + 1);
   VAR_10 -= VAR_12;
   VAR_9 += VAR_12;
   *VAR_9 = 0x00;
   VAR_12 = 0;
  }
  VAR_12++;
 } while (VAR_12 < VAR_10);
 FUNC_0(VAR_8, VAR_1, VAR_9, VAR_10);
}
