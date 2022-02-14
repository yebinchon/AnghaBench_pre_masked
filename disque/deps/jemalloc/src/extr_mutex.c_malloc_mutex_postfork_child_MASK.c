
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int malloc_mutex_t ;


 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;

void
FUNC_4(malloc_mutex_t *VAR_1)
{




 if (FUNC_1(VAR_1)) {
  FUNC_3("<jemalloc>: Error re-initializing mutex in "
      "child\n");
  if (VAR_0)
   FUNC_0();
 }

}
