
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;





 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 int VAR_2;

 switch (VAR_1->sensor) {
 case 129:
  return -1;
 case 130:

  return -1;
 case 128:
  VAR_2 = FUNC_0(VAR_0);
  if (VAR_2 >= 0)
   return VAR_2;
  break;
 }
 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2 >= 0)
  return VAR_2;
 return FUNC_2(VAR_0);
}
