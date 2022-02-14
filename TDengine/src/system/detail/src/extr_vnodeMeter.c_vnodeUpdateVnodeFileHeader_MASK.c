
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int numOfFiles; int fileId; int lastKeyOnFile; int version; int lastRemove; int lastCreate; } ;
typedef TYPE_1__ SVnodeObj ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ,int ,int ) ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(FILE *VAR_2, SVnodeObj *VAR_3) {
  FUNC_1(VAR_2, VAR_1 * 1 / 4, VAR_0);





  FUNC_0(VAR_2, "%ld %ld %ld ", VAR_3->lastCreate, VAR_3->lastRemove, VAR_3->version);
  FUNC_0(VAR_2, "%ld %d %d ", VAR_3->lastKeyOnFile, VAR_3->fileId, VAR_3->numOfFiles);

}
