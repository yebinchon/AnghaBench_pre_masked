
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int cause; } ;
struct l3_process {TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_5__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct l3_process*) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct l3_process*,int ) ;
 int FUNC_3 (struct l3_process*) ;
 int FUNC_4 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_3, u_char VAR_4, void *VAR_5)
{
 struct sk_buff *VAR_6 = VAR_5;

 FUNC_1(VAR_6);
 FUNC_0(VAR_3);
 FUNC_2(VAR_3, 0);
 VAR_3->para.cause = VAR_2;
 VAR_3->st->l3.l3l4(VAR_3->st, VAR_0 | VAR_1, VAR_3);
 FUNC_3(VAR_3);
}
