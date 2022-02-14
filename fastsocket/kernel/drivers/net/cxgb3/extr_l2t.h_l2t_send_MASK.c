
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct t3cdev {int dummy; } ;
struct sk_buff {int dummy; } ;
struct l2t_entry {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct t3cdev*,struct sk_buff*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct t3cdev*,struct sk_buff*,struct l2t_entry*) ;

__attribute__((used)) static inline int FUNC_3(struct t3cdev *VAR_1, struct sk_buff *VAR_2,
      struct l2t_entry *VAR_3)
{
 if (FUNC_1(VAR_3->state == VAR_0))
  return FUNC_0(VAR_1, VAR_2);
 return FUNC_2(VAR_1, VAR_2, VAR_3);
}
