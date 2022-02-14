
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int tmp ;
typedef int table_name ;
struct TYPE_9__ {int Name; int * LcidList; int LangList; } ;
struct TYPE_8__ {int Name; } ;
typedef int LIST ;
typedef TYPE_1__ LANGLIST ;


 int FUNC_0 (char*,int *) ;
 int FUNC_1 (TYPE_2__*,TYPE_1__*,int) ;
 int FUNC_2 (char*,int,char*,int ) ;
 int FUNC_3 (int *) ;
 TYPE_1__* FUNC_4 (int *,char*) ;
 TYPE_1__* FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char*,int) ;
 int * FUNC_7 () ;
 int FUNC_8 (char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_9 () ;
 int FUNC_10 (int ) ;
 TYPE_2__ VAR_1 ;
 TYPE_2__ VAR_2 ;
 int FUNC_11 (int) ;

void FUNC_12()
{
 LIST *VAR_3;
 char VAR_4[VAR_0];
 LANGLIST *VAR_5 = ((void*)0);
 LANGLIST *VAR_6 = ((void*)0);
 char VAR_7[VAR_0];
 if (FUNC_9())
 {

  return;
 }

 VAR_3 = FUNC_7();
 if (VAR_3 == ((void*)0))
 {
LABEL_FATAL_ERROR:
  FUNC_0("Fatal Error: The file \"hamcore.se2\" is missing or broken.\r\nPlease check hamcore.se2.\r\n\r\n(First, reboot the computer. If this problem occurs again, please reinstall VPN software files.)", ((void*)0));
  FUNC_11(-1);
  return;
 }


 if (FUNC_6(VAR_4, sizeof(VAR_4)))
 {
  VAR_5 = FUNC_4(VAR_3, VAR_4);
 }

 VAR_6 = FUNC_5(VAR_3);

 if (VAR_5 == ((void*)0))
 {
  VAR_5 = VAR_6;
 }

 if (VAR_5 == ((void*)0))
 {
  goto LABEL_FATAL_ERROR;
 }

 FUNC_10(VAR_5->Name);

 FUNC_1(&VAR_1, VAR_5, sizeof(LANGLIST));
 FUNC_1(&VAR_2, VAR_6, sizeof(LANGLIST));

 VAR_1.LangList = *(VAR_1.LcidList = ((void*)0));
 VAR_2.LangList = *(VAR_2.LcidList = ((void*)0));


 FUNC_2(VAR_7, sizeof(VAR_7), "|strtable_%s.stb", VAR_1.Name);
 if (FUNC_8(VAR_7) == 0)
 {
  goto LABEL_FATAL_ERROR;
 }

 FUNC_3(VAR_3);
}
