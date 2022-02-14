
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (scalar_t__,int) ;
 void* FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int ,char*,scalar_t__) ;

void *FUNC_8(UINT VAR_6)
{
 void *VAR_7;
 UINT VAR_8 = 0;
 VAR_6 = FUNC_3(VAR_6, 1);


 FUNC_2(VAR_1);
 FUNC_2(VAR_2);
 FUNC_1(VAR_3, VAR_6);
 FUNC_2(VAR_0);


 while (1)
 {
  if ((VAR_8++) > VAR_4)
  {
   FUNC_0("InternalMalloc: error: malloc() failed.\n\n");
  }
  VAR_7 = FUNC_4(VAR_6);
  if (VAR_7 != ((void*)0))
  {
   break;
  }

  FUNC_5(VAR_5);
 }

 FUNC_7(FUNC_6(VAR_7), "MEM", VAR_6);

 return VAR_7;
}
