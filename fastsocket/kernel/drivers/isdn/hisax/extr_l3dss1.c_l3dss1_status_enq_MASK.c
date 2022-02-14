
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int cause; } ;
struct l3_process {TYPE_1__ para; } ;


 int FUNC_0 (struct l3_process*,struct sk_buff*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct l3_process*,int ,int *) ;
 int FUNC_2 (struct l3_process*,int) ;

__attribute__((used)) static void
FUNC_3(struct l3_process *VAR_1, u_char VAR_2, void *VAR_3)
{
 int VAR_4;
 struct sk_buff *VAR_5 = VAR_3;

 VAR_4 = FUNC_0(VAR_1, VAR_5, VAR_0);
 FUNC_2(VAR_1, VAR_4);
 VAR_1->para.cause = 30;
        FUNC_1(VAR_1, VAR_2, ((void*)0));
}
