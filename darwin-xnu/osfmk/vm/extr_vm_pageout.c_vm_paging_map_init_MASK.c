
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vm_map_offset_t ;
typedef TYPE_1__* vm_map_entry_t ;
typedef scalar_t__ kern_return_t ;
struct TYPE_5__ {int permanent; void* max_protection; void* protection; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*,scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,scalar_t__*,int,int ,int ,int ,int ,TYPE_1__**) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ VAR_9 ;

void
FUNC_7(void)
{
 kern_return_t VAR_10;
 vm_map_offset_t VAR_11;
 vm_map_entry_t VAR_12;

 FUNC_2(VAR_9 == 0);





 VAR_11 = 0;
 VAR_10 = FUNC_4(VAR_7,
          &VAR_11,
          VAR_5 * VAR_1,
          0,
          0,
          VAR_4,
          VAR_3,
          &VAR_12);
 if (VAR_10 != VAR_0) {
  FUNC_3("vm_paging_map_init: kernel_map full\n");
 }
 FUNC_0(VAR_12, VAR_8);
 FUNC_1(VAR_12, VAR_11);
 VAR_12->protection = VAR_6;
 VAR_12->max_protection = VAR_6;
 VAR_12->permanent = VAR_2;
 FUNC_6(VAR_8);
 FUNC_5(VAR_7);

 FUNC_2(VAR_9 == 0);
 VAR_9 = VAR_11;
}
