
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_llreach_info {int dummy; } ;
typedef int * ifnet_t ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,struct ifnet_llreach_info*) ;

__attribute__((used)) static errno_t
FUNC_2(ifnet_t VAR_3, int VAR_4,
    struct ifnet_llreach_info *VAR_5)
{
 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
  return (VAR_2);

 FUNC_0(VAR_4 == VAR_0 || VAR_4 == VAR_1);

 return (FUNC_1(VAR_3, VAR_4, VAR_5));
}
