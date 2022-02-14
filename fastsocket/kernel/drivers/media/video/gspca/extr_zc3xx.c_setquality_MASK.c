
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 u8 VAR_3;

 switch (VAR_2->sensor) {
 case 133:
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
  return;
 }

 FUNC_0(VAR_1, VAR_0, 0x0008);
 VAR_3 = 0x30;
 FUNC_0(VAR_1, VAR_3, 0x0007);

 VAR_3 = 0xff;







 FUNC_0(VAR_1, VAR_3, 0x0018);
}
