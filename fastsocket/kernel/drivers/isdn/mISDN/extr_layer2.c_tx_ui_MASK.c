
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sk_buff {int dummy; } ;
struct layer2 {int ui_queue; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct layer2*,struct sk_buff*) ;
 int FUNC_1 (int ,int*,int) ;
 int FUNC_2 (struct layer2*,int*,int ) ;
 struct sk_buff* FUNC_3 (int *) ;
 int FUNC_4 (struct sk_buff*,int) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static void
FUNC_6(struct layer2 *VAR_4)
{
 struct sk_buff *VAR_5;
 u_char VAR_6[VAR_2];
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_6, VAR_0);
 if (FUNC_5(VAR_1, &VAR_4->flag))
  VAR_6[1] = 0xff;
 VAR_6[VAR_7++] = VAR_3;
 while ((VAR_5 = FUNC_3(&VAR_4->ui_queue))) {
  FUNC_1(FUNC_4(VAR_5, VAR_7), VAR_6, VAR_7);
  FUNC_0(VAR_4, VAR_5);
 }
}
