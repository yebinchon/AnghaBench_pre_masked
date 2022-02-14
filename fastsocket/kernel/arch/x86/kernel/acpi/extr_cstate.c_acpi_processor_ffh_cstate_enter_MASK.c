
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cstate_entry {TYPE_1__* states; } ;
struct acpi_processor_cx {size_t index; } ;
struct TYPE_2__ {int ecx; int eax; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 struct cstate_entry* FUNC_1 (int ,unsigned int) ;
 unsigned int FUNC_2 () ;

void FUNC_3(struct acpi_processor_cx *VAR_1)
{
 unsigned int VAR_2 = FUNC_2();
 struct cstate_entry *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 FUNC_0(VAR_3->states[VAR_1->index].eax,
                       VAR_3->states[VAR_1->index].ecx);
}
