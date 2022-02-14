
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT ;
typedef int HASH_LIST ;


 int FUNC_0 (void**) ;
 void** FUNC_1 (int *,scalar_t__*) ;
 scalar_t__ FUNC_2 (void*) ;

void *FUNC_3(HASH_LIST *VAR_0, UINT VAR_1)
{
 UINT VAR_2, VAR_3;
 void **VAR_4;
 void *VAR_5 = ((void*)0);

 if (VAR_0 == ((void*)0) || VAR_1 == 0)
 {
  return ((void*)0);
 }

 VAR_4 = FUNC_1(VAR_0, &VAR_2);
 if (VAR_4 == ((void*)0))
 {
  return ((void*)0);
 }

 for (VAR_3 = 0;VAR_3 < VAR_2;VAR_3++)
 {
  void *VAR_6 = VAR_4[VAR_3];

  if (FUNC_2(VAR_6) == VAR_1)
  {
   VAR_5 = VAR_6;
  }
 }

 FUNC_0(VAR_4);

 return VAR_5;
}
