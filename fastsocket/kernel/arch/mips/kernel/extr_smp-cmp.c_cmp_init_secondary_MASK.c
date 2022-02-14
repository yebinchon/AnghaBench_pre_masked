
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cpuinfo_mips {int core; void* tc_id; void* vpe_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int FUNC_0 (int ,int) ;
 struct cpuinfo_mips VAR_9 ;
 int FUNC_1 () ;
 void* FUNC_2 () ;

__attribute__((used)) static void FUNC_3(void)
{
 struct cpuinfo_mips *VAR_10 = &VAR_9;


 FUNC_0(VAR_0, VAR_1 | VAR_2 | VAR_3 |
     VAR_4);



 VAR_10->core = (FUNC_1() >> 1) & 0xff;






}
