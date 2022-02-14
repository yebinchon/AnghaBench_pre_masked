
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sd {int bridge; } ;
struct ov_regvals {int member_0; int member_1; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (struct ov_regvals const*) ;


 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct sd*) ;
 int FUNC_3 (struct sd*,int ) ;
 int FUNC_4 (struct sd*,struct ov_regvals const*,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_9;


 const struct ov_regvals VAR_11[] = {
  { VAR_7, 0x7f },
  { VAR_6, 0x01 },
  { VAR_7, 0x7f },
  { VAR_6, 0x01 },
  { VAR_7, 0x3f },
  { VAR_6, 0x01 },
  { VAR_7, 0x3d },
 };

 const struct ov_regvals VAR_12[] = {
  { VAR_3, 0x01 },
  { VAR_8, 0x00 },
  { VAR_8, 0x02 },
  { VAR_8, 0x00 },
  { VAR_4, 0x1f },
  { VAR_1, 0x00 },
  { VAR_2, 0x03 },
 };

 const struct ov_regvals VAR_13[] = {
  { VAR_3, 0xff },
  { VAR_8, 0x00 },
  { VAR_8, 0x02 },
  { VAR_8, 0x00 },
  { VAR_4, 0xff },
  { VAR_1, 0x00 },
  { VAR_2, 0x03 },
 };

 const struct ov_regvals VAR_14[] = {
  { 0x70, 0x1f },
  { 0x71, 0x05 },
  { 0x72, 0x06 },
  { 0x73, 0x06 },
  { 0x74, 0x14 },
  { 0x75, 0x03 },
  { 0x76, 0x04 },
  { 0x77, 0x04 },
 };

 FUNC_1(VAR_0, "Device custom id %x", FUNC_3(VAR_10, VAR_5));

 FUNC_4(VAR_10, VAR_11, FUNC_0(VAR_11));

 switch (VAR_10->bridge) {
 case 129:
  FUNC_4(VAR_10, VAR_12, FUNC_0(VAR_12));
  break;
 case 128:
  FUNC_4(VAR_10, VAR_13, FUNC_0(VAR_13));
  break;
 }


 FUNC_4(VAR_10, VAR_14, FUNC_0(VAR_14));

 FUNC_2(VAR_10);
}
