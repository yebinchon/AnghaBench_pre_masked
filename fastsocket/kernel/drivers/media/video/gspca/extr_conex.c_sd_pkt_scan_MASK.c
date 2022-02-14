
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
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_4,
   u8 *VAR_5,
   int VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_4;

 if (VAR_5[0] == 0xff && VAR_5[1] == 0xd8) {


  FUNC_0(VAR_4, VAR_3, ((void*)0), 0);


  FUNC_0(VAR_4, VAR_0,
    VAR_7->jpeg_hdr, VAR_2);
  VAR_5 += 2;
  VAR_6 -= 2;
 }
 FUNC_0(VAR_4, VAR_1, VAR_5, VAR_6);
}
