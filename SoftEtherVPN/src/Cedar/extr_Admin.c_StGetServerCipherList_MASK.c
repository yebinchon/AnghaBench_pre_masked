
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_16__ {TYPE_2__* Server; } ;
struct TYPE_15__ {int lock; } ;
struct TYPE_14__ {int String; } ;
struct TYPE_13__ {TYPE_4__* Cedar; } ;
struct TYPE_12__ {size_t NumTokens; char** Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef TYPE_2__ SERVER ;
typedef TYPE_3__ RPC_STR ;
typedef TYPE_4__ CEDAR ;
typedef TYPE_5__ ADMIN ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (int ,size_t) ;
 int FUNC_6 (int ,size_t,char*) ;
 int FUNC_7 (int ,size_t,char*) ;
 size_t FUNC_8 (char*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_3__*,int) ;

UINT FUNC_11(ADMIN *VAR_1, RPC_STR *VAR_2)
{
 SERVER *VAR_3 = VAR_1->Server;
 CEDAR *VAR_4 = VAR_3->Cedar;

 FUNC_0(VAR_2);
 FUNC_10(VAR_2, sizeof(RPC_STR));

 FUNC_3(VAR_4->lock);
 {
  UINT VAR_5;
  TOKEN_LIST *VAR_6 = FUNC_2();
  if (VAR_6->NumTokens > 0)
  {
   UINT VAR_7 = FUNC_8(VAR_6->Token[0]);
   VAR_2->String = FUNC_4(VAR_7);
   FUNC_7(VAR_2->String, VAR_7, VAR_6->Token[0]);
   VAR_5 = 1;

   for (; VAR_5 < VAR_6->NumTokens; VAR_5++)
   {

    VAR_7 += FUNC_8(VAR_6->Token[VAR_5]);
    VAR_2->String = FUNC_5(VAR_2->String, VAR_7);
    FUNC_6(VAR_2->String, VAR_7, ";");
    FUNC_6(VAR_2->String, VAR_7, VAR_6->Token[VAR_5]);
   }
  }

  FUNC_1(VAR_6);
 }
 FUNC_9(VAR_4->lock);

 return VAR_0;
}
