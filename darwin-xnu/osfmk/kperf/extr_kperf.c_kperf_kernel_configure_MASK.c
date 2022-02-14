
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int,scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 () ;
 int FUNC_13 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_14 (char const*,char**,int ) ;

void
FUNC_15(const char *VAR_1)
{
 int VAR_2 = 0;
 char *VAR_3;
 bool VAR_4 = 0;

 FUNC_0(VAR_1 != ((void*)0));

 FUNC_12();

 FUNC_11(VAR_0);

 if (VAR_1[0] == 'p') {
  VAR_4 = 1;
  VAR_1++;
 }

 do {
  uint32_t VAR_5;
  uint64_t VAR_6;
  uint64_t VAR_7;

  VAR_2 += 1;
  FUNC_1(VAR_2);
  FUNC_6(VAR_2);

  VAR_5 = (uint32_t)FUNC_14(VAR_1, &VAR_3, 0);
  if (VAR_1 == VAR_3) {
   FUNC_9("kperf: unable to parse '%s' as action sampler\n", VAR_1);
   goto out;
  }
  VAR_1 = VAR_3;

  FUNC_2(VAR_2, VAR_5);

  if (VAR_1[0] == '\0') {
   FUNC_9("kperf: missing timer period in config\n");
   goto out;
  }
  VAR_1++;

  VAR_6 = FUNC_14(VAR_1, &VAR_3, 0);
  if (VAR_1 == VAR_3) {
   FUNC_9("kperf: unable to parse '%s' as timer period\n", VAR_1);
   goto out;
  }
  FUNC_13(VAR_6, &VAR_7);
  VAR_1 = VAR_3;

  FUNC_7(VAR_2 - 1, VAR_7);
  FUNC_5(VAR_2 - 1, VAR_2);

  if (VAR_4) {
   FUNC_8(VAR_2 - 1);
   FUNC_4(1);
   VAR_4 = 0;
  }
 } while (*(VAR_1++) == ',');

 int VAR_8 = FUNC_3();
 if (VAR_8) {
  FUNC_9("kperf: cannot enable sampling at boot: %d", VAR_8);
 }

out:
 FUNC_10();
}
