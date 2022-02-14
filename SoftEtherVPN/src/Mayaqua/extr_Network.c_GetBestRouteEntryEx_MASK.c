
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int ROUTE_TABLE ;
typedef int ROUTE_ENTRY ;
typedef int IP ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int ) ;
 int * FUNC_2 () ;

ROUTE_ENTRY *FUNC_3(IP *VAR_0, UINT VAR_1)
{
 ROUTE_TABLE *VAR_2;
 ROUTE_ENTRY *VAR_3 = ((void*)0);

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_2 = FUNC_2();
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 VAR_3 = FUNC_1(VAR_2, VAR_0, VAR_1);
 FUNC_0(VAR_2);

 return VAR_3;
}
