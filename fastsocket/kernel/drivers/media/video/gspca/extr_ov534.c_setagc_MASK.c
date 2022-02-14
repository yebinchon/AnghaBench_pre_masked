
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ agc; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (VAR_1->agc) {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) | 0x04);
  FUNC_1(VAR_0, 0x64,
    FUNC_0(VAR_0, 0x64) | 0x03);
 } else {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) & ~0x04);
  FUNC_1(VAR_0, 0x64,
    FUNC_0(VAR_0, 0x64) & ~0x03);

  FUNC_2(VAR_0);
 }
}
