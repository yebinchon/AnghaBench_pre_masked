
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int t ;
typedef int UINT ;
struct TYPE_5__ {char* HostName; int IpAddress; } ;
typedef int IP ;
typedef TYPE_1__ HOSTCACHE ;


 int FUNC_0 (int *,int *,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (char*,int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_1__*,int) ;

bool FUNC_7(char *VAR_1, UINT VAR_2, IP *VAR_3)
{
 bool VAR_4;

 if (VAR_1 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 VAR_4 = 0;

 FUNC_2(VAR_0);
 {
  HOSTCACHE VAR_5, *VAR_6;
  FUNC_6(&VAR_5, sizeof(VAR_5));
  FUNC_0(&VAR_5.IpAddress, VAR_3, sizeof(IP));

  VAR_6 = FUNC_3(VAR_0, &VAR_5);
  if (VAR_6 != ((void*)0))
  {
   if (FUNC_1(VAR_6->HostName) == 0)
   {
    VAR_4 = 1;
    FUNC_4(VAR_1, VAR_2, VAR_6->HostName);
   }
   else
   {
    VAR_4 = 1;
    FUNC_4(VAR_1, VAR_2, "");
   }
  }
 }
 FUNC_5(VAR_0);

 return VAR_4;
}
