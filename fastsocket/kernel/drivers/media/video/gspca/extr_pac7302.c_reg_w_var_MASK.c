
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;
typedef int __u8 ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct gspca_dev*,int,int const*,int) ;
 int FUNC_2 (struct gspca_dev*,int const*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
   const __u8 *VAR_4,
   const __u8 *VAR_5, unsigned int VAR_6)
{
 int VAR_7, VAR_8;

 for (;;) {
  VAR_7 = *VAR_4++;
  VAR_8 = *VAR_4++;
  switch (VAR_8) {
  case 129:
   return;
  case 128:
   FUNC_2(VAR_3, VAR_5, VAR_6);
   break;
  default:
   if (VAR_8 > VAR_2) {
    FUNC_0(VAR_0|VAR_1,
     "Incorrect variable sequence");
    return;
   }
   while (VAR_8 > 0) {
    if (VAR_8 < 8) {
     FUNC_1(VAR_3,
      VAR_7, VAR_4, VAR_8);
     VAR_4 += VAR_8;
     break;
    }
    FUNC_1(VAR_3, VAR_7, VAR_4, 8);
    VAR_4 += 8;
    VAR_7 += 8;
    VAR_8 -= 8;
   }
  }
 }

}
