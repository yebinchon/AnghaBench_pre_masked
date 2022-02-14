
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void (* func ) () ;int suite; int name; } ;
typedef TYPE_1__ test_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 TYPE_1__* VAR_3 ;

void FUNC_4(void (*VAR_4)(void), const char* VAR_5, const char* VAR_6) {

  test_t VAR_7;

  if (VAR_2 == VAR_1) {
    FUNC_1("ERROR: Exceeded maximum test count of %i!\n",
      VAR_1); FUNC_0();
  }

  if (FUNC_3(VAR_5) >= VAR_0) {
    FUNC_1("ERROR: Test name '%s' too long (Maximum is %i characters)\n",
      VAR_5, VAR_0); FUNC_0();
  }

  if (FUNC_3(VAR_6) >= VAR_0) {
    FUNC_1("ERROR: Test suite '%s' too long (Maximum is %i characters)\n",
      VAR_6, VAR_0); FUNC_0();
  }

  VAR_7.func = VAR_4;
  FUNC_2(VAR_7.name, VAR_5);
  FUNC_2(VAR_7.suite, VAR_6);

  VAR_3[VAR_2] = VAR_7;
  VAR_2++;
}
