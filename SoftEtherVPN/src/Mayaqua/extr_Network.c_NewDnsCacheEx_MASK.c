
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
struct TYPE_6__ {char* HostName; int IpAddress; } ;
typedef int IP ;
typedef TYPE_1__ DNSCACHE ;


 int FUNC_0 (int ,TYPE_1__*) ;
 int FUNC_1 (int *,int *,int) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (char*,int,char*,int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int VAR_1 ;
 TYPE_1__* FUNC_6 (int ,TYPE_1__*) ;
 int FUNC_7 () ;
 TYPE_1__* FUNC_8 (int) ;

void FUNC_9(char *VAR_2, IP *VAR_3, bool VAR_4)
{
 DNSCACHE *VAR_5;
 char VAR_6[VAR_1];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }

 if (FUNC_4() == 0)
 {
  return;
 }

 FUNC_3(VAR_6, sizeof(VAR_6), VAR_2, VAR_4);

 FUNC_5();
 {
  DNSCACHE VAR_7;


  VAR_7.HostName = VAR_6;
  VAR_5 = FUNC_6(VAR_0, &VAR_7);

  if (VAR_5 == ((void*)0))
  {

   VAR_5 = FUNC_8(sizeof(DNSCACHE));
   VAR_5->HostName = FUNC_2(VAR_6);

   FUNC_1(&VAR_5->IpAddress, VAR_3, sizeof(IP));

   FUNC_0(VAR_0, VAR_5);
  }
  else
  {

   FUNC_1(&VAR_5->IpAddress, VAR_3, sizeof(IP));
  }
 }
 FUNC_7();
}
