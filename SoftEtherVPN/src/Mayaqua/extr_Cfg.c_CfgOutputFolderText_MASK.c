
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ UINT ;
struct TYPE_10__ {TYPE_1__* f; int * b; scalar_t__ depth; } ;
struct TYPE_9__ {int Items; int Folders; int Name; } ;
typedef TYPE_1__ FOLDER ;
typedef TYPE_2__ CFG_ENUM_PARAM ;
typedef int BUF ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,TYPE_2__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *,char*,int) ;
 int FUNC_6 (TYPE_2__*,int) ;

void FUNC_7(BUF *VAR_2, FOLDER *VAR_3, UINT VAR_4)
{
 CFG_ENUM_PARAM VAR_5;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
 {
  return;
 }


 FUNC_0(VAR_2, VAR_3->Name, VAR_4);
 VAR_4++;

 FUNC_6(&VAR_5, sizeof(CFG_ENUM_PARAM));
 VAR_5.depth = VAR_4;
 VAR_5.b = VAR_2;
 VAR_5.f = VAR_3;


 FUNC_3(VAR_3, VAR_1, &VAR_5);

 if (FUNC_4(VAR_3->Folders) != 0 && FUNC_4(VAR_3->Items) != 0)
 {
  FUNC_5(VAR_2, "\r\n", 2);
 }


 FUNC_2(VAR_3, VAR_0, &VAR_5);

 VAR_4--;
 FUNC_1(VAR_2, VAR_4);


}
