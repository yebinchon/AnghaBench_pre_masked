
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_6__ {scalar_t__ numOfRes; } ;
struct TYPE_5__ {scalar_t__ order; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQLFunctionCtx ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static int32_t FUNC_1(SQLFunctionCtx *VAR_3, TSKEY VAR_4, TSKEY VAR_5, int32_t VAR_6, int32_t VAR_7) {
  if (VAR_3->order == VAR_2) {
    return VAR_1;
  }


  if (FUNC_0(VAR_3)->numOfRes <= 0) {
    return VAR_0;
  } else {
    return VAR_1;
  }
}
