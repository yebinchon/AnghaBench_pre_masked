
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*) ;
 int FUNC_1 (struct gspca_dev*) ;
 int FUNC_2 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_3(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;

 switch (VAR_1->model) {
 case 132:
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
  break;
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 case 133:
  FUNC_0(VAR_0);
  FUNC_2(VAR_0);
  break;
 }
 return 0;
}
