
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int sqlite3 ;
struct TYPE_5__ {scalar_t__* apCsr; int nCursor; int nMem; scalar_t__ pResultSet; int zErrMsg; TYPE_1__* aMem; int * db; } ;
typedef TYPE_2__ Vdbe ;
struct TYPE_4__ {scalar_t__ flags; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void FUNC_2(Vdbe *VAR_1){
  sqlite3 *VAR_2 = VAR_1->db;
  FUNC_1(VAR_2, VAR_1->zErrMsg);
  VAR_1->zErrMsg = 0;
  VAR_1->pResultSet = 0;
}
