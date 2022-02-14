
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ) ;

int
FUNC_3()
{
 if (VAR_2 == 0) {
  return 0;
 }

 uint64_t VAR_4 = VAR_3;
 int VAR_5 = 5;
 int VAR_6 = 15;
 int VAR_7 = 300000;

 while (VAR_5 > 0) {
  FUNC_1("bsd_list_tests:INFO waiting for %d usecs\n", VAR_7);
  FUNC_1("bsd_list_tests: prev: %llu current: %llu\n", VAR_4, VAR_3);

  FUNC_0(VAR_7);
  VAR_6 -= 1;

  if (VAR_6 <= 0) {
   FUNC_1("bsd_list_tests: WARNING: Waiting beyond normal time for stabilizing kext loading\n");
   break;
  }

  if (VAR_4 == VAR_3) {
   VAR_5 -= 1;
   FUNC_1("bsd_list_tests: INFO: no new kexts loaded. remaining checks: %d\n", VAR_5);
  }

  VAR_4 = VAR_3;
 }

 return FUNC_2(VAR_0, VAR_1);
}
