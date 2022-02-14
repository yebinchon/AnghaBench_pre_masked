
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_2__ {int Halt; int HaltEvent; int IntervalLastOk; int IntervalLastNg; int Lock; int Ip; int Hostname; } ;
typedef int THREAD ;
typedef TYPE_1__ QUERYIPTHREAD ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 scalar_t__ FUNC_1 (int *,int ,int,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;

void FUNC_6(THREAD *VAR_0, void *VAR_1)
{
 QUERYIPTHREAD *VAR_2 = (QUERYIPTHREAD *)VAR_1;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 while (VAR_2->Halt == 0)
 {
  UINT VAR_3 = 0;
  IP VAR_4;
  bool VAR_5 = 0;

  if (FUNC_1(&VAR_4, VAR_2->Hostname, 5000, &VAR_2->Halt))
  {
   if (FUNC_2(&VAR_4) == 0)
   {
    FUNC_3(VAR_2->Lock);
    {
     FUNC_0(&VAR_2->Ip, &VAR_4, sizeof(IP));
    }
    FUNC_4(VAR_2->Lock);

    VAR_5 = 1;
   }
  }

  if (VAR_5 == 0)
  {
   VAR_3 = VAR_2->IntervalLastNg;
  }
  else
  {
   VAR_3 = VAR_2->IntervalLastOk;
  }

  if (VAR_2->Halt)
  {
   break;
  }

  FUNC_5(VAR_2->HaltEvent, VAR_3);
 }
}
