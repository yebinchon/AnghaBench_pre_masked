
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ mach_port_index_t ;
typedef TYPE_1__* ipc_space_t ;
typedef TYPE_2__* ipc_entry_t ;
typedef scalar_t__ ipc_entry_num_t ;
struct TYPE_6__ {void* ie_bits; scalar_t__ ie_index; void* ie_object; scalar_t__ ie_next; } ;
struct TYPE_5__ {int * is_entropy; int bool_gen; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int *,int ,int) ;

void
FUNC_1(
 ipc_space_t VAR_4,
 ipc_entry_t VAR_5,
 mach_port_index_t VAR_6,
 mach_port_index_t VAR_7)
{
 int VAR_8 = (VAR_6 == 0);
 mach_port_index_t VAR_9 = VAR_6;
 VAR_6++;
 VAR_7--;






 while (VAR_6 <= VAR_7) {
  ipc_entry_t VAR_10 = &VAR_5[VAR_9];
  int VAR_11;
   VAR_11 = FUNC_0(
      &VAR_4->bool_gen,
      &VAR_4->is_entropy[0],
      VAR_2,
      1);

  mach_port_index_t VAR_12;
  if (VAR_11) {
   VAR_12 = VAR_7;
   VAR_7--;
  } else {
   VAR_12 = VAR_6;
   VAR_6++;
  }





  VAR_10->ie_bits = VAR_0;
  VAR_10->ie_next = VAR_12;
  VAR_10->ie_object = VAR_1;
  VAR_10->ie_index = 0;
  VAR_9 = VAR_12;
 }
 VAR_5[VAR_9].ie_next = 0;
 VAR_5[VAR_9].ie_object = VAR_1;
 VAR_5[VAR_9].ie_index = 0;
 VAR_5[VAR_9].ie_bits = VAR_0;


 if (VAR_8) {
  VAR_5[0].ie_bits = 0;
 }
}
