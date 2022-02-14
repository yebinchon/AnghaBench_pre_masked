
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int len; int data; } ;
struct TYPE_5__ {int cause; } ;
struct l3_process {int debug; TYPE_3__* st; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct l3_process*,struct sk_buff*,int ) ;
 int FUNC_1 (struct l3_process*) ;
 int* FUNC_2 (int ,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 (struct l3_process*,int,int ) ;
 int FUNC_4 (TYPE_3__*,char*,int,...) ;
 int VAR_7 ;
 int FUNC_5 (struct l3_process*,struct sk_buff*) ;
 int FUNC_6 (struct l3_process*,int ,int *) ;
 int FUNC_7 (struct l3_process*,int ) ;
 int FUNC_8 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_9(struct l3_process *VAR_8, u_char VAR_9, void *VAR_10)
{
 u_char *VAR_11;
 struct sk_buff *VAR_12 = VAR_10;
 int VAR_13;
 u_char VAR_14 = 0, VAR_15 = 0;

 if ((VAR_13 = FUNC_5(VAR_8, VAR_12))) {
  if (VAR_8->debug & VAR_5)
   FUNC_4(VAR_8->st, "STATUS get_cause ret(%d)",VAR_13);
  if (VAR_13 < 0)
   VAR_14 = 96;
  else if (VAR_13 > 0)
   VAR_14 = 100;
 }
 if ((VAR_11 = FUNC_2(VAR_12->data, VAR_12->len, VAR_3, 0))) {
  VAR_11++;
  if (1 == *VAR_11++) {
   VAR_15 = *VAR_11;
   if (!FUNC_3(VAR_8, *VAR_11, VAR_7))
    VAR_14 = 100;
  } else
   VAR_14 = 100;
 } else
  VAR_14 = 96;
 if (!VAR_14) {
  VAR_13 = FUNC_0(VAR_8, VAR_12, VAR_6);
  if (VAR_1 == VAR_13)
   VAR_14 = 96;
  else if (VAR_2 == VAR_13)
   VAR_14 = 99;
 }
 if (VAR_14) {
  u_char VAR_16;

  if (VAR_8->debug & VAR_5)
   FUNC_4(VAR_8->st, "STATUS error(%d/%d)",VAR_13,VAR_14);
  VAR_16 = VAR_8->para.cause;
  VAR_8->para.cause = VAR_14;
  FUNC_6(VAR_8, 0, ((void*)0));
  if (VAR_14 == 99)
   VAR_8->para.cause = VAR_16;
  else
   return;
 }
 VAR_14 = VAR_8->para.cause;
 if (((VAR_14 & 0x7f) == 111) && (VAR_15 == 0)) {




  VAR_8->st->l3.l3l4(VAR_8->st, VAR_0 | VAR_4, VAR_8);
  FUNC_7(VAR_8, 0);
  FUNC_1(VAR_8);
 }
}
