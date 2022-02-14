
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_13__ {TYPE_1__* Server; } ;
struct TYPE_12__ {int lock; } ;
struct TYPE_11__ {int String; } ;
struct TYPE_10__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_STR ;
typedef TYPE_3__ CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

UINT FUNC_7(ADMIN *VAR_3, RPC_STR *VAR_4)
{
 SERVER *VAR_5 = VAR_3->Server;
 CEDAR *VAR_6 = VAR_5->Cedar;

 if (FUNC_2(VAR_4->String))
 {
  return VAR_0;
 }

 VAR_2;

 FUNC_5(VAR_4->String);

 FUNC_0(VAR_3, ((void*)0), "LA_SET_SERVER_CIPHER", VAR_4->String);

 FUNC_3(VAR_6->lock);
 {
  FUNC_4(VAR_6, VAR_4->String);
 }
 FUNC_6(VAR_6->lock);

 FUNC_1(VAR_5);

 return VAR_1;
}
