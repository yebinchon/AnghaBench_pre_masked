
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_12__ {TYPE_1__* Server; } ;
struct TYPE_11__ {int lock; int CipherList; } ;
struct TYPE_10__ {int String; } ;
struct TYPE_9__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_STR ;
typedef TYPE_3__ CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int) ;

UINT FUNC_5(ADMIN *VAR_1, RPC_STR *VAR_2)
{
 SERVER *VAR_3 = VAR_1->Server;
 CEDAR *VAR_4 = VAR_3->Cedar;

 FUNC_1(VAR_2);
 FUNC_4(VAR_2, sizeof(RPC_STR));

 FUNC_2(VAR_4->lock);
 {
  VAR_2->String = FUNC_0(VAR_4->CipherList);
 }
 FUNC_3(VAR_4->lock);

 return VAR_0;
}
