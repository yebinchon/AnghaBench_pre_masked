
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_3__ {int IpAddress; } ;
typedef int IP ;
typedef TYPE_1__ DNSCACHE ;


 int FUNC_0 (int *,int *,int) ;
 TYPE_1__* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int VAR_0 ;

bool FUNC_3(IP *VAR_1, char *VAR_2, bool VAR_3)
{
 DNSCACHE *VAR_4;
 char VAR_5[VAR_0];

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 FUNC_2(VAR_5, sizeof(VAR_5), VAR_2, VAR_3);

 VAR_4 = FUNC_1(VAR_5);
 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_1, &VAR_4->IpAddress, sizeof(IP));

 return 1;
}
