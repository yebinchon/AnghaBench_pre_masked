
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 int VAR_9;

 if (VAR_7 < 6) {

  return;
 }
 for (VAR_9 = 0; VAR_9 < VAR_7 - 6; VAR_9++) {
  if (VAR_6[0 + VAR_9] == 0xff
      && VAR_6[1 + VAR_9] == 0xff
      && VAR_6[2 + VAR_9] == 0x00
      && VAR_6[3 + VAR_9] == 0xff
      && VAR_6[4 + VAR_9] == 0x96) {
   if (VAR_6[5 + VAR_9] == 0x64
       || VAR_6[5 + VAR_9] == 0x65
       || VAR_6[5 + VAR_9] == 0x66
       || VAR_6[5 + VAR_9] == 0x67) {
    FUNC_0(VAR_0, "sof offset: %d len: %d",
     VAR_9, VAR_7);
    FUNC_1(VAR_5, VAR_4,
      VAR_6, VAR_9);


    FUNC_1(VAR_5, VAR_1,
     VAR_8->jpeg_hdr, VAR_3);
    VAR_6 += VAR_9 + 16;
    VAR_7 -= VAR_9 + 16;
    break;
   }
  }
 }
 FUNC_1(VAR_5, VAR_2, VAR_6, VAR_7);
}
