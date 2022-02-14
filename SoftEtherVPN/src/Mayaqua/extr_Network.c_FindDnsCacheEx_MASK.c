
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_5__ {char* HostName; } ;
typedef TYPE_1__ DNSCACHE ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 int FUNC_1 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 () ;

DNSCACHE *FUNC_4(char *VAR_2, bool VAR_3)
{
 DNSCACHE *VAR_4;
 char VAR_5[VAR_1];
 if (VAR_2 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_0(VAR_5, sizeof(VAR_5), VAR_2, VAR_3);

 FUNC_1();
 {
  DNSCACHE VAR_6;
  VAR_6.HostName = VAR_5;
  VAR_4 = FUNC_2(VAR_0, &VAR_6);
 }
 FUNC_3();

 return VAR_4;
}
