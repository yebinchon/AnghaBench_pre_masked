
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int val; int val64; int string; } ;
struct v4l2_ctrl {int type; TYPE_1__ cur; int val; int val64; int string; } ;




 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void FUNC_1(struct v4l2_ctrl *VAR_0)
{
 if (VAR_0 == ((void*)0))
  return;
 switch (VAR_0->type) {
 case 128:

  FUNC_0(VAR_0->string, VAR_0->cur.string);
  break;
 case 129:
  VAR_0->val64 = VAR_0->cur.val64;
  break;
 default:
  VAR_0->val = VAR_0->cur.val;
  break;
 }
}
