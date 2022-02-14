
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_processor_cx {int valid; int latency; int latency_ticks; int address; } ;



__attribute__((used)) static void FUNC_0(struct acpi_processor_cx *VAR_0)
{

 if (!VAR_0->address)
  return;





 VAR_0->valid = 1;

 VAR_0->latency_ticks = VAR_0->latency;

 return;
}
