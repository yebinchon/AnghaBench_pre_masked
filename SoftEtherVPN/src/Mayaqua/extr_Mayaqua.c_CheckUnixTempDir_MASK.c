
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tmp2 ;
typedef int tmp ;
typedef char* UINT64 ;
struct TYPE_2__ {int OsType; } ;
typedef int IO ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int * FUNC_3 (char*,int) ;
 int FUNC_4 (char*,int,char*,char*) ;
 TYPE_1__* FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 () ;
 int FUNC_10 (int ) ;

void FUNC_11()
{
 if (FUNC_7(FUNC_5()->OsType))
 {
  char VAR_0[128], VAR_1[64];
  UINT64 VAR_2 = FUNC_9();
  IO *VAR_3;

  FUNC_6("/tmp");

  FUNC_4(VAR_1, sizeof(VAR_1), "%I64u", VAR_2);

  FUNC_4(VAR_0, sizeof(VAR_0), "/tmp/.%s", VAR_1);

  VAR_3 = FUNC_1(VAR_0);
  if (VAR_3 == ((void*)0))
  {
   VAR_3 = FUNC_3(VAR_0, 0);
   if (VAR_3 == ((void*)0))
   {
    FUNC_8("Unable to use /tmp.\n\n");
    FUNC_10(0);
   }
  }

  FUNC_0(VAR_3);

  FUNC_2(VAR_0);
 }
}
