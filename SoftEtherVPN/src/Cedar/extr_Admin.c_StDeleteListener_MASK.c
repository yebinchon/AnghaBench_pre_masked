
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int ServerListenerList; } ;
struct TYPE_9__ {TYPE_5__* Server; } ;
struct TYPE_8__ {int Port; } ;
typedef TYPE_1__ RPC_LISTENER ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (int ) ;

UINT FUNC_5(ADMIN *VAR_3, RPC_LISTENER *VAR_4)
{
 UINT VAR_5 = VAR_1;

 VAR_2;


 FUNC_2(VAR_3->Server->ServerListenerList);
 {
  if (FUNC_3(VAR_3->Server, VAR_4->Port) == 0)
  {
   VAR_5 = VAR_0;
  }
  else
  {
   FUNC_0(VAR_3, ((void*)0), "LA_DELETE_LISTENER", VAR_4->Port);

   FUNC_1(VAR_3->Server);
  }
 }
 FUNC_4(VAR_3->Server->ServerListenerList);

 return VAR_5;
}
