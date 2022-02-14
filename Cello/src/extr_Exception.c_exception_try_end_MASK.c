
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct Exception {scalar_t__ depth; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct Exception* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;

void FUNC_3(void) {
  struct Exception* VAR_2 = FUNC_1(VAR_0);
  if (VAR_2->depth == 0) {
    FUNC_2(VAR_1, "Cello Fatal Error: Exception Buffer Underflow!\n");
    FUNC_0();
  }
  VAR_2->depth--;
}
