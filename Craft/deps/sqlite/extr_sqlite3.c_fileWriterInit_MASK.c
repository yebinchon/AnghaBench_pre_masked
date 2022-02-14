
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
typedef int sqlite3_file ;
struct TYPE_9__ {TYPE_1__* aDb; } ;
typedef TYPE_2__ sqlite3 ;
typedef int i64 ;
struct TYPE_10__ {int iBufEnd; int iBufStart; int iWriteOff; int nBuffer; int * pFile; int eFWErr; int * aBuffer; } ;
struct TYPE_8__ {int pBt; } ;
typedef TYPE_3__ FileWriter ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_3(
  sqlite3 *VAR_1,
  sqlite3_file *VAR_2,
  FileWriter *VAR_3,
  i64 VAR_4
){
  int VAR_5 = FUNC_1(VAR_1->aDb[0].pBt);

  FUNC_0(VAR_3, 0, sizeof(FileWriter));
  VAR_3->aBuffer = (u8 *)FUNC_2(VAR_1, VAR_5);
  if( !VAR_3->aBuffer ){
    VAR_3->eFWErr = VAR_0;
  }else{
    VAR_3->iBufEnd = VAR_3->iBufStart = (VAR_4 % VAR_5);
    VAR_3->iWriteOff = VAR_4 - VAR_3->iBufStart;
    VAR_3->nBuffer = VAR_5;
    VAR_3->pFile = VAR_2;
  }
}
