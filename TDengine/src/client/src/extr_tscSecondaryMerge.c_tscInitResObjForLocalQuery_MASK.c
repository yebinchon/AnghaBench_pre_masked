
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int numOfElems; int data; } ;
typedef TYPE_1__ tFilePage ;
typedef int int32_t ;
struct TYPE_10__ {TYPE_1__* pResultBuf; } ;
struct TYPE_8__ {int qhandle; TYPE_4__* pLocalReducer; int data; scalar_t__ rspType; scalar_t__ row; scalar_t__ numOfRows; } ;
struct TYPE_9__ {TYPE_2__ res; } ;
typedef TYPE_2__ SSqlRes ;
typedef TYPE_3__ SSqlObj ;
typedef TYPE_4__ SLocalReducer ;


 scalar_t__ FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(SSqlObj *VAR_0, int32_t VAR_1, int32_t VAR_2) {
  SSqlRes *VAR_3 = &VAR_0->res;
  if (VAR_3->pLocalReducer != ((void*)0)) {
    FUNC_1(VAR_0);
  }

  VAR_3->qhandle = 1;
  VAR_3->numOfRows = 0;
  VAR_3->row = 0;

  VAR_3->rspType = 0;
  VAR_3->pLocalReducer = (SLocalReducer *)FUNC_0(1, sizeof(SLocalReducer));





  size_t VAR_4 = VAR_1 * VAR_2 + sizeof(tFilePage) + 1;
  VAR_3->pLocalReducer->pResultBuf = (tFilePage *)FUNC_0(1, VAR_4);

  VAR_3->pLocalReducer->pResultBuf->numOfElems = VAR_1;
  VAR_3->data = VAR_3->pLocalReducer->pResultBuf->data;
}
