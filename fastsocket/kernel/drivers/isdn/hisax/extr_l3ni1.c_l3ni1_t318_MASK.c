
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int cause; scalar_t__ loc; } ;
struct l3_process {int timer; TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_5__ {int (* l3l4 ) (TYPE_3__*,int ,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct l3_process*,int ) ;
 int FUNC_3 (struct l3_process*,int) ;
 int FUNC_4 (TYPE_3__*,int ,struct l3_process*) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_4, u_char VAR_5, void *VAR_6)
{
 FUNC_1(&VAR_4->timer);
 VAR_4->para.cause = 102;
 VAR_4->para.loc = 0;
 VAR_4->st->l3.l3l4(VAR_4->st, VAR_0, VAR_4);
 FUNC_3(VAR_4, 19);
 FUNC_2(VAR_4, VAR_2);
 FUNC_0(&VAR_4->timer, VAR_3, VAR_1);
}
