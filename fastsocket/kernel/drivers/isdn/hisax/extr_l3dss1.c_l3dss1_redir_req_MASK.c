
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef char u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_7__ {int invoke_id; int uus1_data; } ;
struct TYPE_8__ {TYPE_2__ dss1; } ;
struct TYPE_6__ {int cause; } ;
struct l3_process {int st; TYPE_5__* chan; TYPE_3__ prot; int callref; TYPE_1__ para; } ;
struct TYPE_9__ {char* phone; int screen; int eazmsn; } ;
struct TYPE_10__ {TYPE_4__ setup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int,struct sk_buff*) ;
 int FUNC_4 (struct l3_process*,char,void*) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,int) ;
 int FUNC_8 (int ,int ) ;
 char FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(struct l3_process *VAR_3, u_char VAR_4, void *VAR_5)
{
 struct sk_buff *VAR_6;
 u_char VAR_7[128];
 u_char *VAR_8 = VAR_7;
        u_char *VAR_9;
        u_char VAR_10 = 0;
        u_char VAR_11 = 0;
 int VAR_12;


        FUNC_8(VAR_3->prot.dss1.uus1_data,VAR_3->chan->setup.eazmsn);
        if (!VAR_3->chan->setup.phone[0])
          { VAR_3->para.cause = -1;
            FUNC_4(VAR_3,VAR_4,VAR_5);
            return;
          }

        if (VAR_3->prot.dss1.invoke_id)
          FUNC_1(VAR_3->st,VAR_3->prot.dss1.invoke_id);

        if (!(VAR_3->prot.dss1.invoke_id = FUNC_6(VAR_3->st)))
          return;

        FUNC_0(VAR_8, VAR_3->callref, VAR_1);

        for (VAR_9 = VAR_3->chan->setup.phone; (*VAR_9) && (*VAR_9 != '.'); VAR_9++) VAR_10++;
        if (*VAR_9++ == '.') VAR_11 = FUNC_9(VAR_9) + 2;

 *VAR_8++ = 0x1c;
        *VAR_8++ = VAR_10 + VAR_11 + 2 + 2 + 8 + 3 + 3;
        *VAR_8++ = 0x91;
        *VAR_8++ = 0xa1;

        *VAR_8++ = VAR_10 + VAR_11 + 2 + 2 + 8 + 3;
        *VAR_8++ = 0x02;
 *VAR_8++ = 0x01;
        *VAR_8++ = VAR_3->prot.dss1.invoke_id;
        *VAR_8++ = 0x02;
 *VAR_8++ = 0x01;
        *VAR_8++ = 0x0D;

        *VAR_8++ = 0x30;
        *VAR_8++ = VAR_10 + 2 + 2 + 3 + VAR_11;

        *VAR_8++ = 0x30;
        *VAR_8++ = VAR_10+2+VAR_11;
        *VAR_8++ = 0x80;
 *VAR_8++ = VAR_10;
        for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++)
  *VAR_8++ = VAR_3->chan->setup.phone[VAR_12];

        if (VAR_11)
   { *VAR_8++ = 0x04;
            *VAR_8++ = VAR_11 - 2;
            while (*VAR_9) *VAR_8++ = *VAR_9++;
          }

        *VAR_8++ = 0x01;
        *VAR_8++ = 0x01;
        *VAR_8++ = VAR_3->chan->setup.screen;

 VAR_12 = VAR_8 - VAR_7;
 if (!(VAR_6 = FUNC_2(VAR_12))) return;
 FUNC_5(FUNC_7(VAR_6, VAR_12), VAR_7, VAR_12);

        FUNC_3(VAR_3->st, VAR_0 | VAR_2, VAR_6);
}
