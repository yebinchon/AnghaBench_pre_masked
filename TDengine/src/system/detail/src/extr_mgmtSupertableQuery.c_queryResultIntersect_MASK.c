
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ const num; } ;
typedef TYPE_1__ tQueryResultset ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(tQueryResultset* VAR_0, tQueryResultset* VAR_1) {
  const int32_t VAR_2 = 20;


  if (VAR_0->num <= VAR_2 && VAR_1->num <= VAR_2) {
    FUNC_0(VAR_0, VAR_1);
  } else {
    FUNC_1(VAR_0, VAR_1);
  }
}
