
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ pData; } ;
typedef TYPE_2__ tSkipListNode ;
struct TYPE_17__ {int member_0; } ;
typedef TYPE_3__ tSkipListKey ;
typedef size_t int32_t ;
struct TYPE_15__ {scalar_t__ sid; scalar_t__ vgId; } ;
struct TYPE_18__ {int * pSkipList; TYPE_1__ gid; } ;
typedef TYPE_4__ STabObj ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_4__*,TYPE_4__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__**) ;
 int FUNC_3 (TYPE_3__*) ;
 size_t FUNC_4 (int *,TYPE_3__*,TYPE_2__***) ;
 int FUNC_5 (int *,TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(STabObj *VAR_0, STabObj *VAR_1) {
  if (VAR_0->pSkipList == ((void*)0)) {
    return;
  }

  tSkipListKey VAR_2 = {0};
  FUNC_1(VAR_0, VAR_1, &VAR_2);
  tSkipListNode **VAR_3 = ((void*)0);

  int32_t VAR_4 = FUNC_4(VAR_0->pSkipList, &VAR_2, &VAR_3);
  for (int32_t VAR_5 = 0; VAR_5 < VAR_4; ++VAR_5) {
    STabObj *VAR_6 = (STabObj *)VAR_3[VAR_5]->pData;
    if (VAR_6->gid.sid == VAR_1->gid.sid && VAR_6->gid.vgId == VAR_1->gid.vgId) {
      FUNC_0(VAR_1 == VAR_6);
      FUNC_5(VAR_0->pSkipList, VAR_3[VAR_5]);
    }
  }

  FUNC_3(&VAR_2);
  if (VAR_4 != 0) {
    FUNC_2(VAR_3);
  }
}
