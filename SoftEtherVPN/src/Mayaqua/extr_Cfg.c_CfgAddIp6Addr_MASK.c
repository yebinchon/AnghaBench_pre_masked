
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ITEM ;
typedef int IPV6_ADDR ;
typedef int IP ;
typedef int FOLDER ;


 int * FUNC_0 (int *,char*,int *) ;
 int FUNC_1 (int *,int *) ;

ITEM *FUNC_2(FOLDER *VAR_0, char *VAR_1, IPV6_ADDR *VAR_2)
{
 IP VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_1(&VAR_3, VAR_2);

 return FUNC_0(VAR_0, VAR_1, &VAR_3);
}
