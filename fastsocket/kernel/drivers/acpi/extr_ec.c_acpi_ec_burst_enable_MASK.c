
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {int rlen; int wlen; int * rdata; int * wdata; int command; } ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,struct transaction*) ;

__attribute__((used)) static int FUNC_1(struct acpi_ec *VAR_1)
{
 u8 VAR_2;
 struct transaction VAR_3 = {.command = VAR_0,
    .wdata = ((void*)0), .rdata = &VAR_2,
    .wlen = 0, .rlen = 1};

 return FUNC_0(VAR_1, &VAR_3);
}
