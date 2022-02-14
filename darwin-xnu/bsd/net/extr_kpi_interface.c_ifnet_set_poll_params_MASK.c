
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ifnet_poll_params {int dummy; } ;
struct ifnet {int dummy; } ;
typedef int errno_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ifnet*,struct ifnet_poll_params*,int ) ;
 int FUNC_1 (struct ifnet*) ;
 int FUNC_2 (struct ifnet*,int) ;

errno_t
FUNC_3(struct ifnet *VAR_3, struct ifnet_poll_params *VAR_4)
{
 errno_t VAR_5;

 if (VAR_3 == ((void*)0))
  return (VAR_0);
 else if (!FUNC_2(VAR_3, 1))
  return (VAR_1);

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_2);


 FUNC_1(VAR_3);

 return (VAR_5);
}
