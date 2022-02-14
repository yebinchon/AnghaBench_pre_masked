
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ sqlite_int64 ;
typedef int sqlite3_file ;
struct TYPE_5__ {scalar_t__ iOffset; scalar_t__ pChunk; } ;
struct TYPE_6__ {scalar_t__ iOffset; scalar_t__ pChunk; } ;
struct TYPE_7__ {TYPE_1__ readpoint; TYPE_2__ endpoint; scalar_t__ nSize; } ;
typedef TYPE_3__ MemJournal ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_2(sqlite3_file *VAR_1, sqlite_int64 VAR_2){
  MemJournal *VAR_3 = (MemJournal *)VAR_1;
  if( FUNC_0(VAR_2==0) ){
    FUNC_1(VAR_3);
    VAR_3->nSize = 0;
    VAR_3->endpoint.pChunk = 0;
    VAR_3->endpoint.iOffset = 0;
    VAR_3->readpoint.pChunk = 0;
    VAR_3->readpoint.iOffset = 0;
  }
  return VAR_0;
}
