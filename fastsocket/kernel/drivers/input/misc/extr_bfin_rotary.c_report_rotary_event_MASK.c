
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct input_dev {int dummy; } ;
struct bfin_rot {int rel_code; int down_key; int up_key; struct input_dev* input; } ;


 int FUNC_0 (struct input_dev*,int ,int) ;
 int FUNC_1 (struct input_dev*) ;
 int FUNC_2 (struct input_dev*,int ) ;

__attribute__((used)) static void FUNC_3(struct bfin_rot *VAR_0, int VAR_1)
{
 struct input_dev *VAR_2 = VAR_0->input;

 if (VAR_0->up_key) {
  FUNC_2(VAR_2,
     VAR_1 > 0 ? VAR_0->up_key : VAR_0->down_key);
 } else {
  FUNC_0(VAR_2, VAR_0->rel_code, VAR_1);
  FUNC_1(VAR_2);
 }
}
