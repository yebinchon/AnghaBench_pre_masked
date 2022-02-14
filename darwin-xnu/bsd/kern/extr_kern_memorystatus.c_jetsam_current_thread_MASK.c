
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct jetsam_thread_state {scalar_t__ thread; } ;


 scalar_t__ FUNC_0 () ;
 struct jetsam_thread_state* VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*) ;

__attribute__((used)) static inline struct jetsam_thread_state *
FUNC_2(void)
{
 for (int VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  if (VAR_0[VAR_2].thread == FUNC_0())
   return &(VAR_0[VAR_2]);
 }
 FUNC_1("jetsam_current_thread() is being called from a non-jetsam thread\n");

 return ((void*)0);
}
