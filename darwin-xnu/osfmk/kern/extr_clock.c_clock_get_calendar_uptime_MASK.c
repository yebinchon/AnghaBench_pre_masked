
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bintime {int sec; } ;
typedef int spl_t ;
typedef int clock_sec_t ;
struct TYPE_2__ {int offset; } ;


 int FUNC_0 (struct bintime*,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct bintime FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;

void
FUNC_7(clock_sec_t *VAR_1)
{
 uint64_t VAR_2;
 spl_t VAR_3;
 struct bintime VAR_4;

 VAR_3 = FUNC_5();
 FUNC_1();

 VAR_2 = FUNC_4();

 VAR_4 = FUNC_3(VAR_2);
 FUNC_0(&VAR_4, &VAR_0.offset);

 *VAR_1 = VAR_4.sec;

 FUNC_2();
 FUNC_6(VAR_3);
}
