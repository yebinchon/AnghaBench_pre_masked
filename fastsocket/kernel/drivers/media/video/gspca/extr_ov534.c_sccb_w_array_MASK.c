
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int const) ;
 int FUNC_1 (struct gspca_dev*,int const,int const) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0,
   const u8 (*VAR_1)[2], int VAR_2)
{
 while (--VAR_2 >= 0) {
  if ((*VAR_1)[0] != 0xff) {
   FUNC_1(VAR_0, (*VAR_1)[0], (*VAR_1)[1]);
  } else {
   FUNC_0(VAR_0, (*VAR_1)[1]);
   FUNC_1(VAR_0, 0xff, 0x00);
  }
  VAR_1++;
 }
}
