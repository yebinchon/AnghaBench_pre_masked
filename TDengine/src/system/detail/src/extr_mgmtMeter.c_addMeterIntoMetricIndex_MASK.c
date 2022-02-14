
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int member_0; } ;
typedef TYPE_1__ tSkipListKey ;
typedef size_t int16_t ;
struct TYPE_14__ {int bytes; int type; } ;
struct TYPE_13__ {int numOfColumns; int * pSkipList; scalar_t__ schema; } ;
typedef TYPE_2__ STabObj ;
typedef TYPE_3__ SSchema ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,TYPE_2__*,TYPE_1__*) ;
 int * FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static void FUNC_4(STabObj *VAR_1, STabObj *VAR_2) {
  const int16_t VAR_3 = 0;
  SSchema * VAR_4 = (SSchema *)(VAR_1->schema + VAR_1->numOfColumns * sizeof(SSchema));

  if (VAR_1->pSkipList == ((void*)0)) {
    VAR_1->pSkipList = FUNC_1(VAR_0, VAR_4[VAR_3].type,
                    VAR_4[VAR_3].bytes);
  }

  if (VAR_1->pSkipList) {
    tSkipListKey VAR_5 = {0};
    FUNC_0(VAR_1, VAR_2, &VAR_5);
    FUNC_3(VAR_1->pSkipList, VAR_2, &VAR_5, 1);

    FUNC_2(&VAR_5);
  }
}
