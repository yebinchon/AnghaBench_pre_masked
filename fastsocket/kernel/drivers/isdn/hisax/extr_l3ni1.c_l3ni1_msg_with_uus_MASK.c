
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {char* uus1_data; } ;
struct TYPE_4__ {TYPE_1__ ni1; } ;
struct l3_process {int st; TYPE_2__ prot; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct sk_buff*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct sk_buff*,int) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static void
FUNC_7(struct l3_process *VAR_3, u_char VAR_4)
{
 struct sk_buff *VAR_5;
 u_char VAR_6[16+40];
 u_char *VAR_7 = VAR_6;
 int VAR_8;

 FUNC_0(VAR_7, VAR_3->callref, VAR_4);

        if (VAR_3->prot.ni1.uus1_data[0])
  { *VAR_7++ = VAR_1;
           *VAR_7++ = FUNC_6(VAR_3->prot.ni1.uus1_data) + 1;
           *VAR_7++ = 0x04;
           FUNC_5(VAR_7,VAR_3->prot.ni1.uus1_data);
           VAR_7 += FUNC_6(VAR_3->prot.ni1.uus1_data);
           VAR_3->prot.ni1.uus1_data[0] = '\0';
         }

 VAR_8 = VAR_7 - VAR_6;
 if (!(VAR_5 = FUNC_1(VAR_8)))
  return;
 FUNC_3(FUNC_4(VAR_5, VAR_8), VAR_6, VAR_8);
 FUNC_2(VAR_3->st, VAR_0 | VAR_2, VAR_5);
}
