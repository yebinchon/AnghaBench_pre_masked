
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int t ;
typedef size_t UINT ;
struct TYPE_7__ {int NumItem; TYPE_1__** Items; } ;
struct TYPE_6__ {char* DeviceName; scalar_t__ Enabled; } ;
typedef TYPE_2__ RPC_CLIENT_ENUM_VLAN ;
typedef int CLIENT ;


 int FUNC_0 (TYPE_2__*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int) ;

char *FUNC_4(CLIENT *VAR_0)
{
 char *VAR_1 = ((void*)0);
 RPC_CLIENT_ENUM_VLAN VAR_2;

 if (VAR_0 == ((void*)0))
 {
  return ((void*)0);
 }

 FUNC_3(&VAR_2, sizeof(VAR_2));
 if (FUNC_2(VAR_0, &VAR_2) == 0)
 {
  return ((void*)0);
 }

 if (VAR_2.NumItem >= 1)
 {
  UINT VAR_3;
  char *VAR_4 = VAR_2.Items[0]->DeviceName;

  for (VAR_3 = 0;VAR_3 < VAR_2.NumItem;VAR_3++)
  {
   if (VAR_2.Items[VAR_3]->Enabled)
   {
    VAR_4 = VAR_2.Items[VAR_3]->DeviceName;
   }
  }

  VAR_1 = FUNC_1(VAR_4);
 }

 FUNC_0(&VAR_2);

 return VAR_1;
}
