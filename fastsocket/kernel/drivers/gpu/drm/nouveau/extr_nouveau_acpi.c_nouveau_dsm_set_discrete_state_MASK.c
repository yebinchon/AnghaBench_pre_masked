
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum vga_switcheroo_state { ____Placeholder_vga_switcheroo_state } vga_switcheroo_state ;
typedef int acpi_handle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_1(acpi_handle VAR_4, enum vga_switcheroo_state VAR_5)
{
 int VAR_6;
 if (VAR_5 == VAR_3)
  VAR_6 = VAR_1;
 else
  VAR_6 = VAR_2;
 FUNC_0(VAR_4, VAR_0, VAR_6, ((void*)0));
 return 0;
}
