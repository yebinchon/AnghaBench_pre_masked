
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ elevel; } ;
typedef int MemoryContext ;
typedef TYPE_1__ ErrorData ;


 TYPE_1__* FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_8(void (*VAR_3)())
{
 MemoryContext VAR_4 = VAR_0;

 FUNC_6();
 {
  VAR_3();
 }
 FUNC_3();
 {
  ErrorData *VAR_5 = FUNC_0();


  if (VAR_5->elevel != VAR_1)
  {
   FUNC_5();
  }


  VAR_5->elevel = VAR_2;
  FUNC_7(VAR_5);


  FUNC_1();
  FUNC_2(VAR_4);
 }
 FUNC_4();
}
