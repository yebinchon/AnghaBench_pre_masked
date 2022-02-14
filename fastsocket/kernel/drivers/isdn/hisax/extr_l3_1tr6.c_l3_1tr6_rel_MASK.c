
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct TYPE_4__ {int cause; int loc; } ;
struct l3_process {TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_5__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_6__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct l3_process*) ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff*) ;
 int* FUNC_2 (int*,int ,int ,int ) ;
 int FUNC_3 (struct l3_process*,int ,int ) ;
 int FUNC_4 (struct l3_process*,char*,struct sk_buff*) ;
 int FUNC_5 (struct l3_process*,int ) ;
 int FUNC_6 (struct l3_process*) ;
 int FUNC_7 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_6, u_char VAR_7, void *VAR_8)
{
 struct sk_buff *VAR_9 = VAR_8;
 u_char *VAR_10;

 VAR_10 = VAR_9->data;
 if ((VAR_10 = FUNC_2(VAR_10, VAR_9->len, VAR_5, 0))) {
  if (VAR_10[1] > 0) {
   VAR_6->para.cause = VAR_10[2];
   if (VAR_10[1] > 1)
    VAR_6->para.loc = VAR_10[3];
   else
    VAR_6->para.loc = 0;
  } else {
   VAR_6->para.cause = 0;
   VAR_6->para.loc = 0;
  }
 } else {
  VAR_6->para.cause = VAR_3;
  FUNC_4(VAR_6, "missing REL cause", VAR_9);
  return;
 }
 FUNC_1(VAR_9);
 FUNC_0(VAR_6);
 FUNC_5(VAR_6, 0);
 FUNC_3(VAR_6, VAR_2, VAR_4);
 VAR_6->st->l3.l3l4(VAR_6->st, VAR_0 | VAR_1, VAR_6);
 FUNC_6(VAR_6);
}
