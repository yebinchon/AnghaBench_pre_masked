
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;
typedef enum v4l2_ctrl_type { ____Placeholder_v4l2_ctrl_type } v4l2_ctrl_type ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(u32 VAR_6, const char **VAR_7, enum v4l2_ctrl_type *VAR_8,
      s32 *VAR_9, s32 *VAR_10, s32 *VAR_11, s32 *VAR_12, u32 *VAR_13)
{
 *VAR_7 = FUNC_0(VAR_6);
 *VAR_13 = 0;

 switch (VAR_6) {
 case 131:
 case 134:
 case 137:
 case 129:
 case 133:
  *VAR_8 = VAR_5;
  *VAR_9 = 0;
  *VAR_11 = 0;
  break;
 case 140:
  *VAR_8 = VAR_3;
  *VAR_9 = 0;
  *VAR_10 = *VAR_11 = 1;
  break;
 default:
  *VAR_8 = VAR_4;
  break;
 }
 switch (VAR_6) {
 case 131:
 case 129:
 case 133:
  *VAR_13 |= VAR_2;
  break;
 case 132:
 case 130:
 case 135:
 case 136:
 case 138:
 case 139:
  *VAR_13 |= VAR_1;
  break;
 case 128:
  *VAR_13 |= VAR_0;
  break;
 }
}
