
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int sensor; int flags; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct gspca_dev*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;

 switch (VAR_2->sensor) {
 case 129:
  FUNC_0(VAR_1, 0x89, 0x058c, 0x00ff);
  break;
 case 128:
  return;
 default:
  if (!(VAR_2->flags & VAR_0))
   FUNC_0(VAR_1, 0x89, 0xffff, 0xffff);
  break;
 }
 FUNC_0(VAR_1, 0xa0, 0x01, 0xb301);
 FUNC_0(VAR_1, 0xa0, 0x09, 0xb003);
}
