
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {scalar_t__ do_lcd_stop; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 FUNC_1(VAR_0);

 FUNC_2(VAR_0);
 if (VAR_1->do_lcd_stop)
  FUNC_0(VAR_0);
}
