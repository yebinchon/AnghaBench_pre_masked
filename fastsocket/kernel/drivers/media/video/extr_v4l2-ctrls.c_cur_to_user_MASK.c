
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct v4l2_ext_control {int value; int value64; int string; int size; } ;
struct TYPE_2__ {int val; int val64; int string; } ;
struct v4l2_ctrl {int type; TYPE_1__ cur; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct v4l2_ext_control *VAR_2,
         struct v4l2_ctrl *VAR_3)
{
 u32 VAR_4;

 switch (VAR_3->type) {
 case 128:
  VAR_4 = FUNC_1(VAR_3->cur.string);
  if (VAR_2->size < VAR_4 + 1) {
   VAR_2->size = VAR_4 + 1;
   return -VAR_1;
  }
  return FUNC_0(VAR_2->string, VAR_3->cur.string,
      VAR_4 + 1) ? -VAR_0 : 0;
 case 129:
  VAR_2->value64 = VAR_3->cur.val64;
  break;
 default:
  VAR_2->value = VAR_3->cur.val;
  break;
 }
 return 0;
}
