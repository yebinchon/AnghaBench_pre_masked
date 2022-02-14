
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct mt_cpu {scalar_t__* mtc_snaps; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 struct mt_cpu* FUNC_0 () ;

void
FUNC_1(uint64_t *VAR_3, uint64_t *VAR_4)
{
 if (!VAR_2) {
  *VAR_3 = 0;
  *VAR_4 = 0;
  return;
 }

 struct mt_cpu *VAR_5 = FUNC_0();
 *VAR_3 = 0;


 *VAR_4 = VAR_5->mtc_snaps[VAR_0];
}
