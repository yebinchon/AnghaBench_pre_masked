
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t precision; int daysPerFile; } ;
struct TYPE_5__ {int fileId; int numOfFiles; int maxFiles; int vnode; TYPE_1__ cfg; } ;
typedef TYPE_2__ SVnodeObj ;


 int FUNC_0 (size_t) ;
 int* VAR_0 ;
 int FUNC_1 (int ,int) ;

void FUNC_2(SVnodeObj *VAR_1) {

  int VAR_2 = VAR_1->fileId - VAR_1->numOfFiles + 1;
  int VAR_3 = FUNC_0(VAR_1->cfg.precision)/VAR_1->cfg.daysPerFile/VAR_0[VAR_1->cfg.precision];
  while (VAR_2 <= VAR_3 - VAR_1->maxFiles) {
    FUNC_1(VAR_1->vnode, VAR_2);
    VAR_1->numOfFiles--;
    VAR_2++;
  }
}
