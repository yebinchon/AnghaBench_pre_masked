
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slice_data {int* level_to_irq; } ;
typedef int hubreg_t ;
typedef size_t cpuid_t ;
struct TYPE_2__ {struct slice_data* data; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 size_t FUNC_5 () ;

__attribute__((used)) static void FUNC_6(void)
{
 int VAR_4, VAR_5;
 hubreg_t VAR_6, VAR_7;
 cpuid_t VAR_8 = FUNC_5();
 int VAR_9 = (FUNC_2(VAR_8) == 0) ? VAR_0 : VAR_1;
 struct slice_data *VAR_10 = VAR_3[VAR_8].data;


 VAR_6 = FUNC_1(VAR_2);
 VAR_7 = FUNC_1(VAR_9);

 VAR_6 &= VAR_7;
 if (!VAR_6)
  return;

 VAR_5 = FUNC_4(VAR_6);

 VAR_4 = VAR_10->level_to_irq[VAR_5];
 FUNC_0(VAR_5);
 FUNC_3(VAR_4);

 FUNC_1(VAR_2);
}
