
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
typedef scalar_t__ UINT ;
struct TYPE_5__ {int Event; int Queue; } ;
typedef int TUBEDATA ;
typedef TYPE_1__ TUBE ;
typedef int SOCK_EVENT ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int *,scalar_t__) ;

TUBEDATA *FUNC_9(TUBE *VAR_1, UINT VAR_2)
{
 UINT64 VAR_3, VAR_4;
 TUBEDATA *VAR_5 = ((void*)0);

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 if (FUNC_2(VAR_1) == 0)
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_5();
 VAR_4 = VAR_3 + (UINT64)VAR_2;

 while (1)
 {
  UINT64 VAR_6 = FUNC_5();
  UINT VAR_7;
  SOCK_EVENT *VAR_8;
  UINT VAR_9;

  VAR_5 = ((void*)0);

  if (FUNC_2(VAR_1) == 0)
  {
   break;
  }

  FUNC_3(VAR_1->Queue);
  {
   VAR_5 = FUNC_0(VAR_1->Queue);
  }
  FUNC_6(VAR_1->Queue);

  if (VAR_5 != ((void*)0))
  {
   break;
  }

  if (VAR_2 != VAR_0 && VAR_6 >= VAR_4)
  {
   return ((void*)0);
  }

  VAR_7 = (UINT)(VAR_4 - VAR_6);

  VAR_8 = FUNC_1(VAR_1);

  VAR_9 = (VAR_2 == VAR_0 ? VAR_0 : VAR_7);

  if (VAR_8 == ((void*)0))
  {
   FUNC_7(VAR_1->Event, VAR_9);
  }
  else
  {
   FUNC_8(VAR_8, VAR_9);

   FUNC_4(VAR_8);
  }
 }

 return VAR_5;
}
