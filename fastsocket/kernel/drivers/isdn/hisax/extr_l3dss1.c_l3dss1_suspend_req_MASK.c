
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct l3_process {int timer; int st; int callref; TYPE_2__* chan; } ;
struct TYPE_3__ {int* phone; } ;
struct TYPE_4__ {TYPE_1__ setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (int*,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_6, u_char VAR_7, void *VAR_8)
{
 struct sk_buff *VAR_9;
 u_char VAR_10[32];
 u_char *VAR_11 = VAR_10;
 u_char VAR_12, VAR_13;
 u_char *VAR_14 = VAR_6->chan->setup.phone;

 FUNC_1(VAR_11, VAR_6->callref, VAR_3);
 VAR_13 = *VAR_14++;
 if (VAR_13 && (VAR_13 <= 10)) {
  *VAR_11++ = VAR_2;
  *VAR_11++ = VAR_13;
  for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++)
   *VAR_11++ = *VAR_14++;
 } else if (VAR_13) {
  FUNC_3(VAR_6->st, "SUS wrong CALL_ID len %d", VAR_13);
  return;
 }
 VAR_13 = VAR_11 - VAR_10;
 if (!(VAR_9 = FUNC_2(VAR_13)))
  return;
 FUNC_5(FUNC_7(VAR_9, VAR_13), VAR_10, VAR_13);
 FUNC_4(VAR_6->st, VAR_1 | VAR_4, VAR_9);
 FUNC_6(VAR_6, 15);
 FUNC_0(&VAR_6->timer, VAR_5, VAR_0);
}
