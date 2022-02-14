
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int descriptor_type; } ;
union acpi_generic_state {TYPE_1__ common; } ;
typedef scalar_t__ u32 ;
struct acpi_walk_state {scalar_t__ result_size; int results; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 union acpi_generic_state* FUNC_3 () ;
 int FUNC_4 (int *,union acpi_generic_state*) ;
 int VAR_8 ;

__attribute__((used)) static acpi_status FUNC_5(struct acpi_walk_state *VAR_9)
{
 union acpi_generic_state *VAR_10;

 FUNC_2(VAR_8);



 if (((u32) VAR_9->result_size + VAR_2) >
     VAR_3) {
  FUNC_1((VAR_4, "Result stack overflow: State=%p Num=%X",
       VAR_9, VAR_9->result_size));
  return (VAR_7);
 }

 VAR_10 = FUNC_3();
 if (!VAR_10) {
  return (VAR_5);
 }

 VAR_10->common.descriptor_type = VAR_1;
 FUNC_4(&VAR_9->results, VAR_10);



 VAR_9->result_size += VAR_2;

 FUNC_0((VAR_0, "Results=%p State=%p\n",
     VAR_10, VAR_9));

 return (VAR_6);
}
