
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ skey; scalar_t__ lastKey; scalar_t__ ekey; } ;
typedef scalar_t__ TSKEY ;
typedef TYPE_1__ SQuery ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;

__attribute__((used)) static void FUNC_3(SQuery *VAR_0, TSKEY VAR_1, TSKEY VAR_2, TSKEY VAR_3) {
  TSKEY VAR_4, VAR_5;

  TSKEY VAR_6 = (VAR_2 < VAR_3) ? VAR_2 : VAR_3;
  TSKEY VAR_7 = (VAR_2 < VAR_3) ? VAR_3 : VAR_2;

  FUNC_2(VAR_0, VAR_1, VAR_6, VAR_7, &VAR_4, &VAR_5);

  if (FUNC_0(VAR_0)) {
    VAR_0->skey = VAR_4;
    VAR_0->ekey = VAR_5;
    FUNC_1(VAR_0->skey <= VAR_0->ekey);
  } else {
    VAR_0->skey = VAR_5;
    VAR_0->ekey = VAR_4;
    FUNC_1(VAR_0->skey >= VAR_0->ekey);
  }

  VAR_0->lastKey = VAR_0->skey;
}
