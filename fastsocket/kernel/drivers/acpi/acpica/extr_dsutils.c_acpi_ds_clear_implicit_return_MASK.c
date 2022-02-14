
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_walk_state {int * implicit_return_obj; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;

void FUNC_3(struct acpi_walk_state *VAR_3)
{
 FUNC_1(VAR_2);




 if (!VAR_1) {
  return;
 }

 if (VAR_3->implicit_return_obj) {





  FUNC_0(*(VAR_0,
      "Removing reference on stale implicit return obj %p\n",
      VAR_3->implicit_return_obj));

  FUNC_2(VAR_3->implicit_return_obj);
  VAR_3->implicit_return_obj = ((void*)0);
 }
}
