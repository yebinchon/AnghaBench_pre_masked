
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int * data; } ;
struct TYPE_5__ {int chargeinfo; } ;
struct l3_process {TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_6__ {int debug; int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int * FUNC_1 (int *,int ,int ,int) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_7(struct l3_process *VAR_4, u_char VAR_5, void *VAR_6)
{
 u_char *VAR_7;
 int VAR_8, VAR_9 = 0;
 char VAR_10[8], VAR_11[32];
 struct sk_buff *VAR_12 = VAR_6;

 VAR_7 = VAR_12->data;
 if ((VAR_7 = FUNC_1(VAR_7, VAR_12->len, VAR_3, 6))) {
  FUNC_2(VAR_10, VAR_7, 1);
  for (VAR_8 = 0; VAR_8 < FUNC_5(VAR_10); VAR_8++) {
   VAR_9 *= 10;
   VAR_9 += VAR_10[VAR_8] & 0xf;
  }
  if (VAR_9 > VAR_4->para.chargeinfo) {
   VAR_4->para.chargeinfo = VAR_9;
   VAR_4->st->l3.l3l4(VAR_4->st, VAR_0 | VAR_1, VAR_4);
  }
  if (VAR_4->st->l3.debug & VAR_2) {
   FUNC_4(VAR_11, "charging info %d", VAR_4->para.chargeinfo);
   FUNC_3(VAR_4->st, VAR_11);
  }
 } else if (VAR_4->st->l3.debug & VAR_2)
  FUNC_3(VAR_4->st, "charging info not found");
 FUNC_0(VAR_12);

}
