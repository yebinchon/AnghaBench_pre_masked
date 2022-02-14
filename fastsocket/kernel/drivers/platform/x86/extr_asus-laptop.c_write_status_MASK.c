
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int acpi_handle ;
struct TYPE_2__ {int status; } ;





 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int ,int *,int,int *) ;

__attribute__((used)) static void FUNC_2(acpi_handle VAR_3, int VAR_4, int VAR_5)
{
 VAR_2->status = (VAR_4) ? (VAR_2->status | VAR_5) : (VAR_2->status & ~VAR_5);

 switch (VAR_5) {
 case 128:
  VAR_4 = !(VAR_4 & 0x1);
  break;
 case 130:
  VAR_4 = (VAR_4 & 0x1) + 1;
  break;
 case 129:
  VAR_3 = (VAR_4) ? VAR_1 : VAR_0;
  VAR_4 = 0x02;
  break;
 default:
  VAR_4 &= 0x1;
  break;
 }

 if (FUNC_1(VAR_3, ((void*)0), VAR_4, ((void*)0)))
  FUNC_0(" write failed %x\n", VAR_5);
}
