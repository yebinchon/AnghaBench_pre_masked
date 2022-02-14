
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT64 ;
struct TYPE_7__ {scalar_t__ Param1; } ;
typedef TYPE_1__ LIST ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (TYPE_1__*) ;

bool FUNC_5(LIST *VAR_0, char *VAR_1, UINT64 VAR_2, UINT64 VAR_3)
{
 bool VAR_4 = 0;
 UINT64 VAR_5 = FUNC_3();

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == 0)
 {
  return 0;
 }

 FUNC_2(VAR_0);
 {
  if (VAR_3 != 0)
  {
   if (VAR_0->Param1 == 0 || (VAR_5 >= (VAR_0->Param1 + VAR_3)))
   {
    FUNC_0(VAR_0);

    VAR_0->Param1 = VAR_5;
   }
  }

  VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2);
 }
 FUNC_4(VAR_0);

 return VAR_4;
}
