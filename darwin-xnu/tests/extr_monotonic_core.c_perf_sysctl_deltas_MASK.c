
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int dt_stat_t ;
typedef int deltas ;


 int FUNC_0 (int,char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,double) ;
 int FUNC_2 (char*,char*,char const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 (char const*,scalar_t__*,size_t*,int *,int ) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_3, const char *VAR_4)
{
 uint64_t VAR_5[2];
 size_t VAR_6;
 int VAR_7;

 VAR_1;
 FUNC_5();

 dt_stat_t VAR_8 = FUNC_2("instructions", "%s_instrs",
   VAR_4);
 dt_stat_t VAR_9 = FUNC_2("cycles", "%s_cycles", VAR_4);
 VAR_2;

 while (!FUNC_4(VAR_8) || !FUNC_4(VAR_9)) {
  VAR_6 = sizeof(VAR_5);
  VAR_7 = FUNC_6(VAR_3, VAR_5, &VAR_6, ((void*)0), 0);
  VAR_0;
  FUNC_0(VAR_7, "sysctlbyname(\"%s\", ...)", VAR_3);
  FUNC_1(VAR_8, (double)VAR_5[0]);
  FUNC_1(VAR_9, (double)VAR_5[1]);
 }

 FUNC_3(VAR_8);
 FUNC_3(VAR_9);
}
