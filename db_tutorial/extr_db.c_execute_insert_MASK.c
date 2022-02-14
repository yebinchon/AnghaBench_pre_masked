
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_12__ {int pager; } ;
typedef TYPE_1__ Table ;
struct TYPE_15__ {scalar_t__ cell_num; int page_num; } ;
struct TYPE_14__ {scalar_t__ id; } ;
struct TYPE_13__ {TYPE_3__ row_to_insert; } ;
typedef TYPE_2__ Statement ;
typedef TYPE_3__ Row ;
typedef int ExecuteResult ;
typedef TYPE_4__ Cursor ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_4__*,scalar_t__,TYPE_3__*) ;
 scalar_t__* FUNC_3 (void*,scalar_t__) ;
 scalar_t__* FUNC_4 (void*) ;
 TYPE_4__* FUNC_5 (TYPE_1__*,scalar_t__) ;

ExecuteResult FUNC_6(Statement* VAR_2, Table* VAR_3) {
  Row* VAR_4 = &(VAR_2->row_to_insert);
  uint32_t VAR_5 = VAR_4->id;
  Cursor* VAR_6 = FUNC_5(VAR_3, VAR_5);

  void* VAR_7 = FUNC_1(VAR_3->pager, VAR_6->page_num);
  uint32_t VAR_8 = *FUNC_4(VAR_7);

  if (VAR_6->cell_num < VAR_8) {
    uint32_t VAR_9 = *FUNC_3(VAR_7, VAR_6->cell_num);
    if (VAR_9 == VAR_5) {
      return VAR_0;
    }
  }

  FUNC_2(VAR_6, VAR_4->id, VAR_4);

  FUNC_0(VAR_6);

  return VAR_1;
}
