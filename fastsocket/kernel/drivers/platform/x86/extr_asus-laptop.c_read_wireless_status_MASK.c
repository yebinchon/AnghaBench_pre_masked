
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_status ;
struct TYPE_2__ {int status; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *,int *,unsigned long long*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_2 (char*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(int VAR_3)
{
 unsigned long long VAR_4;
 acpi_status VAR_5 = VAR_0;

 if (!VAR_2)
  return (VAR_1->status & VAR_3) ? 1 : 0;

 VAR_5 = FUNC_1(VAR_2, ((void*)0), ((void*)0), &VAR_4);
 if (FUNC_0(VAR_5))
  FUNC_2("Error reading Wireless status\n");
 else
  return (VAR_4 & VAR_3) ? 1 : 0;

 return (VAR_1->status & VAR_3) ? 1 : 0;
}
