
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct resource {scalar_t__ start; } ;
struct device_node {int dummy; } ;
struct TYPE_5__ {int transition_latency; } ;
struct cpufreq_policy {int cpu; int cur; int cpus; TYPE_1__ cpuinfo; } ;
struct TYPE_6__ {int frequency; int index; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct cpufreq_policy*,TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (scalar_t__,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct device_node*,int ,struct resource*) ;
 struct device_node* FUNC_9 (int *,int *,char*) ;
 struct device_node* FUNC_10 (int,int *) ;
 int* FUNC_11 (struct device_node*,char*,int *) ;
 int FUNC_12 (struct device_node*) ;
 TYPE_2__* VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_13 (char*,...) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct cpufreq_policy *VAR_9)
{
 const u32 *VAR_10;
 u32 VAR_11;
 int VAR_12, VAR_13;
 struct resource VAR_14;
 struct device_node *VAR_15, *VAR_16;
 int VAR_17 = -VAR_2;

 VAR_15 = FUNC_10(VAR_9->cpu, ((void*)0));

 if (!VAR_15)
  goto out;

 VAR_16 = FUNC_9(((void*)0), ((void*)0), "1682m-sdc");
 if (!VAR_16)
  VAR_16 = FUNC_9(((void*)0), ((void*)0),
          "pasemi,pwrficient-sdc");
 if (!VAR_16)
  goto out;
 VAR_17 = FUNC_8(VAR_16, 0, &VAR_14);
 FUNC_12(VAR_16);
 if (VAR_17)
  goto out;
 VAR_7 = FUNC_6(VAR_14.start + VAR_3, 0x2000);
 if (!VAR_7) {
  VAR_17 = -VAR_1;
  goto out;
 }

 VAR_16 = FUNC_9(((void*)0), ((void*)0), "1682m-gizmo");
 if (!VAR_16)
  VAR_16 = FUNC_9(((void*)0), ((void*)0),
          "pasemi,pwrficient-gizmo");
 if (!VAR_16) {
  VAR_17 = -VAR_2;
  goto out_unmap_sdcasr;
 }
 VAR_17 = FUNC_8(VAR_16, 0, &VAR_14);
 FUNC_12(VAR_16);
 if (VAR_17)
  goto out_unmap_sdcasr;
 VAR_8 = FUNC_6(VAR_14.start, 0x1000);
 if (!VAR_8) {
  VAR_17 = -VAR_1;
  goto out_unmap_sdcasr;
 }

 FUNC_13("init cpufreq on CPU %d\n", VAR_9->cpu);

 VAR_10 = FUNC_11(VAR_15, "clock-frequency", ((void*)0));
 if (!VAR_10) {
  VAR_17 = -VAR_1;
  goto out_unmap_sdcpwr;
 }


 VAR_11 = *VAR_10 / 1000;

 FUNC_13("max clock-frequency is at %u kHz\n", VAR_11);
 FUNC_13("initializing frequency table\n");


 for (VAR_12=0; VAR_5[VAR_12].frequency!=VAR_0; VAR_12++) {
  VAR_5[VAR_12].frequency = FUNC_3(VAR_5[VAR_12].index) * 100000;
  FUNC_13("%d: %d\n", VAR_12, VAR_5[VAR_12].frequency);
 }

 VAR_9->cpuinfo.transition_latency = FUNC_5();

 VAR_13 = FUNC_4(VAR_9->cpu);
 FUNC_13("current astate is at %d\n",VAR_13);

 VAR_9->cur = VAR_5[VAR_13].frequency;
 FUNC_2(VAR_9->cpus, &VAR_4);

 VAR_6 = VAR_9->cur * 1000ul;

 FUNC_1(VAR_5, VAR_9->cpu);




 return FUNC_0(VAR_9, VAR_5);

out_unmap_sdcpwr:
 FUNC_7(VAR_8);

out_unmap_sdcasr:
 FUNC_7(VAR_7);
out:
 return VAR_17;
}
