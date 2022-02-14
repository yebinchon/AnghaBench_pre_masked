
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int wchar_t ;
typedef int tmp ;
typedef size_t UINT ;
struct TYPE_6__ {size_t NumItem; TYPE_1__** Items; } ;
struct TYPE_5__ {int AccountName; } ;
typedef TYPE_2__ RPC_CLIENT_ENUM_ACCOUNT ;
typedef int REMOTE_CLIENT ;


 scalar_t__ FUNC_0 (int *,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int *,int,int *) ;
 int FUNC_4 (int *) ;

bool FUNC_5(REMOTE_CLIENT *VAR_2, wchar_t *VAR_3)
{
 UINT VAR_4;
 RPC_CLIENT_ENUM_ACCOUNT VAR_5;
 wchar_t VAR_6[VAR_1];
 bool VAR_7 = 0;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return 0;
 }

 if (FUNC_0(VAR_2, &VAR_5) != VAR_0)
 {
  return 0;
 }

 FUNC_3(VAR_6, sizeof(VAR_6), VAR_3);
 FUNC_4(VAR_6);

 for (VAR_4 = 0;VAR_4 < VAR_5.NumItem;VAR_4++)
 {
  if (FUNC_2(VAR_5.Items[VAR_4]->AccountName, VAR_6) == 0)
  {
   VAR_7 = 1;
   break;
  }
 }

 FUNC_1(&VAR_5);

 return VAR_7;
}
