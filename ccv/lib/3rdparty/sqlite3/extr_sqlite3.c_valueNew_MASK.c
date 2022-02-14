
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u8 ;
struct ValueNewStat4Ctx {int iVal; TYPE_2__** ppRec; int pParse; TYPE_4__* pIdx; } ;
struct TYPE_10__ {int * db; int flags; } ;
typedef TYPE_1__ sqlite3_value ;
typedef int sqlite3 ;
struct TYPE_11__ {int nField; TYPE_1__* aMem; TYPE_7__* pKeyInfo; } ;
typedef TYPE_2__ UnpackedRecord ;
struct TYPE_13__ {int nAllField; scalar_t__ enc; } ;
struct TYPE_12__ {int nColumn; } ;
typedef TYPE_1__ Mem ;
typedef TYPE_4__ Index ;


 scalar_t__ FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ValueNewStat4Ctx*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_5 (int *,int) ;
 TYPE_7__* FUNC_6 (int ,TYPE_4__*) ;
 TYPE_1__* FUNC_7 (int *) ;

__attribute__((used)) static sqlite3_value *FUNC_8(sqlite3 *VAR_1, struct ValueNewStat4Ctx *VAR_2){
  FUNC_2(VAR_2);

  return FUNC_7(VAR_1);
}
