
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct l3_process {TYPE_2__* st; int timer; } ;
struct TYPE_3__ {int (* l3l4 ) (TYPE_2__*,int,struct l3_process*) ;} ;
struct TYPE_4__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_3 ;
 int FUNC_2 (struct l3_process*,int) ;
 int FUNC_3 (struct l3_process*,int) ;
 int FUNC_4 (TYPE_2__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_4, u_char VAR_5, void *VAR_6)
{
 struct sk_buff *VAR_7 = VAR_6;
 int VAR_8;

 VAR_8 = FUNC_1(VAR_4, VAR_7, VAR_3);
 if (VAR_1 == VAR_8) {
  FUNC_2(VAR_4, VAR_8);
  return;
 }
 FUNC_3(VAR_4, 10);
 FUNC_0(&VAR_4->timer);
 if (VAR_8)
  FUNC_2(VAR_4, VAR_8);
 VAR_4->st->l3.l3l4(VAR_4->st, VAR_0 | VAR_2, VAR_4);
}
