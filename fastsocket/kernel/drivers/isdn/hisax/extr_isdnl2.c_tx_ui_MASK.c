
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int ui_queue; } ;
struct PStack {TYPE_1__ l2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct PStack*,struct sk_buff*) ;
 int FUNC_1 (int ,int *,int) ;
 int FUNC_2 (TYPE_1__*,int *,int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_5(struct PStack *VAR_3)
{
 struct sk_buff *VAR_4;
 u_char VAR_5[VAR_1];
 int VAR_6;

 VAR_6 = FUNC_2(&(VAR_3->l2), VAR_5, VAR_0);
 VAR_5[VAR_6++] = VAR_2;
 while ((VAR_4 = FUNC_3(&VAR_3->l2.ui_queue))) {
  FUNC_1(FUNC_4(VAR_4, VAR_6), VAR_5, VAR_6);
  FUNC_0(VAR_3, VAR_4);
 }
}
