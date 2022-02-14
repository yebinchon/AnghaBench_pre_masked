
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct transaction {int wlen; int rlen; int * rdata; int * wdata; int command; } ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct acpi_ec*,struct transaction*) ;

__attribute__((used)) static int FUNC_1(struct acpi_ec *VAR_1, u8 VAR_2, u8 VAR_3)
{
 u8 VAR_4[2] = { VAR_2, VAR_3 };
 struct transaction VAR_5 = {.command = VAR_0,
    .wdata = VAR_4, .rdata = ((void*)0),
    .wlen = 2, .rlen = 0};

 return FUNC_0(VAR_1, &VAR_5);
}
