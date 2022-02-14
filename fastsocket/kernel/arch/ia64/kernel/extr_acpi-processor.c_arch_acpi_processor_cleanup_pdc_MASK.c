
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct acpi_processor {TYPE_2__* pdc; } ;
struct TYPE_3__ {TYPE_2__* pointer; } ;
struct TYPE_4__ {struct TYPE_4__* pointer; TYPE_1__ buffer; } ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(struct acpi_processor *VAR_0)
{
 if (VAR_0->pdc) {
  FUNC_0(VAR_0->pdc->pointer->buffer.pointer);
  FUNC_0(VAR_0->pdc->pointer);
  FUNC_0(VAR_0->pdc);
  VAR_0->pdc = ((void*)0);
 }
}
