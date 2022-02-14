
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff_head {int dummy; } ;
struct sk_buff {int users; } ;


 int FUNC_0 (int,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct sk_buff_head*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct sk_buff_head *VAR_1)
{
        struct sk_buff *VAR_2;

 FUNC_0(4, VAR_0, "purgque");
        while ((VAR_2 = FUNC_3(VAR_1))) {
                FUNC_1(&VAR_2->users);
                FUNC_2(VAR_2);
        }
}
