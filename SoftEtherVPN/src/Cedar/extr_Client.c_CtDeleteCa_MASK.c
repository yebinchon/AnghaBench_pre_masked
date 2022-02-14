
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int Cedar; } ;
struct TYPE_7__ {int Key; } ;
typedef TYPE_1__ RPC_CLIENT_DELETE_CA ;
typedef TYPE_2__ CLIENT ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

bool FUNC_3(CLIENT *VAR_1, RPC_CLIENT_DELETE_CA *VAR_2)
{
 bool VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return 0;
 }

 VAR_3 = FUNC_2(VAR_1->Cedar, VAR_2->Key);

 if (VAR_3 == 0)
 {
  FUNC_1(VAR_1, VAR_0);
 }

 FUNC_0(VAR_1);

 return VAR_3;
}
