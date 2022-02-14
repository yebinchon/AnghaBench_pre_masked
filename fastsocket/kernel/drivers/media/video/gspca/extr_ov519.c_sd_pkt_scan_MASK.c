
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int bridge; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*,int *,int) ;
 int FUNC_1 (struct gspca_dev*,int *,int) ;
 int FUNC_2 (struct gspca_dev*,int *,int) ;
 int FUNC_3 (struct gspca_dev*,int *,int) ;
 int FUNC_4 (struct gspca_dev*,int *,int) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_0,
   u8 *VAR_1,
   int VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_0;

 switch (VAR_3->bridge) {
 case 134:
 case 133:
  FUNC_0(VAR_0, VAR_1, VAR_2);
  break;
 case 132:
 case 131:
  FUNC_1(VAR_0, VAR_1, VAR_2);
  break;
 case 130:
  FUNC_2(VAR_0, VAR_1, VAR_2);
  break;
 case 129:
  FUNC_3(VAR_0, VAR_1, VAR_2);
  break;
 case 128:
  FUNC_4(VAR_0, VAR_1, VAR_2);
  break;
 }
}
