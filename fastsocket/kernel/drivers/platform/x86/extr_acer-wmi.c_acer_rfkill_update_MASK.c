
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct work_struct {int dummy; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_6(struct work_struct *VAR_6)
{
 u32 VAR_7;
 acpi_status VAR_8;

 VAR_8 = FUNC_1(&VAR_7, VAR_1);
 if (FUNC_0(VAR_8))
  FUNC_3(VAR_5, !VAR_7);

 if (FUNC_2(VAR_0)) {
  VAR_8 = FUNC_1(&VAR_7, VAR_0);
  if (FUNC_0(VAR_8))
   FUNC_3(VAR_4, !VAR_7);
 }

 FUNC_5(&VAR_3, FUNC_4(VAR_2));
}
