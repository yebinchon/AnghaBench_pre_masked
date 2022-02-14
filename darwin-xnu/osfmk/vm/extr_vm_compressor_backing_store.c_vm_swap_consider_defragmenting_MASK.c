
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int event_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void
FUNC_6(int VAR_10)
{
 boolean_t VAR_11 = (VAR_10 & VAR_2);
 boolean_t VAR_12 = (VAR_10 & VAR_3);

 if (VAR_4 == VAR_0 && !FUNC_0() &&
     (VAR_11 || VAR_12 || FUNC_1() || FUNC_2())) {

  if (!VAR_9 || VAR_11 || VAR_12) {
   FUNC_3(&VAR_5);

   if (VAR_11) {
    VAR_6 = VAR_1;
   }

   if (VAR_12) {
    VAR_7 = VAR_1;
   }

   if (!VAR_9)
    FUNC_5((event_t) &VAR_8);

   FUNC_4(&VAR_5);
  }
 }
}
