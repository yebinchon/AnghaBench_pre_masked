
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int gain; } ;
struct gspca_dev {int ctrl_dis; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int *,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 if (VAR_1->ctrl_dis & (1 << VAR_0))
  return;
 FUNC_0(VAR_1, 0x15, &VAR_2->gain, 1);
}
