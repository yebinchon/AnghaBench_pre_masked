
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int* jpeg_hdr; scalar_t__ ag_cnt; int avg_lum; } ;
struct gspca_dev {int last_packet_type; int* image; int image_len; } ;



 int const VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct gspca_dev*,int const,int*,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{
 struct sd *VAR_6 = (struct sd *) VAR_3;
 int VAR_7, VAR_8;






 switch (VAR_3->last_packet_type) {
 case 129:
  VAR_7 = VAR_5 - 64;
  if (VAR_7 >= 0 && VAR_4[VAR_7] == 0xff && VAR_4[VAR_7 + 1] == 0xd9)
   FUNC_1(VAR_3, 128, ((void*)0), 0);
  return;
 case 128:
  FUNC_1(VAR_3, VAR_0,
    VAR_6->jpeg_hdr, VAR_2);
  break;
 }
 FUNC_1(VAR_3, VAR_1, VAR_4, VAR_5);

 VAR_4 = VAR_3->image;
 if (VAR_4 == ((void*)0))
  return;
 VAR_7 = VAR_3->image_len - 64;
 if (VAR_4[VAR_7] != 0xff
  || VAR_4[VAR_7 + 1] != 0xd9)
  return;


 VAR_3->image_len = VAR_7 + 2;
 FUNC_1(VAR_3, 128, ((void*)0), 0);
 if (VAR_6->ag_cnt < 0)
  return;




 VAR_8 = ((VAR_4[VAR_7 + 29] << 8) | VAR_4[VAR_7 + 30]) >> 6;

 VAR_8 += ((VAR_4[VAR_7 + 33] << 8) | VAR_4[VAR_7 + 34]) >> 6;

 VAR_8 += ((VAR_4[VAR_7 + 25] << 8) | VAR_4[VAR_7 + 26]) >> 6;

 VAR_8 += ((VAR_4[VAR_7 + 37] << 8) | VAR_4[VAR_7 + 38]) >> 6;

 VAR_8 += ((VAR_4[VAR_7 + 31] << 8) | VAR_4[VAR_7 + 32]) >> 4;
 VAR_8 >>= 4;
 FUNC_0(&VAR_6->avg_lum, VAR_8);
}
