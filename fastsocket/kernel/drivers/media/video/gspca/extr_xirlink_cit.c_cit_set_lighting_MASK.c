
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int model; int lighting; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->model) {
 case 132:
 case 130:
 case 129:
 case 128:
 case 133:
  break;
 case 131: {
  int VAR_3;
  for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
   FUNC_0(VAR_1, 0x0027, VAR_2->lighting);
  break;
 }
 }
}
