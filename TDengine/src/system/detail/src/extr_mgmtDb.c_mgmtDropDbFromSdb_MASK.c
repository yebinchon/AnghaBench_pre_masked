
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int name; TYPE_1__* pMetric; scalar_t__ pHead; } ;
struct TYPE_7__ {int meterId; struct TYPE_7__* next; } ;
typedef TYPE_1__ STabObj ;
typedef TYPE_2__ SDbObj ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,scalar_t__) ;
 int FUNC_3 (int ,TYPE_2__*) ;

void FUNC_4(SDbObj *VAR_1) {
  while (VAR_1->pHead) FUNC_2(VAR_1, VAR_1->pHead);

  STabObj *VAR_2 = VAR_1->pMetric;
  while (VAR_2) {
    STabObj *VAR_3 = VAR_2->next;
    FUNC_1(VAR_1, VAR_2->meterId, 0);
    VAR_2 = VAR_3;
  }

  FUNC_0("db:%s all meters drop finished", VAR_1->name);
  FUNC_3(VAR_0, VAR_1);
  FUNC_0("db:%s database drop finished", VAR_1->name);
}
