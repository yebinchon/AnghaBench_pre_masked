
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_13__ {scalar_t__ numOfElems; } ;
struct TYPE_17__ {scalar_t__ rowIdx; TYPE_1__ filePage; } ;
struct TYPE_16__ {scalar_t__ numOfBuffer; } ;
struct TYPE_15__ {TYPE_2__* pNode; } ;
struct TYPE_14__ {scalar_t__ index; } ;
typedef TYPE_3__ SLoserTreeInfo ;
typedef TYPE_4__ SLocalReducer ;
typedef TYPE_5__ SLocalDataSource ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(SLocalReducer *VAR_0, SLocalDataSource *VAR_1,
                                SLoserTreeInfo *VAR_2) {




  bool VAR_3 = 1;
  if (VAR_1->filePage.numOfElems <= VAR_1->rowIdx) {
    FUNC_0(VAR_0, VAR_1, &VAR_3);
  }





  if (VAR_3) {
    int32_t VAR_4 = VAR_2->pNode[0].index + VAR_0->numOfBuffer;






    FUNC_2(VAR_2, VAR_4);






  }
}
