
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

void FUNC_5(int VAR_4)
{
 if (!VAR_2)
 {
  FUNC_1(VAR_3, "FATAL ERROR, rdtsc() failed while enabled\n");
  FUNC_0(0);
 }
 if (FUNC_3(VAR_0, VAR_1) < 0)
 {
  FUNC_2("prctl");
  FUNC_0(0);
 }
 VAR_2 = 0;

 FUNC_4();
}
