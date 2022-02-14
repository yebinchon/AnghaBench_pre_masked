
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int t ;
struct TYPE_9__ {int NonSslList; } ;
struct TYPE_8__ {int IpAddress; } ;
typedef TYPE_1__ NON_SSL ;
typedef int IP ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (int ,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

NON_SSL *FUNC_3(CEDAR *VAR_0, IP *VAR_1)
{
 NON_SSL *VAR_2, VAR_3;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_2(&VAR_3, sizeof(VAR_3));
 FUNC_0(&VAR_3.IpAddress, VAR_1, sizeof(IP));

 VAR_2 = FUNC_1(VAR_0->NonSslList, &VAR_3);

 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 return VAR_2;
}
