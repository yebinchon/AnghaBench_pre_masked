
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
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int*,int ,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct l3_process*) ;
 int VAR_7 ;
 int VAR_8 ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_9, u_char VAR_10, void *VAR_11)
{
 struct sk_buff *VAR_12;
 u_char VAR_13[16];
 u_char *VAR_14 = VAR_13;
 int VAR_15;
 u_char VAR_16 = 0x10;
 u_char VAR_17 = 1;

 if (VAR_9->para.cause > 0)
  VAR_16 = VAR_9->para.cause;

 switch (VAR_16 & 0x7f) {
  case 0x10:
   VAR_17 = 0;
   break;
                case 0x11:
                        VAR_16 = VAR_1;
                        break;
  case 0x15:
   VAR_16 = VAR_0;
   break;
 }
 FUNC_2(VAR_9);
 FUNC_1(VAR_14, VAR_9->callref, VAR_4, VAR_5);
 *VAR_14++ = VAR_8;
 *VAR_14++ = VAR_17;
 if (VAR_17)
  *VAR_14++ = VAR_16 | 0x80;
 FUNC_6(VAR_9, 11);
 VAR_15 = VAR_14 - VAR_13;
 if (!(VAR_12 = FUNC_3(VAR_15)))
  return;
 FUNC_5(FUNC_7(VAR_12, VAR_15), VAR_13, VAR_15);
 FUNC_4(VAR_9->st, VAR_3 | VAR_6, VAR_12);
 FUNC_0(&VAR_9->timer, VAR_7, VAR_2);
}
