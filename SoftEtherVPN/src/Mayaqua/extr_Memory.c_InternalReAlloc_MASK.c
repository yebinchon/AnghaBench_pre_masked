
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 void* FUNC_4 (void*,scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,scalar_t__,int ) ;

void *FUNC_8(void *VAR_4, UINT VAR_5)
{
 void *VAR_6;
 UINT VAR_7 = 0;
 VAR_5 = FUNC_3(VAR_5, 1);


 FUNC_2(VAR_0);
 FUNC_1(VAR_1, VAR_5);


 while (1)
 {
  if ((VAR_7++) > VAR_2)
  {
   FUNC_0("InternalReAlloc: error: realloc() failed.\n\n");
  }
  VAR_6 = FUNC_4(VAR_4, VAR_5);
  if (VAR_6 != ((void*)0))
  {
   break;
  }

  FUNC_5(VAR_3);
 }

 FUNC_7(FUNC_6(VAR_4), VAR_5, FUNC_6(VAR_6));

 return VAR_6;
}
