
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ data; } ;
typedef TYPE_2__ tFilePage ;
typedef size_t int32_t ;
struct TYPE_8__ {int* offset; int numOfRowsPerPage; TYPE_1__* pCtx; } ;
struct TYPE_6__ {size_t outputBytes; } ;
typedef TYPE_3__ SQueryRuntimeEnv ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static char *FUNC_1(SQueryRuntimeEnv *VAR_1, tFilePage *VAR_2, int32_t VAR_3, int32_t VAR_4) {

  FUNC_0(VAR_1->pCtx[VAR_4].outputBytes <= VAR_0);

  return (char *)VAR_2->data + VAR_1->offset[VAR_4] * VAR_1->numOfRowsPerPage +
         VAR_1->pCtx[VAR_4].outputBytes * VAR_3;
}
