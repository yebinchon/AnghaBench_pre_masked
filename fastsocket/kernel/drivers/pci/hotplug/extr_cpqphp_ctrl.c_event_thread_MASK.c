
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct controller {struct controller* next; } ;


 int VAR_0 ;
 struct controller* VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct controller*) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(void* VAR_3)
{
 struct controller *VAR_4;

 while (1) {
  FUNC_1("!!!!event_thread sleeping\n");
  FUNC_5(VAR_0);
  FUNC_4();

  if (FUNC_3())
   break;

  if (VAR_2)
   FUNC_0(VAR_2);
  else
   for (VAR_4 = VAR_1; VAR_4; VAR_4=VAR_4->next)
    FUNC_2(VAR_4);
 }
 FUNC_1("event_thread signals exit\n");
 return 0;
}
