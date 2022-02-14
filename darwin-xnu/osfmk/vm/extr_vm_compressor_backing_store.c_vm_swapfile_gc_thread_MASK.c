
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
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_5 ;
 int FUNC_8 () ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_9 () ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void
FUNC_10(void)

{
 boolean_t VAR_11;
 boolean_t VAR_12;

 VAR_9++;
 VAR_10 = 1;

 while (VAR_2) {

  FUNC_4(&VAR_5);

  if (VAR_4 == VAR_2)
   break;

  if (FUNC_0() || VAR_3 == VAR_2)
   break;

  VAR_11 = VAR_0;
  VAR_12 = VAR_0;

  if (FUNC_1())
   VAR_11 = VAR_2;

  if (FUNC_2()) {
   VAR_11 = VAR_2;
   VAR_12 = VAR_2;
  }
  if (VAR_11 == VAR_0 && VAR_12 == VAR_0)
   break;

  VAR_6 = VAR_0;
  VAR_7 = VAR_0;

  FUNC_5(&VAR_5);

  if (VAR_11 == VAR_2)
   FUNC_8();
  if (VAR_12 == VAR_2)
   FUNC_9();
 }
 VAR_10 = 0;

 if (VAR_4 == VAR_2)
  FUNC_7((event_t)&VAR_4);

 FUNC_3((event_t)&VAR_8, VAR_1);

 FUNC_5(&VAR_5);

 FUNC_6((thread_continue_t)FUNC_10);


}
