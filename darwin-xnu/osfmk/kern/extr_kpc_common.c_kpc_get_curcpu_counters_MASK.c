
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned long long uint64_t ;
typedef int uint32_t ;
struct TYPE_2__ {int cpu_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (unsigned long long*) ;
 TYPE_1__* FUNC_1 () ;
 int FUNC_2 (unsigned long long*,unsigned long long) ;
 unsigned long long FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (unsigned long long*) ;
 scalar_t__ FUNC_6 (unsigned long long) ;
 int FUNC_7 (int) ;

int
FUNC_8(uint32_t VAR_4, int *VAR_5, uint64_t *VAR_6)
{
 int VAR_7=0, VAR_8=0;
 uint64_t VAR_9 = 0ULL;

 FUNC_0(VAR_6);

 VAR_7 = FUNC_7(VAR_0);


 if (VAR_5)
  *VAR_5 = FUNC_1()->cpu_id;

 if (VAR_4 & VAR_2) {
  FUNC_5(&VAR_6[VAR_8]);
  VAR_8 += FUNC_4(VAR_2);
 }

 if (VAR_4 & VAR_1) {
  VAR_9 = FUNC_3(VAR_1);
  FUNC_2(&VAR_6[VAR_8], VAR_9);
  VAR_8 += FUNC_6(VAR_9);
 }

 if (VAR_4 & VAR_3) {
  VAR_9 = FUNC_3(VAR_3);
  FUNC_2(&VAR_6[VAR_8], VAR_9);
  VAR_8 += FUNC_6(VAR_9);
 }

 FUNC_7(VAR_7);

 return VAR_8;
}
