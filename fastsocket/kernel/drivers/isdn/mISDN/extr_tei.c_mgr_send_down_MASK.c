
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct manager {int ch; int options; int sendq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,int ,int ,int *,int ) ;
 int FUNC_1 (struct manager*) ;
 int FUNC_2 (int *,struct sk_buff*) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct manager *VAR_4, struct sk_buff *VAR_5)
{
 FUNC_2(&VAR_4->sendq, VAR_5);
 if (!FUNC_3(VAR_1, &VAR_4->options)) {
  FUNC_0(&VAR_4->ch, VAR_3, VAR_2, 0,
      ((void*)0), VAR_0);
 } else {
  FUNC_1(VAR_4);
 }
}
