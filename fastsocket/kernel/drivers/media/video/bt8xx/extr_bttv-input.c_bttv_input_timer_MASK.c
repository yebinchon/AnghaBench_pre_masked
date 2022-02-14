
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bttv_ir {int polling; int timer; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct bttv {TYPE_1__ c; struct bttv_ir* remote; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bttv*) ;
 int FUNC_1 (struct bttv*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(unsigned long VAR_2)
{
 struct bttv *VAR_3 = (struct bttv*)VAR_2;
 struct bttv_ir *VAR_4 = VAR_3->remote;

 if (VAR_3->c.type == VAR_0)
  FUNC_0(VAR_3);
 else
  FUNC_1(VAR_3);
 FUNC_2(&VAR_4->timer, VAR_1 + FUNC_3(VAR_4->polling));
}
