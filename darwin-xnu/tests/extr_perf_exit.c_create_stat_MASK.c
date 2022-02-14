
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ dt_stat_time_t ;
typedef int dt_stat_t ;


 int FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int ,char*,int) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static dt_stat_time_t
FUNC_3(int VAR_0, int VAR_1)
{
 dt_stat_time_t VAR_2 = FUNC_2("time");
 FUNC_0(VAR_2, "created time statistic");

 FUNC_1((dt_stat_t)VAR_2, "proc_threads", VAR_1);
 FUNC_1((dt_stat_t)VAR_2, "proc_wired_mem", VAR_0);;

 return VAR_2;
}
