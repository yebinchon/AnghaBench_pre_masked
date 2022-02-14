
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT64 ;
typedef int SYSTEMTIME ;


 int FUNC_0 (void*,int *) ;
 int FUNC_1 (int *,int ) ;

bool FUNC_2(void *VAR_0, UINT64 VAR_1)
{
 SYSTEMTIME VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return 0;
 }

 FUNC_1(&VAR_2, VAR_1);
 return FUNC_0(VAR_0, &VAR_2);
}
