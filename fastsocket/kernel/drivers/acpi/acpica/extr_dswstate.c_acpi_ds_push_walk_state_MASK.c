
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {struct acpi_walk_state* next; } ;
struct acpi_thread_state {struct acpi_walk_state* walk_state_list; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;

void
FUNC_1(struct acpi_walk_state *VAR_2,
   struct acpi_thread_state *VAR_3)
{
 FUNC_0(VAR_0);

 VAR_2->next = VAR_3->walk_state_list;
 VAR_3->walk_state_list = VAR_2;

 VAR_1;
}
