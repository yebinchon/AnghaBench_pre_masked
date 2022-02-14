
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {char* uus1_data; } ;
struct TYPE_6__ {TYPE_2__ dss1; } ;
struct TYPE_4__ {scalar_t__ cause; } ;
struct l3_process {int timer; int st; TYPE_3__ prot; int callref; TYPE_1__ para; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int*,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct l3_process*) ;
 int VAR_7 ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (int ,int,struct sk_buff*) ;
 int FUNC_5 (int ,int*,int) ;
 int FUNC_6 (struct l3_process*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10(struct l3_process *VAR_8, u_char VAR_9, void *VAR_10)
{
 struct sk_buff *VAR_11;
 u_char VAR_12[16+40];
 u_char *VAR_13 = VAR_12;
 int VAR_14;
 u_char VAR_15 = 16;

 if (VAR_8->para.cause != VAR_5)
  VAR_15 = VAR_8->para.cause;

 FUNC_2(VAR_8);

 FUNC_1(VAR_13, VAR_8->callref, VAR_4);

 *VAR_13++ = VAR_2;
 *VAR_13++ = 0x2;
 *VAR_13++ = 0x80;
 *VAR_13++ = VAR_15 | 0x80;

        if (VAR_8->prot.dss1.uus1_data[0])
  { *VAR_13++ = VAR_3;
           *VAR_13++ = FUNC_9(VAR_8->prot.dss1.uus1_data) + 1;
           *VAR_13++ = 0x04;
           FUNC_8(VAR_13,VAR_8->prot.dss1.uus1_data);
           VAR_13 += FUNC_9(VAR_8->prot.dss1.uus1_data);
           VAR_8->prot.dss1.uus1_data[0] = '\0';
         }

 VAR_14 = VAR_13 - VAR_12;
 if (!(VAR_11 = FUNC_3(VAR_14)))
  return;
 FUNC_5(FUNC_7(VAR_11, VAR_14), VAR_12, VAR_14);
 FUNC_6(VAR_8, 11);
 FUNC_4(VAR_8->st, VAR_1 | VAR_6, VAR_11);
 FUNC_0(&VAR_8->timer, VAR_7, VAR_0);
}
