
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {size_t effect; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int * VAR_1 ;
 int FUNC_1 (struct gspca_dev*,int) ;
 int FUNC_2 (struct gspca_dev*,int ,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;

 FUNC_2(VAR_2, VAR_1[VAR_3->effect],
    sizeof VAR_1[0]);
 if (VAR_3->effect == 1 || VAR_3->effect == 5) {
  FUNC_0(VAR_0,
         "This effect have been disabled for webcam \"safety\"");
  return;
 }

 if (VAR_3->effect == 1 || VAR_3->effect == 4)
  FUNC_1(VAR_2, 0x4aa6);
 else
  FUNC_1(VAR_2, 0xfaa6);
}
