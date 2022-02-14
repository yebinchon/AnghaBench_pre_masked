
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct mt_cpu {int * mtc_snaps; } ;
struct TYPE_3__ {struct mt_cpu cpu_monotonic; } ;
typedef TYPE_1__ cpu_data_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int,int ) ;
 int VAR_7 ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(cpu_data_t *VAR_8)
{
 struct mt_cpu *VAR_9;

 if (!VAR_7) {
  return;
 }

 FUNC_0(FUNC_1() == VAR_0);

 VAR_9 = &VAR_8->cpu_monotonic;

 for (int VAR_10 = 0; VAR_10 < VAR_6; VAR_10++) {
  FUNC_2(VAR_10, VAR_9->mtc_snaps[VAR_10]);
 }
 FUNC_3(VAR_1, VAR_3 | VAR_2);
 FUNC_3(VAR_4, VAR_5);
}
