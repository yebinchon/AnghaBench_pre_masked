
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_8__ {int UnixVLanList; } ;
struct TYPE_7__ {size_t NumTokens; int * Token; } ;
typedef TYPE_1__ TOKEN_LIST ;
typedef int FOLDER ;
typedef TYPE_2__ CLIENT ;


 TYPE_1__* FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void FUNC_6(CLIENT *VAR_0, FOLDER *VAR_1)
{
 TOKEN_LIST *VAR_2;

 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
 {
  return;
 }

 VAR_2 = FUNC_0(VAR_1);

 FUNC_4(VAR_0->UnixVLanList);
 {
  UINT VAR_3;
  for (VAR_3 = 0;VAR_3 < VAR_2->NumTokens;VAR_3++)
  {
   FOLDER *VAR_4 = FUNC_1(VAR_1, VAR_2->Token[VAR_3]);
   FUNC_2(VAR_0, VAR_4);
  }
 }
 FUNC_5(VAR_0->UnixVLanList);

 FUNC_3(VAR_2);
}
