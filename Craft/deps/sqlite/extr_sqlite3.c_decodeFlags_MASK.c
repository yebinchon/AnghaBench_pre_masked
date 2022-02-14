
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int max1bytePayload; int minLocal; int maxLocal; int minLeaf; int maxLeaf; int mutex; } ;
struct TYPE_4__ {int hdrOffset; int pgno; int leaf; int childPtrSize; int intKey; int hasData; int max1bytePayload; int minLocal; int maxLocal; TYPE_2__* pBt; } ;
typedef TYPE_1__ MemPage ;
typedef TYPE_2__ BtShared ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(MemPage *VAR_6, int VAR_7){
  BtShared *VAR_8;

  FUNC_0( VAR_6->hdrOffset==(VAR_6->pgno==1 ? 100 : 0) );
  FUNC_0( FUNC_1(VAR_6->pBt->mutex) );
  VAR_6->leaf = (u8)(VAR_7>>3); FUNC_0( VAR_1 == 1<<3 );
  VAR_7 &= ~VAR_1;
  VAR_6->childPtrSize = 4-4*VAR_6->leaf;
  VAR_8 = VAR_6->pBt;
  if( VAR_7==(VAR_2 | VAR_0) ){
    VAR_6->intKey = 1;
    VAR_6->hasData = VAR_6->leaf;
    VAR_6->maxLocal = VAR_8->maxLeaf;
    VAR_6->minLocal = VAR_8->minLeaf;
  }else if( VAR_7==VAR_3 ){
    VAR_6->intKey = 0;
    VAR_6->hasData = 0;
    VAR_6->maxLocal = VAR_8->maxLocal;
    VAR_6->minLocal = VAR_8->minLocal;
  }else{
    return VAR_4;
  }
  VAR_6->max1bytePayload = VAR_8->max1bytePayload;
  return VAR_5;
}
