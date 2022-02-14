
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ key; scalar_t__ lastKey; int importedRows; scalar_t__ firstKey; TYPE_1__* pObj; } ;
struct TYPE_9__ {scalar_t__ lastKeyOnFile; int meterId; int sid; int vnode; } ;
typedef TYPE_1__ SMeterObj ;
typedef TYPE_2__ SImportInfo ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int,char**,scalar_t__) ;
 int FUNC_3 (TYPE_2__*,char*,int) ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 int FUNC_5 (TYPE_2__*,char*,int) ;

int FUNC_6(SImportInfo *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  SMeterObj *VAR_4 = VAR_0->pObj;

  VAR_3 = FUNC_1(VAR_0, 0);
  if (VAR_3 != 0) return VAR_3;

  if (VAR_0->key != VAR_0->lastKey) {
    char *VAR_5;
    if ( VAR_0->key < VAR_4->lastKeyOnFile ) VAR_0->key = VAR_4->lastKeyOnFile;
    VAR_2 = FUNC_2(VAR_4, VAR_1, VAR_2, &VAR_5, VAR_0->key);
    VAR_0->importedRows = VAR_2;
    VAR_3 = FUNC_5(VAR_0, VAR_5, VAR_2);
  } else {
    if (VAR_0->firstKey > VAR_4->lastKeyOnFile) {
      VAR_3 = FUNC_3(VAR_0, VAR_1, VAR_2);
    } else if (VAR_0->firstKey < VAR_4->lastKeyOnFile) {
      VAR_3 = FUNC_4(VAR_0, VAR_1, VAR_2);
    } else {
      FUNC_0("vid:%d sid:%d id:%s, data is already there", VAR_4->vnode, VAR_4->sid, VAR_4->meterId);
    }
  }

  return VAR_3;
}
