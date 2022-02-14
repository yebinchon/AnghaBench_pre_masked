
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinfo_1_2_2_extension {int alt_capability; int* alt_adjustment; } ;
struct sysinfo_1_2_2 {int cpus_total; int cpus_configured; int cpus_standby; int cpus_reserved; int format; int capability; int* adjustment; int secondary_capability; scalar_t__ acc_offset; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*,...) ;
 int FUNC_1 (struct sysinfo_1_2_2*,int,int,int) ;

__attribute__((used)) static int FUNC_2(struct sysinfo_1_2_2 *VAR_1, char *VAR_2, int VAR_3)
{
 struct sysinfo_1_2_2_extension *VAR_4;
 int VAR_5;

 if (FUNC_1(VAR_1, 1, 2, 2) == -VAR_0)
  return VAR_3;
 VAR_4 = (struct sysinfo_1_2_2_extension *)
  ((unsigned long) VAR_1 + VAR_1->acc_offset);

 VAR_3 += FUNC_0(VAR_2 + VAR_3, "\n");
 VAR_3 += FUNC_0(VAR_2 + VAR_3, "CPUs Total:           %d\n",
         VAR_1->cpus_total);
 VAR_3 += FUNC_0(VAR_2 + VAR_3, "CPUs Configured:      %d\n",
         VAR_1->cpus_configured);
 VAR_3 += FUNC_0(VAR_2 + VAR_3, "CPUs Standby:         %d\n",
         VAR_1->cpus_standby);
 VAR_3 += FUNC_0(VAR_2 + VAR_3, "CPUs Reserved:        %d\n",
         VAR_1->cpus_reserved);

 if (VAR_1->format == 1) {
  VAR_3 += FUNC_0(VAR_2 + VAR_3, "Capability:           %u %u\n",
          VAR_1->capability, VAR_4->alt_capability);
  for (VAR_5 = 2; VAR_5 <= VAR_1->cpus_total; VAR_5++)
   VAR_3 += FUNC_0(VAR_2 + VAR_3,
           "Adjustment %02d-way:    %u %u\n",
           VAR_5, VAR_1->adjustment[VAR_5-2],
           VAR_4->alt_adjustment[VAR_5-2]);

 } else {
  VAR_3 += FUNC_0(VAR_2 + VAR_3, "Capability:           %u\n",
          VAR_1->capability);
  for (VAR_5 = 2; VAR_5 <= VAR_1->cpus_total; VAR_5++)
   VAR_3 += FUNC_0(VAR_2 + VAR_3,
           "Adjustment %02d-way:    %u\n",
           VAR_5, VAR_1->adjustment[VAR_5-2]);
 }

 if (VAR_1->secondary_capability != 0)
  VAR_3 += FUNC_0(VAR_2 + VAR_3, "Secondary Capability: %d\n",
          VAR_1->secondary_capability);
 return VAR_3;
}
