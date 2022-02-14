
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int LIST ;
typedef int IP ;


 int FUNC_0 (int *,int *) ;
 int * FUNC_1 (int *,int) ;
 int VAR_0 ;
 int * FUNC_2 (int *,scalar_t__) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ) ;

LIST *FUNC_5(LIST *VAR_1)
{
 LIST *VAR_2;
 UINT VAR_3;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_4(VAR_0);

 for (VAR_3 = 0;VAR_3 < FUNC_3(VAR_1);VAR_3++)
 {
  IP *VAR_4 = FUNC_2(VAR_1, VAR_3);

  if (VAR_4 != ((void*)0))
  {
   VAR_4 = FUNC_1(VAR_4, sizeof(IP));

   FUNC_0(VAR_2, VAR_4);
  }
 }

 return VAR_2;
}
