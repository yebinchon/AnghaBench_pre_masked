
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LOCK ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_1 () ;
 int FUNC_2 (int ) ;

LOCK *FUNC_3()
{
 LOCK *VAR_2;
 UINT VAR_3 = 0;

 while (1)
 {
  if ((VAR_3++) > VAR_1)
  {
   FUNC_0("error: OSNewLock() failed.\n\n");
  }
  VAR_2 = FUNC_1();
  if (VAR_2 != ((void*)0))
  {
   break;
  }
  FUNC_2(VAR_0);
 }

 return VAR_2;
}
