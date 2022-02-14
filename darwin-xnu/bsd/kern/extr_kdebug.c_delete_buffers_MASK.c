
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_offset_t ;
struct kd_storage_buffers {int dummy; } ;
struct kd_bufinfo {int dummy; } ;
struct TYPE_6__ {scalar_t__ kdsb_size; scalar_t__ kdsb_addr; } ;
struct TYPE_4__ {int raw; } ;
struct TYPE_5__ {int kdebug_cpus; int kdebug_flags; int * kdebug_iops; TYPE_1__ kds_free_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 TYPE_2__ VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 unsigned int VAR_8 ;

__attribute__((used)) static void
FUNC_1(void)
{
 unsigned int VAR_9;

 if (VAR_3) {
  for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
   if (VAR_3[VAR_9].kdsb_addr) {
    FUNC_0(VAR_7, (vm_offset_t)VAR_3[VAR_9].kdsb_addr, (vm_size_t)VAR_3[VAR_9].kdsb_size);
   }
  }
  FUNC_0(VAR_7, (vm_offset_t)VAR_3, (vm_size_t)(VAR_8 * sizeof(struct kd_storage_buffers)));

  VAR_3 = ((void*)0);
  VAR_8 = 0;
 }
 if (VAR_6) {
  FUNC_0(VAR_7, (vm_offset_t)VAR_6, VAR_1);

  VAR_6 = ((void*)0);
 }
 VAR_4.kds_free_list.raw = VAR_2;

 if (VAR_5) {
  FUNC_0(VAR_7, (vm_offset_t)VAR_5, sizeof(struct kd_bufinfo) * VAR_4.kdebug_cpus);

  VAR_5 = ((void*)0);
 }
        VAR_4.kdebug_iops = ((void*)0);
 VAR_4.kdebug_cpus = 0;
 VAR_4.kdebug_flags &= ~VAR_0;
}
