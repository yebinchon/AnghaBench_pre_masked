
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgiseeq_regs {int dummy; } ;
struct sgiseeq_private {struct sgiseeq_regs* sregs; } ;
struct net_device {int trans_start; } ;


 int FUNC_0 (struct net_device*,struct sgiseeq_private*,struct sgiseeq_regs*) ;
 int VAR_0 ;
 struct sgiseeq_private* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline int FUNC_3(struct net_device *VAR_1)
{
 struct sgiseeq_private *VAR_2 = FUNC_1(VAR_1);
 struct sgiseeq_regs *VAR_3 = VAR_2->sregs;
 int VAR_4;

 VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_1->trans_start = VAR_0;
 FUNC_2(VAR_1);

 return 0;
}
