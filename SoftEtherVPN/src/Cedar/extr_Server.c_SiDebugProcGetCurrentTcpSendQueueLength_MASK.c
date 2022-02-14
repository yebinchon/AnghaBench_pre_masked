
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_3__ {int Cedar; } ;
typedef TYPE_1__ SERVER ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (char*,int ,char*,char*,char*,char*) ;
 int FUNC_4 (char*,int ,int ) ;

UINT FUNC_5(SERVER *VAR_2, char *VAR_3, char *VAR_4, UINT VAR_5)
{
 char VAR_6[64], VAR_7[64], VAR_8[64];

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0))
 {
  return VAR_0;
 }

 FUNC_4(VAR_6, 0, FUNC_0(VAR_2->Cedar));
 FUNC_4(VAR_7, 0, FUNC_2(VAR_2->Cedar));
 FUNC_4(VAR_8, 0, FUNC_1(VAR_2->Cedar));

 FUNC_3(VAR_4, 0,
  "CurrentTcpQueueSize  = %s\n"
  "QueueBudgetConsuming = %s\n"
  "FifoBudgetConsuming  = %s\n",
  VAR_6, VAR_7, VAR_8);

 return VAR_1;
}
