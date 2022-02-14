
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipw_hardware {int to_setup; int lock; scalar_t__ shutting_down; } ;


 int VAR_0 ;
 int FUNC_0 (struct ipw_hardware*) ;
 int FUNC_1 (struct ipw_hardware*) ;
 int FUNC_2 (struct ipw_hardware*) ;
 int FUNC_3 (struct ipw_hardware*) ;
 int FUNC_4 (struct ipw_hardware*,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_1)
{
 struct ipw_hardware *VAR_2 = (struct ipw_hardware *) VAR_1;
 unsigned long VAR_3;

 FUNC_5(&VAR_2->lock, VAR_3);
 if (VAR_2->shutting_down) {
  FUNC_6(&VAR_2->lock, VAR_3);
  return;
 }

 if (VAR_2->to_setup == 1) {



  VAR_2->to_setup = 2;
  FUNC_6(&VAR_2->lock, VAR_3);

  FUNC_3(VAR_2);
  FUNC_2(VAR_2);

  FUNC_4(VAR_2, VAR_0 + 1);
  FUNC_1(VAR_2);
 } else {
  int VAR_4 = FUNC_0(VAR_2);
  int VAR_5;

  FUNC_6(&VAR_2->lock, VAR_3);

  do {
   VAR_5 = FUNC_4(VAR_2, VAR_4);
   VAR_5 |= FUNC_1(VAR_2);
  } while (VAR_5);
 }
}
