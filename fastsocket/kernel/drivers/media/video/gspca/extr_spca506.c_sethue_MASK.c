
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int hue; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 FUNC_0(VAR_1);
 FUNC_1(VAR_1, VAR_2->hue, VAR_0);
 FUNC_1(VAR_1, 0x01, 0x09);
}
