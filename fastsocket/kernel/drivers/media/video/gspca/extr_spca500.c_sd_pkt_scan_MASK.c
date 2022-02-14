
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* jpeg_hdr; } ;
struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_5,
   u8 *VAR_6,
   int VAR_7)
{
 struct sd *VAR_8 = (struct sd *) VAR_5;
 int VAR_9;
 static __u8 VAR_10[] = {0xff, 0xd9};


 if (VAR_6[0] == 0xff) {
  if (VAR_6[1] != 0x01) {

   return;
  }
  FUNC_0(VAR_5, VAR_3,
     VAR_10, 2);


  FUNC_0(VAR_5, VAR_0,
   VAR_8->jpeg_hdr, VAR_2);

  VAR_6 += VAR_4;
  VAR_7 -= VAR_4;
 } else {
  VAR_6 += 1;
  VAR_7 -= 1;
 }


 VAR_9 = 0;
 do {
  if (VAR_6[VAR_9] == 0xff) {
   FUNC_0(VAR_5, VAR_1,
     VAR_6, VAR_9 + 1);
   VAR_7 -= VAR_9;
   VAR_6 += VAR_9;
   *VAR_6 = 0x00;
   VAR_9 = 0;
  }
  VAR_9++;
 } while (VAR_9 < VAR_7);
 FUNC_0(VAR_5, VAR_1, VAR_6, VAR_7);
}
