
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int thread_continue_t ;
typedef TYPE_1__* processor_t ;
typedef int event_t ;
struct TYPE_5__ {struct TYPE_5__* processor_list; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__,scalar_t__*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 () ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(void)
{
 uint64_t VAR_7 = FUNC_3();

 VAR_5++;


 if ((VAR_5 & 0x7) == 0) {
  processor_t VAR_8;

  VAR_8 = VAR_3->processor_list;
  if (VAR_8 == VAR_0)
   VAR_3 = VAR_2;
  else
   VAR_3 = VAR_8;
 }





 FUNC_2(1);

 if (VAR_6 == 0)
  VAR_6 = VAR_7;

 FUNC_1(VAR_4, VAR_7,
      &VAR_6);

 FUNC_0((event_t)FUNC_5, VAR_1, VAR_6);
 FUNC_4((thread_continue_t)FUNC_5);

}
