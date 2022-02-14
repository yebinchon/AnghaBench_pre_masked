
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int si2; int si1; } ;
struct TYPE_4__ {TYPE_1__ setup; scalar_t__ spv; } ;
struct l3_process {int timer; int st; TYPE_2__ para; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_9, u_char VAR_10, void *VAR_11)
{
 struct sk_buff *VAR_12;
 u_char VAR_13[24];
 u_char *VAR_14 = VAR_13;
 int VAR_15;

 FUNC_2(VAR_14, VAR_9->callref, VAR_4, VAR_5);
 if (VAR_9->para.spv) {

  *VAR_14++ = VAR_8;
  *VAR_14++ = 4;
  *VAR_14++ = 0;
  *VAR_14++ = VAR_3;
  *VAR_14++ = VAR_9->para.setup.si1;
  *VAR_14++ = VAR_9->para.setup.si2;
  *VAR_14++ = VAR_8;
  *VAR_14++ = 4;
  *VAR_14++ = 0;
  *VAR_14++ = VAR_2;
  *VAR_14++ = VAR_9->para.setup.si1;
  *VAR_14++ = VAR_9->para.setup.si2;
 }
 FUNC_6(VAR_9, 8);
 VAR_15 = VAR_14 - VAR_13;
 if (!(VAR_12 = FUNC_3(VAR_15)))
  return;
 FUNC_5(FUNC_7(VAR_12, VAR_15), VAR_13, VAR_15);
 FUNC_4(VAR_9->st, VAR_1 | VAR_6, VAR_12);
 FUNC_1(&VAR_9->timer);
 FUNC_0(&VAR_9->timer, VAR_7, VAR_0);
}
