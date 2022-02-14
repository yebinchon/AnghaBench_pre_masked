
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_7__ {scalar_t__ aOutputBuf; } ;
struct TYPE_6__ {int hasResult; } ;
typedef TYPE_1__ SSumInfo ;
typedef TYPE_2__ SQLFunctionCtx ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(SQLFunctionCtx *VAR_1) {
  int32_t VAR_2 = FUNC_1(VAR_1);

  FUNC_0(VAR_1, VAR_2, 1);
  SSumInfo *VAR_3 = (SSumInfo *)VAR_1->aOutputBuf;

  if (VAR_2 > 0) {

    VAR_3->hasResult = VAR_0;
  }
}
