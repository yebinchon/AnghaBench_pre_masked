
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wf_sensor {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wf_sensor*,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_1(struct wf_sensor *VAR_10)
{
 int VAR_11 = 1;

 if (VAR_0)
  return;

 VAR_11 = FUNC_0(VAR_10, "cpu-temp",
        &VAR_3) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "cpu-current",
        &VAR_1) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "cpu-voltage",
        &VAR_4) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "cpu-power",
        &VAR_2) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "hard-drive-temp",
        &VAR_6) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "optical-drive-temp",
        &VAR_9) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "incoming-air-temp",
        &VAR_7) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "north-bridge-temp",
        &VAR_8) && VAR_11;
 VAR_11 = FUNC_0(VAR_10, "gpu-temp",
        &VAR_5) && VAR_11;

 if (VAR_11)
  VAR_0 = 1;
}
