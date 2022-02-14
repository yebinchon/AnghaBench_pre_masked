
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u32 ;
typedef int acpi_status ;
struct TYPE_10__ {int * handler; } ;
struct TYPE_9__ {scalar_t__ use_count; int thread_id; int * mutex; } ;
struct TYPE_6__ {int integer; } ;
struct TYPE_8__ {int * object; int * peer; int * child; int * parent; int type; int descriptor_type; TYPE_1__ name; } ;
struct TYPE_7__ {int * handler; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 scalar_t__ VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 int VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 TYPE_5__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 int * VAR_21 ;
 void* VAR_22 ;
 scalar_t__ VAR_23 ;
 int * VAR_24 ;
 void* VAR_25 ;
 int * VAR_26 ;
 int ** VAR_27 ;
 int * VAR_28 ;
 int * VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int * VAR_32 ;
 TYPE_4__* VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 int* VAR_37 ;
 scalar_t__ VAR_38 ;
 int * VAR_39 ;
 TYPE_3__ VAR_40 ;
 void* VAR_41 ;
 void* VAR_42 ;
 TYPE_2__ VAR_43 ;
 int * VAR_44 ;
 scalar_t__ VAR_45 ;
 scalar_t__ VAR_46 ;
 scalar_t__ VAR_47 ;
 int VAR_48 ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int VAR_49 ;

acpi_status FUNC_5(void)
{
 acpi_status VAR_50;
 u32 VAR_51;

 FUNC_2(VAR_49);



 VAR_50 = FUNC_3();
 if (FUNC_1(VAR_50)) {
  FUNC_4(VAR_50);
 }



 for (VAR_51 = 0; VAR_51 < VAR_3; VAR_51++) {
  VAR_33[VAR_51].mutex = ((void*)0);
  VAR_33[VAR_51].thread_id = VAR_2;
  VAR_33[VAR_51].use_count = 0;
 }

 for (VAR_51 = 0; VAR_51 < VAR_4; VAR_51++) {
  VAR_37[VAR_51] = 0;
 }



 VAR_37[VAR_4 - 1] = 0x80000000;



 VAR_28 = ((void*)0);
 VAR_27[0] = ((void*)0);
 VAR_27[1] = ((void*)0);
 VAR_12 = 0;



 VAR_43.handler = ((void*)0);
 VAR_18.handler = ((void*)0);
 VAR_21 = ((void*)0);
 VAR_29 = ((void*)0);
 VAR_44 = ((void*)0);



 VAR_26 = ((void*)0);
 VAR_24 = ((void*)0);
 VAR_22 = VAR_10;
 VAR_23 = 0;
 VAR_25 = VAR_10;



 VAR_14 = VAR_10;
 VAR_16 = VAR_10;
 VAR_41 = VAR_10;
 VAR_35 = 0;
 VAR_38 = 0;
 VAR_13 = VAR_11;
 VAR_30 = 0;
 VAR_34 = 0;
 VAR_47 = 0;
 VAR_46 = 0;
 VAR_45 = 0;
 VAR_17 = VAR_9;
 VAR_15 = VAR_0;
 VAR_36 = 0;



 VAR_20 = VAR_10;
 VAR_42 = VAR_11;



 VAR_32 = ((void*)0);
 VAR_39 = ((void*)0);
 VAR_40.name.integer = VAR_5;
 VAR_40.descriptor_type = VAR_1;
 VAR_40.type = VAR_7;
 VAR_40.parent = ((void*)0);
 VAR_40.child = ((void*)0);
 VAR_40.peer = ((void*)0);
 VAR_40.object = ((void*)0);
 FUNC_4(VAR_8);
}
