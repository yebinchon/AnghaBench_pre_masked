
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_queryctrl {int id; } ;


 int VAR_0 ;







 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int const**,int ) ;
 int FUNC_1 (struct v4l2_queryctrl*,int,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct v4l2_queryctrl *VAR_8)
{
 static const u32 VAR_9[] = {
  134,
  133,
  130,
  132,
  128,
  129,
  131,
  0
 };
 static const u32 *VAR_10[] = {
  VAR_9,
  ((void*)0)
 };

 VAR_8->id = FUNC_0(VAR_10, VAR_8->id);

 switch (VAR_8->id) {
 case 134:
  return FUNC_1(VAR_8, 0, 0, 0, 0);
 case 133:
  return FUNC_1(VAR_8,
    VAR_1,
    VAR_2, 1,
    VAR_2);
 case 130:
  return FUNC_1(VAR_8,
    VAR_5,
    VAR_7, 1,
    VAR_6);
 case 132:
  return FUNC_1(VAR_8,
    VAR_4,
    VAR_3, 1,
    VAR_4);
 case 128:
  return FUNC_1(VAR_8, 0, 34, 1, 15);
 case 129:
  return FUNC_1(VAR_8, 0, 1, 1, 0);
 case 131:
  return FUNC_1(VAR_8,
    64000,
    10000000, 1,
    1500000);
 default:
  return -VAR_0;
 }
 return 0;
}
