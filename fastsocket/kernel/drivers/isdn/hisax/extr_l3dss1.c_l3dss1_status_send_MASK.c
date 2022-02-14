
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int cause; } ;
struct l3_process {int state; int st; TYPE_1__ para; int callref; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ) ;
 int VAR_4 ;
 struct sk_buff* FUNC_1 (int) ;
 int FUNC_2 (int ,int,struct sk_buff*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(struct l3_process *VAR_5, u_char VAR_6, void *VAR_7)
{
 u_char VAR_8[16];
 u_char *VAR_9 = VAR_8;
 int VAR_10;
 struct sk_buff *VAR_11;

 FUNC_0(VAR_9, VAR_5->callref, VAR_3);

 *VAR_9++ = VAR_2;
 *VAR_9++ = 0x2;
 *VAR_9++ = 0x80;
 *VAR_9++ = VAR_5->para.cause | 0x80;

 *VAR_9++ = VAR_1;
 *VAR_9++ = 0x1;
 *VAR_9++ = VAR_5->state & 0x3f;

 VAR_10 = VAR_9 - VAR_8;
 if (!(VAR_11 = FUNC_1(VAR_10)))
  return;
 FUNC_3(FUNC_4(VAR_11, VAR_10), VAR_8, VAR_10);
 FUNC_2(VAR_5->st, VAR_0 | VAR_4, VAR_11);
}
