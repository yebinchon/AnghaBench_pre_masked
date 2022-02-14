
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_5__ {scalar_t__ cause; } ;
struct l3_process {TYPE_3__* st; int callref; TYPE_1__ para; } ;
struct TYPE_6__ {int (* l3l4 ) (TYPE_3__*,int,struct l3_process*) ;} ;
struct TYPE_7__ {TYPE_2__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*,int ,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct l3_process*) ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (TYPE_3__*,int,struct sk_buff*) ;
 int FUNC_4 (int ,int*,int) ;
 int FUNC_5 (struct l3_process*,int ) ;
 int FUNC_6 (struct sk_buff*,int) ;
 int FUNC_7 (TYPE_3__*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_8(struct l3_process *VAR_7, u_char VAR_8, void *VAR_9)
{
 struct sk_buff *VAR_10;
 u_char VAR_11[16];
 u_char *VAR_12 = VAR_11;
 int VAR_13;
 u_char VAR_14 = 21;

 if (VAR_7->para.cause != VAR_5)
  VAR_14 = VAR_7->para.cause;

 FUNC_0(VAR_12, VAR_7->callref, VAR_4);

 *VAR_12++ = VAR_2;
 *VAR_12++ = 0x2;
 *VAR_12++ = 0x80;
 *VAR_12++ = VAR_14 | 0x80;

 VAR_13 = VAR_12 - VAR_11;
 if (!(VAR_10 = FUNC_2(VAR_13)))
  return;
 FUNC_4(FUNC_6(VAR_10, VAR_13), VAR_11, VAR_13);
 FUNC_3(VAR_7->st, VAR_1 | VAR_6, VAR_10);
 VAR_7->st->l3.l3l4(VAR_7->st, VAR_0 | VAR_3, VAR_7);
 FUNC_5(VAR_7, 0);
 FUNC_1(VAR_7);
}
