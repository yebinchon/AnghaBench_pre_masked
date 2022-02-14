
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int LocalIP; } ;
typedef TYPE_1__ SOCK ;
typedef int IP ;


 TYPE_1__* FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (TYPE_1__*) ;
 char* FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

bool FUNC_6(IP *VAR_4, bool VAR_5)
{
 SOCK *VAR_6;
 IP VAR_7;
 char *VAR_8 = VAR_1;

 if (VAR_4 == ((void*)0))
 {
  return 0;
 }

 VAR_6 = FUNC_0(VAR_8, VAR_2, VAR_0);

 if (VAR_6 == ((void*)0))
 {
  VAR_6 = FUNC_0(VAR_8, VAR_3, VAR_0);

  if (VAR_6 == ((void*)0))
  {
   VAR_6 = FUNC_0(FUNC_3(), VAR_2, VAR_0);

   if (VAR_6 == ((void*)0))
   {
    return 0;
   }
  }
 }

 FUNC_1(&VAR_7, &VAR_6->LocalIP, sizeof(IP));

 FUNC_2(VAR_6);
 FUNC_5(VAR_6);

 if (FUNC_4(&VAR_7))
 {
  return 0;
 }

 FUNC_1(VAR_4, &VAR_7, sizeof(IP));

 return 1;
}
