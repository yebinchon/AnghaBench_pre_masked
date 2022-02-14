
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {int nType; } ;
struct TYPE_5__ {int aOutputBuf; int outputBytes; int order; TYPE_3__ tag; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (TYPE_3__*,int,int ) ;

__attribute__((used)) static void FUNC_3(SQLFunctionCtx *VAR_0, int32_t VAR_1) {
  FUNC_1(VAR_0, 1);
  FUNC_2(&VAR_0->tag, VAR_0->aOutputBuf, VAR_0->tag.nType);
  VAR_0->aOutputBuf += VAR_0->outputBytes * FUNC_0(VAR_0->order);
}
