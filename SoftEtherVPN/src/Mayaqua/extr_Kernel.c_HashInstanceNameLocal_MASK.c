
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp ;
typedef int key ;
typedef int UINT ;
typedef int UCHAR ;
struct TYPE_2__ {scalar_t__ OsType; } ;


 int FUNC_0 (char*,int,int *,int) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (scalar_t__,int) ;
 TYPE_1__* FUNC_3 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int VAR_2 ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (char*,int,char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;

void FUNC_10(char *VAR_3, UINT VAR_4, char *VAR_5)
{
 char VAR_6[VAR_0];
 UCHAR VAR_7[VAR_2];
 char VAR_8[11];

 if (VAR_3 == ((void*)0) || VAR_5 == ((void*)0))
 {
  return;
 }

 FUNC_6(VAR_6, sizeof(VAR_6), VAR_5);
 FUNC_9(VAR_6);
 FUNC_8(VAR_6);

 FUNC_5(VAR_7, VAR_6, FUNC_7(VAR_6));
 FUNC_0(VAR_8, sizeof(VAR_8), VAR_7, 5);
 VAR_8[10] = 0;

 FUNC_1(VAR_3, VAR_4, "VPN-%s", VAR_8);

 if (FUNC_4(FUNC_3()->OsType))
 {
  if (FUNC_2(FUNC_3()->OsType, 100) >= 2 ||
   FUNC_3()->OsType == VAR_1)
  {
   FUNC_6(VAR_6, sizeof(VAR_6), VAR_3);
   FUNC_1(VAR_3, VAR_4, "Local\\%s", VAR_6);
  }
 }
}
