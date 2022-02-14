
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sn_hwperf_op_info {int ret; TYPE_1__* a; } ;
typedef int cpumask_t ;
struct TYPE_5__ {int cpus_allowed; } ;
struct TYPE_4__ {int arg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int,int (*) (struct sn_hwperf_op_info*),struct sn_hwperf_op_info*,int) ;
 int FUNC_5 (struct sn_hwperf_op_info*) ;

__attribute__((used)) static int FUNC_6(struct sn_hwperf_op_info *VAR_7)
{
 u32 VAR_8;
 u32 VAR_9;
 int VAR_10 = 0;
 cpumask_t VAR_11;

 VAR_8 = (VAR_7->a->arg & VAR_2) >> 32;
 VAR_9 = VAR_7->a->arg & VAR_4;
 VAR_7->a->arg &= VAR_3;

 if (VAR_8 != VAR_1) {
  if (VAR_8 >= VAR_6 || !FUNC_0(VAR_8)) {
   VAR_10 = -VAR_0;
   goto out;
  }
 }

 if (VAR_8 == VAR_1 || VAR_8 == FUNC_2()) {

  FUNC_5(VAR_7);
 }
 else {
  if (VAR_9) {

   FUNC_4(VAR_8, FUNC_5,
    VAR_7, 1);
  }
  else {

   VAR_11 = VAR_5->cpus_allowed;
   FUNC_3(VAR_5, FUNC_1(VAR_8));
   FUNC_5(VAR_7);
   FUNC_3(VAR_5, VAR_11);
  }
 }
 VAR_10 = VAR_7->ret;

out:
 return VAR_10;
}
