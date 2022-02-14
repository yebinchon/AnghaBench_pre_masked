
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_poll_params {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ifnet*,struct ifnet_poll_params*) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int) ;

errno_t
FUNC_3(struct ifnet *VAR_2, struct ifnet_poll_params *VAR_3)
{
 errno_t VAR_4;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return (VAR_0);
 else if (!FUNC_2(VAR_2, 1))
  return (VAR_1);

 VAR_4 = FUNC_0(VAR_2, VAR_3);


 FUNC_1(VAR_2);

 return (VAR_4);
}
