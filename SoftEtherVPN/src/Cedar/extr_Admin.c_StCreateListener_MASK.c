
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_10__ {int ServerListenerList; int * Cedar; } ;
struct TYPE_9__ {TYPE_5__* Server; } ;
struct TYPE_8__ {int Port; int Enable; } ;
typedef TYPE_1__ RPC_LISTENER ;
typedef int CEDAR ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (TYPE_5__*,int,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;

UINT FUNC_6(ADMIN *VAR_4, RPC_LISTENER *VAR_5)
{
 UINT VAR_6 = VAR_2;
 CEDAR *VAR_7 = VAR_4->Server->Cedar;

 if (VAR_5->Port == 0 || VAR_5->Port > 65535)
 {
  return VAR_0;
 }

 VAR_3;

 FUNC_2(VAR_4->Server->ServerListenerList);
 {
  if (FUNC_3(VAR_4->Server, VAR_5->Port, VAR_5->Enable) == 0)
  {
   VAR_6 = VAR_1;
  }
  else
  {
   FUNC_0(VAR_4, ((void*)0), "LA_CREATE_LISTENER", VAR_5->Port);

   FUNC_1(VAR_4->Server);
  }
 }
 FUNC_5(VAR_4->Server->ServerListenerList);

 FUNC_4(250);

 return VAR_6;
}
