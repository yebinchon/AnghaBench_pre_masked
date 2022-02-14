
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct die_args {int err; int regs; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int
FUNC_1(struct notifier_block *VAR_4, unsigned long VAR_5, void *VAR_6)
{
 struct die_args *VAR_7 = VAR_6;

 if (VAR_5 == VAR_0 && (VAR_7->err & VAR_1))
  if (FUNC_0(VAR_7->err, VAR_7->regs) == 1)
   return VAR_3;

 return VAR_2;
}
