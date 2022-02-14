
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int nType; } ;
struct TYPE_5__ {TYPE_3__ tag; int aOutputBuf; } ;
typedef TYPE_1__ SQLFunctionCtx ;


 int FUNC_0 (TYPE_1__*,int,int) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_0) {
  FUNC_0(VAR_0, 1, 1);
  FUNC_1(&VAR_0->tag, VAR_0->aOutputBuf, VAR_0->tag.nType);
}
