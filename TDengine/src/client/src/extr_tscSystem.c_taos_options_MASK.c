
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int32_t ;
typedef int TSDB_OPTION ;


 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,char const*) ;
 int FUNC_4 (char*,int) ;

int FUNC_5(TSDB_OPTION VAR_0, const void *VAR_1, ...) {
  static int32_t VAR_2 = 0;

  for (int VAR_3 = 1; FUNC_1(&VAR_2, 0, 1) != 0; ++VAR_3) {
    if (VAR_3 % 1000 == 0) {
      FUNC_4("haven't acquire lock after spin %d times.", VAR_3);
      FUNC_2();
    }
  }

  int VAR_4 = FUNC_3(VAR_0, (const char*)VAR_1);

  FUNC_0(&VAR_2, 0);
  return VAR_4;
}
