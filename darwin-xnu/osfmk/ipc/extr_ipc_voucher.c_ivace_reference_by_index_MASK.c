
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef TYPE_1__* ivac_entry_t ;
typedef size_t iv_index_t ;
typedef TYPE_2__* ipc_voucher_attr_control_t ;
struct TYPE_8__ {size_t ivac_table_size; TYPE_1__* ivac_table; } ;
struct TYPE_7__ {int ivace_value; scalar_t__ ivace_refs; int ivace_persist; int ivace_free; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (size_t,int ,int *,TYPE_2__**) ;

__attribute__((used)) static void
FUNC_4(
 iv_index_t VAR_3,
 iv_index_t VAR_4)
{
 ipc_voucher_attr_control_t VAR_5;
 ivac_entry_t VAR_6;

 if (VAR_2 == VAR_4)
  return;

 FUNC_3(VAR_3, VAR_0, ((void*)0), &VAR_5);
 FUNC_0(VAR_1 != VAR_5);

 FUNC_1(VAR_5);
 FUNC_0(VAR_4 < VAR_5->ivac_table_size);
 VAR_6 = &VAR_5->ivac_table[VAR_4];

 FUNC_0(0xdeadc0dedeadc0de != VAR_6->ivace_value);
 FUNC_0(0 < VAR_6->ivace_refs);
 FUNC_0(!VAR_6->ivace_free);


 if (!VAR_6->ivace_persist) {
  VAR_6->ivace_refs++;
 }
 FUNC_2(VAR_5);
}
