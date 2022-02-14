
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ suspend_state_t ;
struct TYPE_2__ {int save_count; int (* restore ) (scalar_t__*) ;int (* enter ) (scalar_t__) ;int (* save ) (scalar_t__*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 TYPE_1__* VAR_3 ;
 scalar_t__* VAR_4 ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__*) ;

int FUNC_8(suspend_state_t VAR_5)
{
 unsigned long VAR_6 = 0, VAR_7 = 0;
 int VAR_8;
 if (VAR_5 != VAR_1) {
  VAR_3->save(VAR_4);

  for (VAR_8 = 0; VAR_8 < VAR_3->save_count - 1; VAR_8++)
   VAR_6 += VAR_4[VAR_8];
 }


 VAR_3->enter(VAR_5);
 FUNC_0();

 if (VAR_5 != VAR_1) {

  for (VAR_8 = 0; VAR_8 < VAR_3->save_count - 1; VAR_8++)
   VAR_7 += VAR_4[VAR_8];


  if (VAR_7 != VAR_6) {

   FUNC_2(0xbadbadc5);

   while (1)
    VAR_3->enter(VAR_5);
  }
  VAR_3->restore(VAR_4);
 }

 FUNC_3("*** made it back from resume\n");

 return 0;
}
