
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u32 ;
struct acpi_walk_state {TYPE_2__* local_variables; TYPE_1__* arguments; } ;
struct TYPE_6__ {size_t integer; } ;
struct TYPE_5__ {int flags; void* type; void* descriptor_type; TYPE_3__ name; } ;
struct TYPE_4__ {int flags; void* type; void* descriptor_type; TYPE_3__ name; } ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (TYPE_3__*,int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_2(struct acpi_walk_state *VAR_10)
{
 u32 VAR_11;

 FUNC_0(VAR_8);



 for (VAR_11 = 0; VAR_11 < VAR_1; VAR_11++) {
  FUNC_1(&VAR_10->arguments[VAR_11].name,
       VAR_6);
  VAR_10->arguments[VAR_11].name.integer |= (VAR_11 << 24);
  VAR_10->arguments[VAR_11].descriptor_type = VAR_0;
  VAR_10->arguments[VAR_11].type = VAR_3;
  VAR_10->arguments[VAR_11].flags = VAR_4;
 }



 for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
  FUNC_1(&VAR_10->local_variables[VAR_11].name,
       VAR_7);

  VAR_10->local_variables[VAR_11].name.integer |= (VAR_11 << 24);
  VAR_10->local_variables[VAR_11].descriptor_type =
      VAR_0;
  VAR_10->local_variables[VAR_11].type = VAR_3;
  VAR_10->local_variables[VAR_11].flags = VAR_5;
 }

 VAR_9;
}
