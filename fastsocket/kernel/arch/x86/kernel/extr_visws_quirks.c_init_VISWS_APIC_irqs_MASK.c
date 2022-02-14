
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct irq_desc {int depth; int * chip; scalar_t__ action; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 struct irq_desc* FUNC_1 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int,int *) ;

void FUNC_3(void)
{
 int VAR_11;

 for (VAR_11 = 0; VAR_11 < VAR_2 + VAR_0 + 1; VAR_11++) {
  struct irq_desc *VAR_12 = FUNC_1(VAR_11);

  VAR_12->status = VAR_5;
  VAR_12->action = 0;
  VAR_12->depth = 1;

  if (VAR_11 == 0) {
   VAR_12->chip = &VAR_7;
  }
  else if (VAR_11 == VAR_3) {
   VAR_12->chip = &VAR_7;
  }
  else if (VAR_11 == VAR_4) {
   VAR_12->chip = &VAR_7;
  }
  else if (VAR_11 == VAR_1) {
   VAR_12->chip = &VAR_9;
  }
  else if (VAR_11 < VAR_2) {
   VAR_12->chip = &VAR_10;
  }
  else if (FUNC_0(VAR_11)) {
   VAR_12->chip = &VAR_7;
  }
 }

 FUNC_2(VAR_1, &VAR_8);
 FUNC_2(2, &VAR_6);
}
