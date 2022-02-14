
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int cpu_boot_arg ;
typedef int OpaqueDTEntryIterator ;
typedef int DTEntry ;


 int FUNC_0 (int ,char*,void**,unsigned int*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,char*,int *) ;
 scalar_t__ FUNC_4 (char*,scalar_t__*,int) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_6 (char*,...) ;
 scalar_t__ FUNC_7 (char*,char*,unsigned int) ;

void
FUNC_8(void)
{
 DTEntry VAR_2, VAR_3;
 OpaqueDTEntryIterator VAR_4;
 uint32_t VAR_5;
 int VAR_6;

 VAR_6 = FUNC_3(((void*)0), "/cpus", &VAR_2);
 FUNC_5(VAR_6 == VAR_1);

 VAR_6 = FUNC_1(VAR_2, &VAR_4);
 FUNC_5(VAR_6 == VAR_1);

 while (VAR_1 == FUNC_2(&VAR_4, &VAR_3)) {
  ++VAR_0;
 }

 VAR_5 = VAR_0;
 if (FUNC_4("cpus", &VAR_5, sizeof(VAR_5)) &&
     (VAR_0 > VAR_5))
  VAR_0 = VAR_5;

 if (VAR_0 == 0)
  FUNC_6("No cpus found!");
}
