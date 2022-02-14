
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct die_args {int regs; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_2,
        unsigned long VAR_3, void *VAR_4)
{
 struct die_args *VAR_5 = (struct die_args *)VAR_4;
 int VAR_6 = VAR_0;

 switch (VAR_3) {
 case 128:
  FUNC_0(VAR_5->regs, 0);
  VAR_6 = VAR_1;
  break;
 default:
  break;
 }
 return VAR_6;
}
