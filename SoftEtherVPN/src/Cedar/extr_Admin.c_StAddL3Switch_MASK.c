
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int UINT ;
struct TYPE_15__ {TYPE_1__* Server; } ;
struct TYPE_14__ {int L3SwList; } ;
struct TYPE_13__ {int Name; } ;
struct TYPE_12__ {TYPE_3__* Cedar; } ;
typedef TYPE_1__ SERVER ;
typedef TYPE_2__ RPC_L3SW ;
typedef int L3SW ;
typedef TYPE_3__ CEDAR ;
typedef TYPE_4__ ADMIN ;


 int FUNC_0 (TYPE_4__*,int *,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (TYPE_3__*,int ) ;
 int * FUNC_6 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int *) ;
 int VAR_5 ;
 int FUNC_10 (int ) ;

UINT FUNC_11(ADMIN *VAR_6, RPC_L3SW *VAR_7)
{
 SERVER *VAR_8 = VAR_6->Server;
 CEDAR *VAR_9 = VAR_8->Cedar;
 UINT VAR_10 = VAR_3;
 L3SW *VAR_11;

 VAR_4;

 if (FUNC_3(VAR_7->Name))
 {
  return VAR_1;
 }

 if (FUNC_4(VAR_7->Name) == 0)
 {
  return VAR_1;
 }

 VAR_5;


 VAR_11 = FUNC_6(VAR_9, VAR_7->Name);
 if (VAR_11 != ((void*)0))
 {

  FUNC_9(VAR_11);
  VAR_10 = VAR_2;
 }
 else
 {
  FUNC_8(VAR_9->L3SwList);
  {
   if (FUNC_7(VAR_9->L3SwList) >= FUNC_1(VAR_8, "i_max_l3_sw"))
   {

    VAR_11 = ((void*)0);
   }
   else
   {

    VAR_11 = FUNC_5(VAR_9, VAR_7->Name);

    if (VAR_11 != ((void*)0))
    {
     FUNC_0(VAR_6, ((void*)0), "LA_ADD_L3_SW", VAR_7->Name);

     FUNC_2(VAR_8);
    }
   }
  }
  FUNC_10(VAR_9->L3SwList);

  if (VAR_11 == ((void*)0))
  {

   VAR_10 = VAR_0;
  }
  else
  {

   FUNC_9(VAR_11);
  }
 }

 return VAR_10;
}
