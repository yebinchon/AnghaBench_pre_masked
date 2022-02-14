
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct bintime {int dummy; } ;
typedef int clock_usec_t ;
typedef int clock_sec_t ;
struct TYPE_2__ {int bintime; } ;


 int FUNC_0 (struct bintime*,int *,int *) ;
 int FUNC_1 (struct bintime*,int *) ;
 TYPE_1__ VAR_0 ;
 struct bintime FUNC_2 (int ) ;
 int FUNC_3 () ;

__attribute__((used)) static void
FUNC_4(
 clock_sec_t *VAR_1,
 clock_usec_t *VAR_2,
 uint64_t *VAR_3)
{
 uint64_t VAR_4;
 struct bintime VAR_5;

 VAR_4 = FUNC_3();
 if (VAR_3)
  *VAR_3 = VAR_4;

 VAR_5 = FUNC_2(VAR_4);
 FUNC_1(&VAR_5, &VAR_0.bintime);
 FUNC_0(&VAR_5, VAR_1, VAR_2);
}
