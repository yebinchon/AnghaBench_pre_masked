
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ nAggTimeInterval; } ;
typedef int TSKEY ;
typedef TYPE_1__ SQuery ;


 int FUNC_0 (TYPE_1__*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_1(SQuery *VAR_0, TSKEY VAR_1, TSKEY VAR_2, TSKEY VAR_3) {
  if (VAR_0->nAggTimeInterval == 0) {
    return;
  }

  FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
