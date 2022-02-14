
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int tmp ;
typedef int X ;
typedef scalar_t__ UINT ;
struct TYPE_6__ {int CaList; } ;
struct TYPE_5__ {TYPE_2__* Cedar; } ;
typedef int FOLDER ;
typedef TYPE_1__ CLIENT ;
typedef TYPE_2__ CEDAR ;


 int FUNC_0 (int *,char*) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;
 int FUNC_2 (char*,int,char*,scalar_t__) ;
 int * FUNC_3 (int ,scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int ) ;

void FUNC_7(CLIENT *VAR_1, FOLDER *VAR_2)
{
 CEDAR *VAR_3;

 if (VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
 {
  return;
 }

 VAR_3 = VAR_1->Cedar;

 FUNC_5(VAR_3->CaList);
 {
  UINT VAR_4;
  for (VAR_4 = 0;VAR_4 < FUNC_4(VAR_3->CaList);VAR_4++)
  {
   char VAR_5[VAR_0];
   X *VAR_6 = FUNC_3(VAR_3->CaList, VAR_4);
   FUNC_2(VAR_5, sizeof(VAR_5), "Certificate%u", VAR_4);
   FUNC_1(VAR_1, FUNC_0(VAR_2, VAR_5), VAR_6);
  }
 }
 FUNC_6(VAR_3->CaList);
}
