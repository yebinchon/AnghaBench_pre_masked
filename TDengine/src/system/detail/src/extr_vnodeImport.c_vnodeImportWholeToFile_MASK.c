
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char* payload; int rows; int importedRows; int key; int lastKey; int * pObj; } ;
typedef int SMeterObj ;
typedef TYPE_1__ SImportInfo ;


 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *,char*,int,char**,int ) ;
 int FUNC_2 (TYPE_1__*,char*,int) ;
 int FUNC_3 (TYPE_1__*) ;

int FUNC_4(SImportInfo *VAR_0, char *VAR_1, int VAR_2) {
  int VAR_3 = 0;
  SMeterObj *VAR_4 = VAR_0->pObj;

  VAR_3 = FUNC_0(VAR_0, 0);
  if (VAR_3 != 0) return VAR_3;

  if (VAR_0->key != VAR_0->lastKey) {
    VAR_0->payload = VAR_1;
    VAR_0->rows = FUNC_1(VAR_4, VAR_1, VAR_2, &VAR_0->payload, VAR_0->key);
    VAR_0->importedRows = VAR_0->rows;
    VAR_3 = FUNC_3(VAR_0);
  } else {
    VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
  }

  return VAR_3;
}
