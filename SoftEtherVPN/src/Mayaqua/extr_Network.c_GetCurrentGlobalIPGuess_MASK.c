
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_13__ {int* addr; } ;
typedef int LIST ;
typedef TYPE_1__ IP ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *) ;
 int FUNC_10 (TYPE_1__*,int,int ,int ,int) ;
 int FUNC_11 (TYPE_1__*,int) ;

void FUNC_12(IP *VAR_3, bool VAR_4)
{
 LIST *VAR_5;
 UINT VAR_6;

 if (VAR_3 == ((void*)0))
 {
  return;
 }

 FUNC_11(VAR_3, sizeof(IP));

 VAR_5 = FUNC_2();

 if (VAR_4 == 0)
 {

  for (VAR_6 = 0;VAR_6 < FUNC_9(VAR_5);VAR_6++)
  {
   IP *VAR_7 = FUNC_8(VAR_5, VAR_6);

   if (FUNC_4(VAR_7))
   {
    if (FUNC_7(VAR_7) == 0 && FUNC_6(VAR_7) == 0 && VAR_7->addr[0] != 127)
    {
     FUNC_0(VAR_3, VAR_7, sizeof(IP));
    }
   }
  }

  if (FUNC_7(VAR_3))
  {
   for (VAR_6 = 0;VAR_6 < FUNC_9(VAR_5);VAR_6++)
   {
    IP *VAR_8 = FUNC_8(VAR_5, VAR_6);

    if (FUNC_4(VAR_8))
    {
     if (FUNC_7(VAR_8) == 0 && FUNC_6(VAR_8) && VAR_8->addr[0] != 127)
     {
      FUNC_0(VAR_3, VAR_8, sizeof(IP));
     }
    }
   }
  }

  if (FUNC_7(VAR_3))
  {
   FUNC_10(VAR_3, 127, 0, 0, 1);
  }
 }
 else
 {

  for (VAR_6 = 0;VAR_6 < FUNC_9(VAR_5);VAR_6++)
  {
   IP *VAR_9 = FUNC_8(VAR_5, VAR_6);

   if (FUNC_5(VAR_9))
   {
    UINT VAR_10 = FUNC_3(VAR_9);

    if ((VAR_10 & VAR_0) && ((VAR_10 & VAR_2) == 0) && ((VAR_10 & VAR_1) == 0))
    {
     FUNC_0(VAR_3, VAR_9, sizeof(IP));
    }
   }
  }
 }

 FUNC_1(VAR_5);
}
