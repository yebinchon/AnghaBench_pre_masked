
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int exposure; } ;
struct gspca_dev {int ctrl_dis; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3;

 if (VAR_1->ctrl_dis & (1 << VAR_0))
  return;
 VAR_3 = VAR_2->exposure >> 8;
 FUNC_0(VAR_1, 0x1a, &VAR_3, 1);
 VAR_3 = VAR_2->exposure;
 FUNC_0(VAR_1, 0x1b, &VAR_3, 1);
}
