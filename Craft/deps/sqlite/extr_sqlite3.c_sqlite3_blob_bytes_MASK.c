
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int sqlite3_blob ;
struct TYPE_2__ {int nByte; scalar_t__ pStmt; } ;
typedef TYPE_1__ Incrblob ;



int FUNC_0(sqlite3_blob *VAR_0){
  Incrblob *VAR_1 = (Incrblob *)VAR_0;
  return (VAR_1 && VAR_1->pStmt) ? VAR_1->nByte : 0;
}
