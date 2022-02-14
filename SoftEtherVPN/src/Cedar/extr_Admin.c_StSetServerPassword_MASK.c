
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_9__ {int HashedPassword; } ;
struct TYPE_8__ {TYPE_5__* Server; } ;
struct TYPE_7__ {int HashedPassword; int PlainTextPassword; } ;
typedef TYPE_1__ RPC_SET_PASSWORD ;
typedef TYPE_2__ ADMIN ;


 int FUNC_0 (TYPE_2__*,int *,char*) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;

UINT FUNC_5(ADMIN *VAR_3, RPC_SET_PASSWORD *VAR_4)
{
 VAR_1;

 if (FUNC_4(VAR_4->HashedPassword, sizeof(VAR_4->HashedPassword)))
 {

  FUNC_2(VAR_4->HashedPassword, VAR_4->PlainTextPassword);
 }

 FUNC_1(VAR_3->Server->HashedPassword, VAR_4->HashedPassword, VAR_2);

 FUNC_0(VAR_3, ((void*)0), "LA_SET_SERVER_PASSWORD");

 FUNC_3(VAR_3->Server);

 return VAR_0;
}
