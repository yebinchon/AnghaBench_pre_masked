
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(void)
{
 boolean_t VAR_4;
 uint64_t VAR_5;

 if (!(FUNC_1() & VAR_1))
  return;

 VAR_4 = FUNC_3(VAR_2);

 VAR_5 = FUNC_5(VAR_3);
 FUNC_0("CPU%d PAT: was 0x%016llx\n", FUNC_2(), VAR_5);


 if ((VAR_5 & ~(0x0FULL << 48)) != (0x01ULL << 48)) {
  FUNC_4(VAR_0);
 }
 FUNC_3(VAR_4);
}
