
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bttv_ir {int polling; scalar_t__ rc5_gpio; } ;
struct bttv {struct bttv_ir* remote; } ;


 int FUNC_0 (struct bttv*) ;
 int FUNC_1 (struct bttv*) ;

void FUNC_2(struct bttv *VAR_0)
{
 struct bttv_ir *VAR_1 = VAR_0->remote;

 if (VAR_1->rc5_gpio)
  FUNC_0(VAR_0);
 else if (!VAR_1->polling)
  FUNC_1(VAR_0);
}
