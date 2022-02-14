
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thread_continue_t ;
typedef int event_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,void*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_10(int VAR_5)
{
 if (VAR_5) {
  if (FUNC_5()) {
   FUNC_4(VAR_2);

  } else {

   boolean_t VAR_6 = VAR_0;
   boolean_t VAR_7 = VAR_2;

   FUNC_7();

   FUNC_3();
   FUNC_6(VAR_0);

   do {
    if (&FUNC_1 != ((void*)0)) {
     VAR_6 = FUNC_1)(0);
    }
    if (VAR_7 == VAR_2 || VAR_6 == VAR_2) {




     FUNC_4(VAR_0);
    }
    VAR_7 = VAR_0;

   } while (VAR_6 == VAR_2 && VAR_3 < VAR_4);

   FUNC_2();
  }
 }

 FUNC_0((event_t) &FUNC_10, VAR_1);

 FUNC_9((thread_continue_t) FUNC_10, (void *)1);

}
