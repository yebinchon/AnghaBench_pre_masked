
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ elevel; scalar_t__ sqlerrcode; char* message; } ;
typedef TYPE_1__ ErrorData ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 () ;

__attribute__((used)) static void
FUNC_1(ErrorData *VAR_3)
{




 if (VAR_3->elevel == VAR_2 && VAR_3->sqlerrcode == VAR_0 &&
  FUNC_0())
 {
  VAR_3->sqlerrcode = VAR_1;
  VAR_3->message = "canceling the transaction since it was "
       "involved in a distributed deadlock";
 }
}
