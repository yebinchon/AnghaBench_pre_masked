
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int * data; } ;
struct TYPE_5__ {int eazmsn; } ;
struct TYPE_6__ {TYPE_1__ setup; } ;
struct l3_process {int state; int timer; TYPE_4__* st; TYPE_2__ para; } ;
struct TYPE_7__ {int (* l3l4 ) (TYPE_4__*,int,struct l3_process*) ;} ;
struct TYPE_8__ {TYPE_3__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (struct l3_process*,struct sk_buff*,int ) ;
 int * FUNC_3 (int *,int ,int,int ) ;
 int VAR_4 ;
 int FUNC_4 (char*,int *,int) ;
 int FUNC_5 (struct l3_process*,int) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (TYPE_4__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_5, u_char VAR_6, void *VAR_7)
{
 int VAR_8;
 struct sk_buff *VAR_9 = VAR_7;
 u_char *VAR_10;
 char VAR_11[32];

 VAR_8 = FUNC_2(VAR_5, VAR_9, VAR_4);
 if (VAR_8)
  FUNC_5(VAR_5, VAR_8);
 if (VAR_5->state == 25) {
  FUNC_1(&VAR_5->timer);
  VAR_10 = VAR_9->data;
  if ((VAR_10 = FUNC_3(VAR_10, VAR_9->len, 0x70, 0))) {
   FUNC_4(VAR_11, VAR_10, 1);
   FUNC_6(VAR_5->para.setup.eazmsn, VAR_11);
   VAR_5->st->l3.l3l4(VAR_5->st, VAR_0 | VAR_2, VAR_5);
  }
  FUNC_0(&VAR_5->timer, VAR_3, VAR_1);
 }
}
