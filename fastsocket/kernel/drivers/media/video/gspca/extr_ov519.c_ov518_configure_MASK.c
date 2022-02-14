
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; } ;
struct ov_regvals {int member_0; int member_1; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct ov_regvals const*) ;


 int VAR_0 ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ) ;
 int FUNC_4 (struct sd*,int,int) ;
 int FUNC_5 (struct sd*,int ,int,int) ;
 int FUNC_6 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_7(struct gspca_dev *VAR_6)
{
 struct sd *VAR_7 = (struct sd *) VAR_6;


 const struct ov_regvals VAR_8[] = {
  { VAR_4, 0x40 },
  { VAR_3, 0xe1 },
  { VAR_4, 0x3e },
  { VAR_3, 0xe1 },
  { VAR_4, 0x00 },
  { VAR_3, 0xe1 },
  { 0x46, 0x00 },
  { 0x5d, 0x03 },
 };

 const struct ov_regvals VAR_9[] = {
  { VAR_5, 0x02 },
  { VAR_5, 0x01 },
  { 0x31, 0x0f },
  { 0x5d, 0x03 },
  { 0x24, 0x9f },
  { 0x25, 0x90 },
  { 0x20, 0x00 },
  { 0x51, 0x04 },
  { 0x71, 0x19 },
  { 0x2f, 0x80 },
 };

 const struct ov_regvals VAR_10[] = {
  { VAR_5, 0x02 },
  { VAR_5, 0x01 },
  { 0x31, 0x0f },
  { 0x5d, 0x03 },
  { 0x24, 0x9f },
  { 0x25, 0x90 },
  { 0x20, 0x60 },
  { 0x51, 0x02 },
  { 0x71, 0x19 },
  { 0x40, 0xff },
  { 0x41, 0x42 },
  { 0x46, 0x00 },
  { 0x33, 0x04 },
  { 0x21, 0x19 },
  { 0x3f, 0x10 },
  { 0x2f, 0x80 },
 };


 FUNC_1(VAR_0, "Device revision %d",
  0x1f & FUNC_3(VAR_7, VAR_2));

 FUNC_6(VAR_7, VAR_8, FUNC_0(VAR_8));


 FUNC_5(VAR_7, VAR_1, 0x00, 0x02);

 switch (VAR_7->bridge) {
 case 129:
  FUNC_6(VAR_7, VAR_9, FUNC_0(VAR_9));
  break;
 case 128:
  FUNC_6(VAR_7, VAR_10, FUNC_0(VAR_10));
  break;
 }

 FUNC_2(VAR_7);

 FUNC_4(VAR_7, 0x2f, 0x80);
}
