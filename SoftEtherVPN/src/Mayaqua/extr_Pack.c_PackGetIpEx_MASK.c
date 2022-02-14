
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int tmp ;
typedef int data ;
typedef int UINT ;
struct TYPE_9__ {int ipv6_scope_id; } ;
typedef TYPE_1__ UCHAR ;
typedef int PACK ;
typedef TYPE_1__ IP ;


 int FUNC_0 (char*,int,char*,char*) ;
 int * FUNC_1 (int *,char*,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *,char*,int ) ;
 int FUNC_4 (int *,char*,TYPE_1__*,int,int ) ;
 int FUNC_5 (int *,char*,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_9 (TYPE_1__*,int) ;

bool FUNC_10(PACK *VAR_2, char *VAR_3, IP *VAR_4, UINT VAR_5)
{
 UINT VAR_6;
 char VAR_7[VAR_0];

 if (VAR_2 == ((void*)0) || VAR_4 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_0(VAR_7, sizeof(VAR_7), "%s@ipv6_bool", VAR_3);
 if (FUNC_3(VAR_2, VAR_7, VAR_5))
 {
  UCHAR VAR_8[16];
  UINT VAR_9;

  FUNC_9(VAR_8, sizeof(VAR_8));

  FUNC_0(VAR_7, sizeof(VAR_7), "%s@ipv6_array", VAR_3);
  FUNC_4(VAR_2, VAR_7, VAR_8, sizeof(VAR_8), VAR_5);

  FUNC_0(VAR_7, sizeof(VAR_7), "%s@ipv6_scope_id", VAR_3);
  VAR_9 = FUNC_5(VAR_2, VAR_7, VAR_5);

  FUNC_6(VAR_4, VAR_8);
  VAR_4->ipv6_scope_id = VAR_9;
 }
 else
 {
  if (FUNC_1(VAR_2, VAR_3, VAR_1) == ((void*)0))
  {
   FUNC_9(VAR_4, sizeof(IP));
   return 0;
  }

  VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_5);

  if (FUNC_2())
  {
   VAR_6 = FUNC_7(VAR_6);
  }

  FUNC_8(VAR_4, VAR_6);
 }

 return 1;
}
