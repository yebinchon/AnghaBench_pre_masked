
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slice_data {int* level_to_irq; } ;
typedef unsigned long hubreg_t ;
typedef size_t cpuid_t ;
struct TYPE_2__ {struct slice_data* data; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 int FUNC_0 (unsigned long) ;
 unsigned long FUNC_1 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 scalar_t__ FUNC_2 (size_t) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned long) ;
 int FUNC_5 () ;
 size_t FUNC_6 () ;

__attribute__((used)) static void FUNC_7(void)
{
 int VAR_8, VAR_9;
 hubreg_t VAR_10, VAR_11;
 cpuid_t VAR_12 = FUNC_6();
 int VAR_13 =
  (FUNC_2(VAR_12) == 0) ? VAR_4 : VAR_5;


 VAR_10 = FUNC_1(VAR_6);
 VAR_11 = FUNC_1(VAR_13);

 VAR_10 &= VAR_11;
 if (!VAR_10)
  return;

 VAR_9 = FUNC_4(VAR_10);
 {

  struct slice_data *VAR_14 = VAR_7[VAR_12].data;

  VAR_8 = VAR_14->level_to_irq[VAR_9];
  FUNC_3(VAR_8);
 }

 FUNC_1(VAR_6);
}
