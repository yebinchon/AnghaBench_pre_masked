
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct l3_process {TYPE_2__* st; int timer; } ;
struct TYPE_3__ {int (* l3l4 ) (TYPE_2__*,int ,struct l3_process*) ;} ;
struct TYPE_4__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct l3_process*) ;
 int FUNC_2 (TYPE_2__*,int ,struct l3_process*) ;

__attribute__((used)) static void
FUNC_3(struct l3_process *VAR_1, u_char VAR_2, void *VAR_3)
{
 FUNC_0(&VAR_1->timer);
 VAR_1->st->l3.l3l4(VAR_1->st, VAR_0, VAR_1);
 FUNC_1(VAR_1);
}
