
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {int cause; } ;
struct l3_process {int debug; TYPE_3__* st; TYPE_1__ para; int timer; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*,char*,int) ;
 int FUNC_3 (struct l3_process*,int ) ;
 int FUNC_4 (struct l3_process*) ;
 int FUNC_5 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_6(struct l3_process *VAR_5, u_char VAR_6, void *VAR_7)
{
 struct sk_buff *VAR_8 = VAR_7;
 int VAR_9;

 FUNC_0(&VAR_5->timer);
 FUNC_3(VAR_5, 0);
 VAR_5->para.cause = VAR_3;
 VAR_5->st->l3.l3l4(VAR_5->st, VAR_0 | VAR_1, VAR_5);

 if ((VAR_9 = FUNC_1(VAR_5, VAR_8, VAR_4)))
  if (VAR_5->debug & VAR_2)
   FUNC_2(VAR_5->st, "SUSPACK check ie(%d)",VAR_9);
 FUNC_4(VAR_5);
}
