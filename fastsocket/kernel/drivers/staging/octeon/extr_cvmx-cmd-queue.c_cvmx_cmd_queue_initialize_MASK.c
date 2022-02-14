
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int enb; } ;
union cvmx_fpa_ctl_status {TYPE_1__ s; int u64; } ;
typedef scalar_t__ cvmx_cmd_queue_result_t ;
typedef int cvmx_cmd_queue_id_t ;
struct TYPE_7__ {int base_ptr_div128; int max_depth; int fpa_pool; int pool_size_m1; } ;
typedef TYPE_2__ __cvmx_cmd_queue_state_t ;
struct TYPE_8__ {scalar_t__* ticket; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 () ;
 TYPE_4__* VAR_7 ;
 int FUNC_3 (char*,...) ;
 void* FUNC_4 (int) ;
 int FUNC_5 (void*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_2__*,int ,int) ;

cvmx_cmd_queue_result_t FUNC_8(cvmx_cmd_queue_id_t VAR_8,
        int VAR_9, int VAR_10,
        int VAR_11)
{
 __cvmx_cmd_queue_state_t *VAR_12;
 cvmx_cmd_queue_result_t VAR_13 = FUNC_2();
 if (VAR_13 != VAR_4)
  return VAR_13;

 VAR_12 = FUNC_1(VAR_8);
 if (VAR_12 == ((void*)0))
  return VAR_2;





 if (VAR_1) {
  if ((VAR_9 < 0) || (VAR_9 > 1 << 20))
   return VAR_2;
 } else if (VAR_9 != 0)
  return VAR_2;

 if ((VAR_10 < 0) || (VAR_10 > 7))
  return VAR_2;
 if ((VAR_11 < 128) || (VAR_11 > 65536))
  return VAR_2;


 if (VAR_12->base_ptr_div128) {
  if (VAR_9 != (int)VAR_12->max_depth) {
   FUNC_3("ERROR: cvmx_cmd_queue_initialize: "
    "Queue already initalized with different "
    "max_depth (%d).\n",
        (int)VAR_12->max_depth);
   return VAR_2;
  }
  if (VAR_10 != VAR_12->fpa_pool) {
   FUNC_3("ERROR: cvmx_cmd_queue_initialize: "
    "Queue already initalized with different "
    "FPA pool (%u).\n",
        VAR_12->fpa_pool);
   return VAR_2;
  }
  if ((VAR_11 >> 3) - 1 != VAR_12->pool_size_m1) {
   FUNC_3("ERROR: cvmx_cmd_queue_initialize: "
    "Queue already initalized with different "
    "FPA pool size (%u).\n",
        (VAR_12->pool_size_m1 + 1) << 3);
   return VAR_2;
  }
  VAR_6;
  return VAR_0;
 } else {
  union cvmx_fpa_ctl_status VAR_14;
  void *VAR_15;

  VAR_14.u64 = FUNC_6(VAR_5);
  if (!VAR_14.s.enb) {
   FUNC_3("ERROR: cvmx_cmd_queue_initialize: "
         "FPA is not enabled.\n");
   return VAR_3;
  }
  VAR_15 = FUNC_4(VAR_10);
  if (VAR_15 == ((void*)0)) {
   FUNC_3("ERROR: cvmx_cmd_queue_initialize: "
         "Unable to allocate initial buffer.\n");
   return VAR_3;
  }

  FUNC_7(VAR_12, 0, sizeof(*VAR_12));
  VAR_12->max_depth = VAR_9;
  VAR_12->fpa_pool = VAR_10;
  VAR_12->pool_size_m1 = (VAR_11 >> 3) - 1;
  VAR_12->base_ptr_div128 = FUNC_5(VAR_15) / 128;




  VAR_7->
      ticket[FUNC_0(VAR_8)] = 0;
  VAR_6;
  return VAR_4;
 }
}
