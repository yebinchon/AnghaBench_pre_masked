
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int thread_continue_t ;
typedef int mach_msg_type_number_t ;
typedef scalar_t__ kern_return_t ;
typedef int host_t ;
typedef int host_info_t ;
struct TYPE_5__ {int max_cpus; } ;
typedef TYPE_1__ host_basic_info_data_t ;
struct TYPE_8__ {int id; int scratch_buf; int * current_chead; TYPE_3__* q; } ;
struct TYPE_7__ {int pgo_maxlaundry; } ;
struct TYPE_6__ {int vm_compressor_thread_count; int vm_pageout_internal_iothread; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*,int*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 TYPE_4__* VAR_9 ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,void*,int ,int *) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;

kern_return_t
FUNC_6(void)
{
 kern_return_t VAR_13;
 int VAR_14;
 host_basic_info_data_t VAR_15;

 FUNC_1 (VAR_7);

 mach_msg_type_number_t VAR_16 = VAR_4;

 FUNC_2((host_t)1, VAR_3, (host_info_t)&VAR_15, &VAR_16);

 FUNC_1(VAR_15.max_cpus > 0);




 if (VAR_15.max_cpus > 4)
         VAR_12.vm_compressor_thread_count = 2;
 else
         VAR_12.vm_compressor_thread_count = 1;

 FUNC_0("vmcomp_threads", &VAR_12.vm_compressor_thread_count,
      sizeof(VAR_12.vm_compressor_thread_count));

 if (VAR_12.vm_compressor_thread_count >= VAR_15.max_cpus)
  VAR_12.vm_compressor_thread_count = VAR_15.max_cpus - 1;
 if (VAR_12.vm_compressor_thread_count <= 0)
  VAR_12.vm_compressor_thread_count = 1;
 else if (VAR_12.vm_compressor_thread_count > VAR_6)
  VAR_12.vm_compressor_thread_count = VAR_6;

 VAR_11.pgo_maxlaundry = (VAR_12.vm_compressor_thread_count * 4) * VAR_8;

 FUNC_0("vmpgoi_maxlaundry", &VAR_11.pgo_maxlaundry, sizeof(VAR_11.pgo_maxlaundry));

 for (VAR_14 = 0; VAR_14 < VAR_12.vm_compressor_thread_count; VAR_14++) {
  VAR_9[VAR_14].id = VAR_14;
  VAR_9[VAR_14].q = &VAR_11;
  VAR_9[VAR_14].current_chead = ((void*)0);
  VAR_9[VAR_14].scratch_buf = FUNC_3(VAR_2);

  VAR_13 = FUNC_4((thread_continue_t)VAR_10, (void *)&VAR_9[VAR_14],
            VAR_0, &VAR_12.vm_pageout_internal_iothread);

  if (VAR_13 == VAR_5)
   FUNC_5(VAR_12.vm_pageout_internal_iothread);
  else
   break;
 }
 return VAR_13;
}
