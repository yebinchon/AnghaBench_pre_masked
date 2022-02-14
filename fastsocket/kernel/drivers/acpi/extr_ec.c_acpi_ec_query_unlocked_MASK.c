
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct transaction {int rlen; int wlen; scalar_t__* rdata; int * wdata; int command; } ;
struct acpi_ec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_ec*,struct transaction*) ;

__attribute__((used)) static int FUNC_1(struct acpi_ec *VAR_3, u8 * VAR_4)
{
 int VAR_5;
 u8 VAR_6;
 struct transaction VAR_7 = {.command = VAR_0,
    .wdata = ((void*)0), .rdata = &VAR_6,
    .wlen = 0, .rlen = 1};
 if (!VAR_3 || !VAR_4)
  return -VAR_1;





 VAR_5 = FUNC_0(VAR_3, &VAR_7);
 if (VAR_5)
  return VAR_5;
 if (!VAR_6)
  return -VAR_2;
 *VAR_4 = VAR_6;
 return 0;
}
