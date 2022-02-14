
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct mt_cpu {int * mtc_snaps; } ;
struct TYPE_3__ {struct mt_cpu cpu_monotonic; } ;
typedef TYPE_1__ cpu_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int,int ) ;

void
FUNC_6(cpu_data_t *VAR_5)
{
 uint64_t VAR_6;
 struct mt_cpu *VAR_7;

 FUNC_2(VAR_5 != ((void*)0));
 FUNC_2(FUNC_4() == VAR_0);

 VAR_7 = &VAR_5->cpu_monotonic;

 for (int VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  FUNC_5(VAR_8, VAR_7->mtc_snaps[VAR_8]);
 }


 FUNC_3();

 VAR_6 = FUNC_0(VAR_2);
 VAR_6 |= VAR_4 | VAR_3;
 FUNC_1(VAR_2, VAR_6);
}
