
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int* data; int len; } ;
struct l3_process {TYPE_2__* st; } ;
struct TYPE_4__ {int (* l3l4 ) (TYPE_2__*,int,struct l3_process*) ;} ;
struct TYPE_5__ {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct l3_process*) ;
 int* FUNC_1 (int*,int ,int ,int ) ;
 int FUNC_2 (struct l3_process*,int ) ;
 int FUNC_3 (TYPE_2__*,int,struct l3_process*) ;
 int FUNC_4 (TYPE_2__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_4, u_char VAR_5, void *VAR_6)
{
 u_char *VAR_7;
 struct sk_buff *VAR_8 = VAR_6;
 int VAR_9 = 0;
 VAR_7 = VAR_8->data;

 if ((VAR_7 = FUNC_1(VAR_7, VAR_8->len, VAR_2, 0))) {
  VAR_7++;
  if (1 == *VAR_7++)
   VAR_9 = *VAR_7;
 }
 if (VAR_9 == 0) {



  VAR_4->st->l3.l3l4(VAR_4->st, VAR_1 | VAR_3, VAR_4);
  FUNC_2(VAR_4, 0);
  FUNC_0(VAR_4);
 } else {
  VAR_4->st->l3.l3l4(VAR_4->st, VAR_0 | VAR_3, VAR_4);
 }
}
