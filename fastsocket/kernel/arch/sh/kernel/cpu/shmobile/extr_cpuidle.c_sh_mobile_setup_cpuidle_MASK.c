
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuidle_state {char* name; char* desc; int exit_latency; int target_residency; int power_usage; void* enter; int flags; } ;
struct cpuidle_device {int state_count; struct cpuidle_state* states; struct cpuidle_state* safe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct cpuidle_device VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cpuidle_device*) ;
 int FUNC_1 (int *) ;
 void* VAR_8 ;
 int FUNC_2 (char*,int ,char*) ;
 int FUNC_3 (char*,char*,int ) ;

void FUNC_4(void)
{
 struct cpuidle_device *VAR_9 = &VAR_6;
 struct cpuidle_state *VAR_10;
 int VAR_11;

 FUNC_1(&VAR_7);

 for (VAR_11 = 0; VAR_11 < VAR_5; VAR_11++) {
  VAR_9->states[VAR_11].name[0] = '\0';
  VAR_9->states[VAR_11].desc[0] = '\0';
 }

 VAR_11 = VAR_1;

 VAR_10 = &VAR_9->states[VAR_11++];
 FUNC_2(VAR_10->name, VAR_4, "C0");
 FUNC_3(VAR_10->desc, "SuperH Sleep Mode", VAR_0);
 VAR_10->exit_latency = 1;
 VAR_10->target_residency = 1 * 2;
 VAR_10->power_usage = 3;
 VAR_10->flags = 0;
 VAR_10->flags |= VAR_2;
 VAR_10->flags |= VAR_3;
 VAR_10->enter = VAR_8;

 VAR_9->safe_state = VAR_10;

 VAR_10 = &VAR_9->states[VAR_11++];
 FUNC_2(VAR_10->name, VAR_4, "C1");
 FUNC_3(VAR_10->desc, "SuperH Sleep Mode [SF]", VAR_0);
 VAR_10->exit_latency = 100;
 VAR_10->target_residency = 1 * 2;
 VAR_10->power_usage = 1;
 VAR_10->flags = 0;
 VAR_10->flags |= VAR_3;
 VAR_10->enter = VAR_8;

 VAR_10 = &VAR_9->states[VAR_11++];
 FUNC_2(VAR_10->name, VAR_4, "C2");
 FUNC_3(VAR_10->desc, "SuperH Mobile Standby Mode [SF]", VAR_0);
 VAR_10->exit_latency = 2300;
 VAR_10->target_residency = 1 * 2;
 VAR_10->power_usage = 1;
 VAR_10->flags = 0;
 VAR_10->flags |= VAR_3;
 VAR_10->enter = VAR_8;

 VAR_9->state_count = VAR_11;

 FUNC_0(VAR_9);
}
