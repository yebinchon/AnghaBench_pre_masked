
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mite_struct {scalar_t__ used; struct mite_struct* next; } ;


 int FUNC_0 (struct mite_struct*) ;
 struct mite_struct* VAR_0 ;
 int FUNC_1 (char*,...) ;

void FUNC_2(void)
{
 struct mite_struct *VAR_1, *VAR_2;

 FUNC_1("Available NI device IDs:");
 if (VAR_0)
  for (VAR_1 = VAR_0; VAR_1; VAR_1 = VAR_2) {
   VAR_2 = VAR_1->next;
   FUNC_1(" 0x%04x", FUNC_0(VAR_1));
   if (VAR_1->used)
    FUNC_1("(used)");
  }
 FUNC_1("\n");

}
