
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int ,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1,
   u8 *VAR_2,
   int VAR_3)
{
 int VAR_4;

 VAR_4 = 0;
 do {
  if (VAR_2[VAR_4] == 0xff) {
   FUNC_0(VAR_1, VAR_0,
     VAR_2, VAR_4 + 1);
   VAR_3 -= VAR_4;
   VAR_2 += VAR_4;
   *VAR_2 = 0x00;
   VAR_4 = 0;
  }
 } while (++VAR_4 < VAR_3);
 FUNC_0(VAR_1, VAR_0, VAR_2, VAR_3);
}
