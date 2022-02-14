
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int local_ip ;
typedef int UINT ;
typedef int SOCK ;
typedef int IP ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int) ;

SOCK *FUNC_5(IP *VAR_0, UINT VAR_1)
{
 SOCK *VAR_2;
 IP VAR_3;

 if (VAR_0 == ((void*)0) || FUNC_2(VAR_0) || FUNC_1(VAR_0) == 0)
 {
  VAR_0 = ((void*)0);
 }

 FUNC_4(&VAR_3, sizeof(VAR_3));
 FUNC_0(&VAR_3, VAR_0);

 VAR_2 = FUNC_3(VAR_1, &VAR_3);

 if (VAR_2 == ((void*)0))
 {
  VAR_2 = FUNC_3(VAR_1, ((void*)0));
 }

 return VAR_2;
}
