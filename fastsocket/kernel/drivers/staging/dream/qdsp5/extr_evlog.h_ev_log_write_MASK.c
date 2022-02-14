
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev_log {int fault; int next; int max; struct ev_entry* entry; } ;
struct ev_entry {unsigned int id; unsigned int arg; int when; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ev_log *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 struct ev_entry *VAR_3;
 unsigned long VAR_4;
 FUNC_2(VAR_4);

 if (VAR_0->fault) {
  if (VAR_0->fault == 1)
   goto done;
  VAR_0->fault--;
 }

 VAR_3 = VAR_0->entry + VAR_0->next;
 VAR_3->when = FUNC_0();
 VAR_3->id = VAR_1;
 VAR_3->arg = VAR_2;
 VAR_0->next = (VAR_0->next + 1) & (VAR_0->max - 1);
done:
 FUNC_1(VAR_4);
}
