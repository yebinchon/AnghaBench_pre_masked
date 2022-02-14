
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sclp_cpu_info {int configured; int standby; int combined; int has_cpu_type; int cpu; } ;
struct sclp_cpu_entry {int dummy; } ;
struct read_cpu_info_sccb {int nr_configured; int nr_standby; int offset_configured; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct sclp_cpu_info*,int ,int) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_2(struct sclp_cpu_info *VAR_1,
          struct read_cpu_info_sccb *VAR_2)
{
 char *VAR_3 = (char *) VAR_2;

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->configured = VAR_2->nr_configured;
 VAR_1->standby = VAR_2->nr_standby;
 VAR_1->combined = VAR_2->nr_configured + VAR_2->nr_standby;
 VAR_1->has_cpu_type = VAR_0 & 0x1;
 FUNC_0(&VAR_1->cpu, VAR_3 + VAR_2->offset_configured,
        VAR_1->combined * sizeof(struct sclp_cpu_entry));
}
