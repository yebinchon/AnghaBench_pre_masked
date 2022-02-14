
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_3,
   u8 *VAR_4,
   int VAR_5)
{
 int VAR_6;

 if (VAR_4[0] == 0x5a) {



  return;
 }
 VAR_4 += 2;
 VAR_5 -= 2;
 if (VAR_4[0] == 0xff && VAR_4[1] == 0xd8)
  VAR_6 = VAR_0;
 else if (VAR_4[VAR_5 - 2] == 0xff && VAR_4[VAR_5 - 1] == 0xd9)
  VAR_6 = VAR_2;
 else
  VAR_6 = VAR_1;
 FUNC_0(VAR_3, VAR_6, VAR_4, VAR_5);
}
