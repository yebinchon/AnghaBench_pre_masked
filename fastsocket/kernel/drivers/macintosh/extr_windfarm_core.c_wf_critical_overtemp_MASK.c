
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char**,char**,int ) ;

int FUNC_1(void)
{
 static char * VAR_1 = "/sbin/critical_overtemp";
 char *VAR_2[] = { VAR_1, ((void*)0) };
 static char *VAR_3[] = { "HOME=/",
    "TERM=linux",
    "PATH=/sbin:/usr/sbin:/bin:/usr/bin",
    ((void*)0) };

 return FUNC_0(VAR_1,
       VAR_2, VAR_3, VAR_0);
}
