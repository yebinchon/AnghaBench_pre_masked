
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct toshiba_acpi_dev {int mutex; } ;
struct rfkill {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (void*,int) ;
 scalar_t__ FUNC_1 (int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct rfkill*,int) ;

__attribute__((used)) static void FUNC_5(struct rfkill *VAR_1, void *VAR_2)
{
 bool VAR_3;
 bool VAR_4;
 u32 VAR_5;
 struct toshiba_acpi_dev *VAR_6 = VAR_2;

 FUNC_2(&VAR_6->mutex);

 VAR_5 = FUNC_1(&VAR_4);
 if (VAR_5 != VAR_0) {

  FUNC_3(&VAR_6->mutex);
  return;
 }

 VAR_3 = VAR_4;

 FUNC_3(&VAR_6->mutex);

 if (FUNC_4(VAR_1, !VAR_3))
  FUNC_0(VAR_2, 1);
}
