
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tableIndex; int columnIndex; } ;
struct TYPE_6__ {TYPE_1__ colIndex; } ;
typedef TYPE_2__ SColumnBase ;


 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static void FUNC_1(SColumnBase* VAR_0) {
  FUNC_0(VAR_0, 0, sizeof(SColumnBase));

  VAR_0->colIndex.tableIndex = -2;
  VAR_0->colIndex.columnIndex = -2;
}
