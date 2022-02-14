
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_4__ {scalar_t__ state; int stopped; } ;
struct TYPE_5__ {TYPE_1__ lcpu; } ;
typedef TYPE_2__ cpu_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int VAR_3 ;

void
FUNC_7(
 int VAR_4)
{
     cpu_data_t *VAR_5 = FUNC_0(VAR_4);
 boolean_t VAR_6;
 uint64_t VAR_7;







 VAR_6 = FUNC_2(VAR_0);
 FUNC_3(&VAR_3);

 VAR_7 = FUNC_5() + (10ULL * 1000 * 1000 * 1000);
 while ((VAR_5->lcpu.state != VAR_1)
        && (VAR_5->lcpu.state != VAR_2)
        && !VAR_5->lcpu.stopped) {
     FUNC_6(&VAR_3);
     FUNC_2(VAR_6);
     FUNC_1();
     if (FUNC_5() > VAR_7)
  FUNC_4("cpu_exit_wait(%d) timeout", VAR_4);
     FUNC_2(VAR_0);
     FUNC_3(&VAR_3);
 }
 FUNC_6(&VAR_3);
 FUNC_2(VAR_6);
}
