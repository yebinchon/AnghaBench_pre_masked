
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_dbs_info_s {int enable; int work; int cpu; } ;
struct TYPE_2__ {int sampling_rate; } ;


 int FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cpu_dbs_info_s *VAR_4)
{

 int VAR_5 = FUNC_2(VAR_0.sampling_rate);
 VAR_5 -= VAR_2 % VAR_5;

 VAR_4->enable = 1;
 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_1(VAR_4->cpu, VAR_3, &VAR_4->work,
    VAR_5);
}
