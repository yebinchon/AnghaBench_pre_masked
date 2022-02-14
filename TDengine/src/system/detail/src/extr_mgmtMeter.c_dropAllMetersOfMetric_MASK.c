
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* pHead; } ;
typedef TYPE_1__ STabObj ;
typedef int SDbObj ;
typedef int SAcctObj ;


 int FUNC_0 (int *,TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_1(SDbObj *VAR_0, STabObj * VAR_1, SAcctObj *VAR_2) {
  STabObj * VAR_3 = ((void*)0);

  while ((VAR_3 = VAR_1->pHead) != ((void*)0)) {
    (void)FUNC_0(VAR_0, VAR_3, VAR_2);
  }
}
