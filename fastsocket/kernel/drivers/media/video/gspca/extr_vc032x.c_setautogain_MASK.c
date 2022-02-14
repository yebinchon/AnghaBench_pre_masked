
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {size_t autogain; } ;
struct gspca_dev {int ctrl_dis; } ;


 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int const*,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 static const u8 VAR_3[2] = {0x28, 0x3c};

 if (VAR_1->ctrl_dis & (1 << VAR_0))
  return;
 FUNC_0(VAR_1, 0xd1, &VAR_3[VAR_2->autogain], 1);
}
