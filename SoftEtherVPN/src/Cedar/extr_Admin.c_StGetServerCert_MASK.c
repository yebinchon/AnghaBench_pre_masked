
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {int ServerAdmin; TYPE_1__* Server; } ;
struct TYPE_11__ {int lock; int ServerK; int ServerX; } ;
struct TYPE_10__ {int Key; int Cert; } ;
struct TYPE_9__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_KEY_PAIR ;
typedef TYPE_3__ CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*,int) ;

UINT FUNC_6(ADMIN *VAR_1, RPC_KEY_PAIR *VAR_2)
{
 bool VAR_3;
 SERVER *VAR_4 = VAR_1->Server;
 CEDAR *VAR_5 = VAR_4->Cedar;
 bool VAR_6 = 0;

 VAR_3 = VAR_1->ServerAdmin;

 FUNC_2(VAR_2);
 FUNC_5(VAR_2, sizeof(RPC_KEY_PAIR));

 FUNC_3(VAR_5->lock);
 {

  VAR_2->Cert = FUNC_1(VAR_5->ServerX);
  if (VAR_3 && VAR_6 == 0)
  {
   VAR_2->Key = FUNC_0(VAR_5->ServerK);
  }
 }
 FUNC_4(VAR_5->lock);

 return VAR_0;
}
