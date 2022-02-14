
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct __vxge_hw_channel {int dummy; } ;
struct __vxge_hw_fifo {TYPE_1__* nofl_db; struct __vxge_hw_channel channel; } ;
struct TYPE_2__ {int txdl_ptr; int control_0; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 () ;
 int FUNC_4 (int,int *) ;

__attribute__((used)) static void FUNC_5(struct __vxge_hw_fifo *VAR_1,
 u64 VAR_2, u32 VAR_3, u32 VAR_4)
{
 struct __vxge_hw_channel *VAR_5;

 VAR_5 = &VAR_1->channel;

 FUNC_4(FUNC_2(VAR_0) |
  FUNC_1(VAR_3) |
  FUNC_0(VAR_4),
  &VAR_1->nofl_db->control_0);

 FUNC_3();

 FUNC_4(VAR_2, &VAR_1->nofl_db->txdl_ptr);

 FUNC_3();
}
