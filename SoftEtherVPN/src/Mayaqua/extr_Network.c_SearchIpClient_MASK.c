
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int t ;
struct TYPE_6__ {int IpAddress; } ;
typedef TYPE_1__ IP_CLIENT ;
typedef int IP ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int VAR_0 ;

IP_CLIENT *FUNC_3(IP *VAR_1)
{
 IP_CLIENT VAR_2;

 if (VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(&VAR_2, sizeof(VAR_2));
 FUNC_0(&VAR_2.IpAddress, VAR_1, sizeof(IP));

 return FUNC_1(VAR_0, &VAR_2);
}
