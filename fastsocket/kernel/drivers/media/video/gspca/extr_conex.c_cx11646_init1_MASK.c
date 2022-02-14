
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int dummy; } ;


 int** VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 int VAR_2 = 0;

 FUNC_1(VAR_1, 0x0010, 0x00);
 FUNC_1(VAR_1, 0x0053, 0x00);
 FUNC_1(VAR_1, 0x0052, 0x00);
 FUNC_1(VAR_1, 0x009b, 0x2f);
 FUNC_1(VAR_1, 0x009c, 0x10);
 FUNC_0(VAR_1, 0x0098, 1);
 FUNC_1(VAR_1, 0x0098, 0x40);
 FUNC_0(VAR_1, 0x0099, 1);
 FUNC_1(VAR_1, 0x0099, 0x07);
 FUNC_1(VAR_1, 0x0039, 0x40);
 FUNC_1(VAR_1, 0x003c, 0xff);
 FUNC_1(VAR_1, 0x003f, 0x1f);
 FUNC_1(VAR_1, 0x003d, 0x40);

 FUNC_0(VAR_1, 0x0099, 1);

 while (VAR_0[VAR_2][0]) {
  FUNC_1(VAR_1, 0x00e5, VAR_0[VAR_2][0]);
  FUNC_0(VAR_1, 0x00e8, 1);
  if (VAR_2 == 1) {
   FUNC_1(VAR_1, 0x00ed, 0x01);
   FUNC_0(VAR_1, 0x00ed, 1);
  }
  VAR_2++;
 }
 FUNC_1(VAR_1, 0x00c3, 0x00);
}
