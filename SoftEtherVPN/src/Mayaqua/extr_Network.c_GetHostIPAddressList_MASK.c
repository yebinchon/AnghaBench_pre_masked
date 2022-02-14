
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT64 ;
typedef int LIST ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 () ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;
 int * VAR_1 ;
 scalar_t__ VAR_2 ;
 int * VAR_3 ;

LIST *FUNC_6()
{
 LIST *VAR_4 = ((void*)0);
 if (VAR_3 == ((void*)0))
 {
  return FUNC_2();
 }

 FUNC_3(VAR_3);
 {
  UINT64 VAR_5 = FUNC_4();

  if (VAR_2 == 0 ||
   ((VAR_2 + (UINT64)VAR_0) < VAR_5) ||
   VAR_1 == ((void*)0))
  {
   if (VAR_1 != ((void*)0))
   {
    FUNC_1(VAR_1);
   }

   VAR_1 = FUNC_2();

   VAR_2 = VAR_5;
  }

  VAR_4 = FUNC_0(VAR_1);
 }
 FUNC_5(VAR_3);

 if (VAR_4 == ((void*)0))
 {
  VAR_4 = FUNC_2();
 }

 return VAR_4;
}
