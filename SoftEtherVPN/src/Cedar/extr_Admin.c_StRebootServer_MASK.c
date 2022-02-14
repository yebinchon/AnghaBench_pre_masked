
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_11__ {TYPE_2__* Server; } ;
struct TYPE_10__ {int IntValue; } ;
struct TYPE_9__ {TYPE_1__* Cedar; } ;
struct TYPE_8__ {int Bridge; } ;
typedef TYPE_3__ RPC_TEST ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ) ;

UINT FUNC_2(ADMIN *VAR_2, RPC_TEST *VAR_3)
{
 VAR_1;

 FUNC_0(VAR_2, ((void*)0), "LA_REBOOT_SERVER");

 FUNC_1(VAR_2->Server->Cedar->Bridge, VAR_3->IntValue);

 return VAR_0;
}
