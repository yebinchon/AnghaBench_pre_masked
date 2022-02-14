
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct acpiphp_hp_work {int work; void* context; int type; int handle; } ;
typedef int acpi_handle ;


 int VAR_0 ;
 int FUNC_0 (int *,void (*) (struct work_struct*)) ;
 int VAR_1 ;
 int FUNC_1 (struct acpiphp_hp_work*) ;
 struct acpiphp_hp_work* FUNC_2 (int,int ) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(acpi_handle VAR_2, u32 VAR_3,
      void *VAR_4,
      void (*VAR_5)(struct work_struct *VAR_6))
{
 struct acpiphp_hp_work *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(sizeof(*VAR_7), VAR_0);
 if (!VAR_7)
  return;

 VAR_7->handle = VAR_2;
 VAR_7->type = VAR_3;
 VAR_7->context = VAR_4;

 FUNC_0(&VAR_7->work, VAR_5);
 VAR_8 = FUNC_3(VAR_1, &VAR_7->work);
 if (!VAR_8)
  FUNC_1(VAR_7);
}
