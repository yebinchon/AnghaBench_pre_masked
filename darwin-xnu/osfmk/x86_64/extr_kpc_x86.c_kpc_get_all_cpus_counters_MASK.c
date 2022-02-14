
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct kpc_get_counters_remote {int nb_counters; int * buf; int buf_stride; int classes; } ;
struct TYPE_2__ {int cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,int ,struct kpc_get_counters_remote*) ;

int
FUNC_5(uint32_t VAR_4, int *VAR_5, uint64_t *VAR_6)
{
 int VAR_7 = 0;

 struct kpc_get_counters_remote VAR_8 = {
  .classes = VAR_4, .nb_counters = 0,
  .buf_stride = FUNC_2(VAR_4), .buf = VAR_6
 };

 FUNC_0(VAR_6);

 VAR_7 = FUNC_3(VAR_2);

 if (VAR_5)
  *VAR_5 = FUNC_1()->cpu_id;
 FUNC_4(VAR_1, VAR_0, VAR_3, &VAR_8);

 FUNC_3(VAR_7);

 return VAR_8.nb_counters;
}
