
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char* payload; int rows; int importedRows; int key; int firstKey; TYPE_1__* pObj; } ;
struct TYPE_7__ {int meterId; int sid; int vnode; } ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SImportInfo ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_1__*,char*,int,int ) ;
 int FUNC_3 (TYPE_2__*) ;

int FUNC_4(SImportInfo *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  SMeterObj *VAR_4 = VAR_0->pObj;

  VAR_3 = FUNC_1(VAR_0, 1);
  if (VAR_3 != 0) return VAR_3;

  if (VAR_0->key != VAR_0->firstKey) {
    VAR_0->payload = VAR_1;
    VAR_0->rows = FUNC_2(VAR_4, VAR_1, VAR_2, VAR_0->key);
    VAR_0->importedRows = VAR_0->rows;
    VAR_3 = FUNC_3(VAR_0);
  } else {
    FUNC_0("vid:%d sid:%d id:%s, data is already imported to file", VAR_4->vnode, VAR_4->sid, VAR_4->meterId);
  }

  return VAR_3;
}
