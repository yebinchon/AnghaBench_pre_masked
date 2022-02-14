
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct v4l2_ext_control {int value; int string; int size; int value64; } ;
struct v4l2_ctrl {int has_new; int type; char* string; int val; int maximum; int val64; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ext_control *VAR_2,
         struct v4l2_ctrl *VAR_3)
{
 int VAR_4;
 u32 VAR_5;

 VAR_3->has_new = 1;
 switch (VAR_3->type) {
 case 129:
  VAR_3->val64 = VAR_2->value64;
  break;
 case 128:
  VAR_5 = VAR_2->size;
  if (VAR_5 == 0)
   return -VAR_1;
  if (VAR_5 > VAR_3->maximum + 1)
   VAR_5 = VAR_3->maximum + 1;
  VAR_4 = FUNC_0(VAR_3->string, VAR_2->string, VAR_5);
  if (!VAR_4) {
   char VAR_6 = VAR_3->string[VAR_5 - 1];

   VAR_3->string[VAR_5 - 1] = 0;


   if (FUNC_1(VAR_3->string) == VAR_3->maximum && VAR_6)
    return -VAR_1;
  }
  return VAR_4 ? -VAR_0 : 0;
 default:
  VAR_3->val = VAR_2->value;
  break;
 }
 return 0;
}
