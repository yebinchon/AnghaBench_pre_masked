
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef scalar_t__ i64 ;
struct TYPE_10__ {scalar_t__ aAlloc; scalar_t__ nAlloc; scalar_t__ aBuffer; scalar_t__ aMap; scalar_t__ iReadOff; scalar_t__ iEof; } ;
struct TYPE_9__ {scalar_t__ iEof; } ;
typedef TYPE_1__ SorterFile ;
typedef int SortSubtask ;
typedef TYPE_2__ PmaReader ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,scalar_t__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*,TYPE_1__*,scalar_t__) ;

__attribute__((used)) static int FUNC_4(
  SortSubtask *VAR_1,
  SorterFile *VAR_2,
  i64 VAR_3,
  PmaReader *VAR_4,
  i64 *VAR_5
){
  int VAR_6;

  FUNC_0( VAR_2->iEof>VAR_3 );
  FUNC_0( VAR_4->aAlloc==0 && VAR_4->nAlloc==0 );
  FUNC_0( VAR_4->aBuffer==0 );
  FUNC_0( VAR_4->aMap==0 );

  VAR_6 = FUNC_3(VAR_1, VAR_4, VAR_2, VAR_3);
  if( VAR_6==VAR_0 ){
    u64 VAR_7 = 0;
    VAR_6 = FUNC_1(VAR_4, &VAR_7);
    VAR_4->iEof = VAR_4->iReadOff + VAR_7;
    *VAR_5 += VAR_7;
  }

  if( VAR_6==VAR_0 ){
    VAR_6 = FUNC_2(VAR_4);
  }
  return VAR_6;
}
