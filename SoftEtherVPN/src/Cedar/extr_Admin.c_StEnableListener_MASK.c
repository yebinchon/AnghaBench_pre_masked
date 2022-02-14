
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {int ServerListenerList; } ;
struct TYPE_10__ {TYPE_5__* Server; } ;
struct TYPE_9__ {int Port; scalar_t__ Enable; } ;
typedef TYPE_1__ RPC_LISTENER ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_5__*,int ) ;
 int FUNC_4 (TYPE_5__*,int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

UINT FUNC_7(ADMIN *VAR_3, RPC_LISTENER *VAR_4)
{
 UINT VAR_5 = VAR_1;

 VAR_2;


 FUNC_2(VAR_3->Server->ServerListenerList);
 {
  if (VAR_4->Enable)
  {
   if (FUNC_4(VAR_3->Server, VAR_4->Port) == 0)
   {
    VAR_5 = VAR_0;
   }
   else
   {
    FUNC_0(VAR_3, ((void*)0), "LA_ENABLE_LISTENER", VAR_4->Port);
   }
  }
  else
  {
   if (FUNC_3(VAR_3->Server, VAR_4->Port) == 0)
   {
    VAR_5 = VAR_0;
   }
   else
   {
    FUNC_0(VAR_3, ((void*)0), "LA_DISABLE_LISTENER", VAR_4->Port);
   }
  }
 }
 FUNC_6(VAR_3->Server->ServerListenerList);

 FUNC_1(VAR_3->Server);

 FUNC_5(250);

 return VAR_5;
}
