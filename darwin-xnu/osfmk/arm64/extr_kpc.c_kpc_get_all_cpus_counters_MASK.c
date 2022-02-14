
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct kpc_get_counters_remote {int nb_counters; int buf_stride; int * buf; int classes; } ;
struct TYPE_2__ {int cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int ,int ,struct kpc_get_counters_remote*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;

int
FUNC_5(uint32_t VAR_4, int *VAR_5, uint64_t *VAR_6)
{
 FUNC_0(VAR_6 != ((void*)0));

 int VAR_7 = FUNC_4(VAR_0);


 if (VAR_5) {
  *VAR_5 = FUNC_2()->cpu_id;
 }

 struct kpc_get_counters_remote VAR_8 = {
  .classes = VAR_4,
  .nb_counters = 0,
  .buf = VAR_6,
  .buf_stride = FUNC_3(VAR_4)
 };

 FUNC_1(&VAR_3, VAR_1, VAR_2, &VAR_8);
 int VAR_9 = VAR_8.nb_counters;

 (void)FUNC_4(VAR_7);

 return VAR_9;
}
