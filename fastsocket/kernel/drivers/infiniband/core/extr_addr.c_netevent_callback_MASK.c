
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct notifier_block {int dummy; } ;
struct neighbour {int nud_state; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct notifier_block *VAR_3, unsigned long VAR_4,
 void *VAR_5)
{
 if (VAR_4 == VAR_0) {
  struct neighbour *VAR_6 = VAR_5;

  if (VAR_6->nud_state & VAR_1) {
   FUNC_0(VAR_2);
  }
 }
 return 0;
}
