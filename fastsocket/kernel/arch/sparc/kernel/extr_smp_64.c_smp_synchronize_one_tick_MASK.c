
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ (* get_tick ) () ;} ;


 size_t VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 size_t VAR_3 ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 scalar_t__ FUNC_5 () ;
 TYPE_1__* VAR_6 ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(int VAR_7)
{
 unsigned long VAR_8, VAR_9;

 VAR_4[VAR_0] = 0;

 FUNC_2(VAR_7);


 while (!VAR_4[VAR_0])
  FUNC_1();


 VAR_4[VAR_0] = 0;
 FUNC_0("#StoreLoad");

 FUNC_3(&VAR_5, VAR_8);
 {
  for (VAR_9 = 0; VAR_9 < VAR_2*VAR_1; VAR_9++) {
   while (!VAR_4[VAR_0])
    FUNC_1();
   VAR_4[VAR_0] = 0;
   FUNC_6();
   VAR_4[VAR_3] = VAR_6->get_tick();
   FUNC_0("#StoreLoad");
  }
 }
 FUNC_4(&VAR_5, VAR_8);
}
