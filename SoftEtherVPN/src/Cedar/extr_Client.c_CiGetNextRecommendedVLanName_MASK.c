
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int tmp ;
typedef int t ;
typedef int UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_6__ {int DeviceName; } ;
typedef TYPE_2__ RPC_CLIENT_ENUM_VLAN ;
typedef int REMOTE_CLIENT ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,char*) ;
 int FUNC_4 (char*,int,char*) ;
 int FUNC_5 (TYPE_2__*,int) ;

bool FUNC_6(REMOTE_CLIENT *VAR_2, char *VAR_3, UINT VAR_4)
{
 RPC_CLIENT_ENUM_VLAN VAR_5;
 UINT VAR_6;
 bool VAR_7;
 UINT VAR_8;
 bool VAR_9 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 FUNC_5(&VAR_5, sizeof(VAR_5));

 if (FUNC_0(VAR_2, &VAR_5) != VAR_0)
 {
  return 0;
 }

 for (VAR_6 = 1;VAR_6 < 128;VAR_6++)
 {
  char VAR_10[VAR_1];

  FUNC_2(VAR_10, sizeof(VAR_10), VAR_6);

  VAR_7 = 0;

  for (VAR_8 = 0;VAR_8 < VAR_5.NumItem;VAR_8++)
  {
   if (FUNC_3(VAR_5.Items[VAR_8]->DeviceName, VAR_10) == 0)
   {
    VAR_7 = 1;
    break;
   }
  }

  if (VAR_7 == 0)
  {
   VAR_9 = 1;

   FUNC_4(VAR_3, VAR_4, VAR_10);
   break;
  }
 }

 if (VAR_9)
 {
  FUNC_1(&VAR_5);
 }

 return 1;
}
