
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sclp_cpu_info {int combined; int configured; TYPE_1__* cpu; scalar_t__ has_cpu_type; } ;
typedef int cpumask_t ;
struct TYPE_2__ {scalar_t__ type; int address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;
 int FUNC_4 (struct sclp_cpu_info*) ;
 struct sclp_cpu_info* FUNC_5 (int,int ) ;
 int VAR_7 ;
 int FUNC_6 (struct sclp_cpu_info*) ;
 int * VAR_8 ;
 int * VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_7(cpumask_t VAR_11)
{
 struct sclp_cpu_info *VAR_12;
 int VAR_13, VAR_14, VAR_15;
 int VAR_16;

 VAR_14 = FUNC_2(&VAR_11);
 if (VAR_14 >= VAR_7)
  return 0;
 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_3);
 if (!VAR_12)
  return -VAR_2;
 VAR_16 = FUNC_6(VAR_12);
 if (VAR_16)
  goto out;
 for (VAR_15 = 0; VAR_15 < VAR_12->combined; VAR_15++) {
  if (VAR_12->has_cpu_type && VAR_12->cpu[VAR_15].type != VAR_10)
   continue;
  VAR_13 = VAR_12->cpu[VAR_15].address;
  if (FUNC_0(VAR_13))
   continue;
  VAR_5[VAR_14] = VAR_13;
  VAR_8[VAR_14] = VAR_4;
  FUNC_1(VAR_14, VAR_6);
  if (VAR_15 >= VAR_12->configured)
   VAR_9[VAR_14] = VAR_1;
  else
   VAR_9[VAR_14] = VAR_0;
  VAR_14 = FUNC_3(VAR_14, &VAR_11);
  if (VAR_14 >= VAR_7)
   break;
 }
out:
 FUNC_4(VAR_12);
 return VAR_16;
}
