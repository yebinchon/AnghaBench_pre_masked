
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ cause; } ;
struct l3_process {int timer; int st; int callref; TYPE_1__ para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int*,int ,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_7, u_char VAR_8, void *VAR_9)
{
 u_char VAR_10[16];
 u_char *VAR_11 = VAR_10;
 int VAR_12;
 struct sk_buff *VAR_13;
 u_char VAR_14 = 16;

 FUNC_1(&VAR_7->timer);
 if (VAR_7->para.cause != VAR_4)
  VAR_14 = VAR_7->para.cause;

 FUNC_2(VAR_11, VAR_7->callref, VAR_3);

 *VAR_11++ = VAR_2;
 *VAR_11++ = 0x2;
 *VAR_11++ = 0x80;
 *VAR_11++ = VAR_14 | 0x80;

 VAR_12 = VAR_11 - VAR_10;
 if (!(VAR_13 = FUNC_3(VAR_12)))
  return;
 FUNC_5(FUNC_7(VAR_13, VAR_12), VAR_10, VAR_12);
 FUNC_6(VAR_7, 19);
 FUNC_4(VAR_7->st, VAR_1 | VAR_5, VAR_13);
 FUNC_0(&VAR_7->timer, VAR_6, VAR_0);
}
