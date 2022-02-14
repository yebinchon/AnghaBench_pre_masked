
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ awb; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 if (VAR_1->awb) {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) | 0x02);
  FUNC_1(VAR_0, 0x63,
    FUNC_0(VAR_0, 0x63) | 0xc0);
 } else {
  FUNC_1(VAR_0, 0x13,
    FUNC_0(VAR_0, 0x13) & ~0x02);
  FUNC_1(VAR_0, 0x63,
    FUNC_0(VAR_0, 0x63) & ~0xc0);
 }
}
