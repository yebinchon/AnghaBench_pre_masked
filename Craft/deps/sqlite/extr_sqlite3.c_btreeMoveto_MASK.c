
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ i64 ;
typedef int aSpace ;
typedef int UnpackedRecord ;
struct TYPE_7__ {int db; } ;
struct TYPE_6__ {TYPE_2__* pKeyInfo; } ;
typedef TYPE_1__ BtCursor ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int *,scalar_t__,int,int*) ;
 int FUNC_2 (int ,char*) ;
 int * FUNC_3 (TYPE_2__*,char*,int,char**) ;
 int FUNC_4 (TYPE_2__*,int,void const*,int *) ;

__attribute__((used)) static int FUNC_5(
  BtCursor *VAR_1,
  const void *VAR_2,
  i64 VAR_3,
  int VAR_4,
  int *VAR_5
){
  int VAR_6;
  UnpackedRecord *VAR_7;
  char VAR_8[150];
  char *VAR_9 = 0;

  if( VAR_2 ){
    FUNC_0( VAR_3==(i64)(int)VAR_3 );
    VAR_7 = FUNC_3(
        VAR_1->pKeyInfo, VAR_8, sizeof(VAR_8), &VAR_9
    );
    if( VAR_7==0 ) return VAR_0;
    FUNC_4(VAR_1->pKeyInfo, (int)VAR_3, VAR_2, VAR_7);
  }else{
    VAR_7 = 0;
  }
  VAR_6 = FUNC_1(VAR_1, VAR_7, VAR_3, VAR_4, VAR_5);
  if( VAR_9 ){
    FUNC_2(VAR_1->pKeyInfo->db, VAR_9);
  }
  return VAR_6;
}
