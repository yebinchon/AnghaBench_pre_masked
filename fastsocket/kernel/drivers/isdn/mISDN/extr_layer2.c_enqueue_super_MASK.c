
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct layer2 {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct layer2*) ;
 scalar_t__ FUNC_2 (struct layer2*,int ,int ,struct sk_buff*) ;

__attribute__((used)) static inline void
FUNC_3(struct layer2 *VAR_1, struct sk_buff *VAR_2)
{
 if (FUNC_2(VAR_1, VAR_0, FUNC_1(VAR_1), VAR_2))
  FUNC_0(VAR_2);
}
