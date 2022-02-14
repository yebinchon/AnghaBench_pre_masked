
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int head; } ;
typedef int gfp_t ;


 int FUNC_0 (struct sk_buff*,int) ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (char*,int,int) ;

__attribute__((used)) static inline struct sk_buff *FUNC_4(int VAR_0, int VAR_1, gfp_t VAR_2)
{
 struct sk_buff *VAR_3 = FUNC_1(VAR_0 + VAR_1, VAR_2);

 if (VAR_3) {
  FUNC_0(VAR_3, VAR_0);
  FUNC_2(VAR_3->head, 0, VAR_0 + VAR_1);
 } else
  FUNC_3("alloc cpl wr skb %u+%u, OOM.\n", VAR_0, VAR_1);
 return VAR_3;
}
