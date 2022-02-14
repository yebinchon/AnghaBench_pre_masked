
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int red_balance; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 FUNC_1(VAR_2, 0xff, 0x00);
 FUNC_1(VAR_2, 0xc5, VAR_3->red_balance);

 FUNC_1(VAR_2, 0xdc, 0x01);
 FUNC_0(VAR_0|VAR_1, "red_balance: %i", VAR_3->red_balance);
}
