
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bintime {int frac; int sec; } ;
typedef int spl_t ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;
struct TYPE_2__ {int tick_scale_x; int bintime; } ;


 int FUNC_0 (struct bintime*,int *,int *) ;
 int FUNC_1 (struct bintime*,int *) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 struct bintime FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 int VAR_1 ;

void
FUNC_9(
 clock_sec_t *VAR_2,
 clock_usec_t *VAR_3,
 uint64_t *VAR_4)
{
 uint64_t VAR_5;
 spl_t VAR_6;
 struct bintime VAR_7;

 VAR_6 = FUNC_7();
 FUNC_3();

 VAR_5 = FUNC_6();
 VAR_7 = FUNC_5(VAR_5);
 FUNC_1(&VAR_7, &VAR_0.bintime);
 FUNC_0(&VAR_7, VAR_2, VAR_3);

 FUNC_2(VAR_5, VAR_7.sec, VAR_7.frac, VAR_0.tick_scale_x, VAR_1);

 FUNC_4();
 FUNC_8(VAR_6);

 if (VAR_4) {
  *VAR_4 = VAR_5;
 }
}
