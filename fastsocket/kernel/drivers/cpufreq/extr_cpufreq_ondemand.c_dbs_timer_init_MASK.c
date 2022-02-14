
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cpu_dbs_info_s {int work; int cpu; int sample_type; } ;
struct TYPE_2__ {int sampling_rate; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline void FUNC_3(struct cpu_dbs_info_s *VAR_5)
{

 int VAR_6 = FUNC_2(VAR_1.sampling_rate);
 VAR_6 -= VAR_3 % VAR_6;

 VAR_5->sample_type = VAR_0;
 FUNC_0(&VAR_5->work, VAR_2);
 FUNC_1(VAR_5->cpu, VAR_4, &VAR_5->work,
  VAR_6);
}
