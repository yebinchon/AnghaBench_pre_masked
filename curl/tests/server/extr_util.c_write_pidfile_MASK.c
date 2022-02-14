
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (int *,char*,long) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int ) ;

int FUNC_6(const char *VAR_1)
{
  FILE *VAR_2;
  long VAR_3;

  VAR_3 = (long)FUNC_3();
  VAR_2 = FUNC_1(VAR_1, "wb");
  if(!VAR_2) {
    FUNC_4("Couldn't write pid file: %s %s", VAR_1, FUNC_5(VAR_0));
    return 0;
  }
  FUNC_2(VAR_2, "%ld\n", VAR_3);
  FUNC_0(VAR_2);
  FUNC_4("Wrote pid %ld to %s", VAR_3, VAR_1);
  return 1;
}
