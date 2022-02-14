
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int tFilePage ;
struct TYPE_5__ {int hasUnprocessedRow; } ;
typedef int SSqlCmd ;
typedef TYPE_1__ SLocalReducer ;


 int FUNC_0 (int *,TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2(SSqlCmd* VAR_0, SLocalReducer *VAR_1, tFilePage *VAR_2) {
  if (VAR_1->hasUnprocessedRow) {
    VAR_1->hasUnprocessedRow = 0;
    FUNC_0(VAR_0, VAR_1, 1);
    FUNC_1(VAR_1, VAR_2);
  }
}
