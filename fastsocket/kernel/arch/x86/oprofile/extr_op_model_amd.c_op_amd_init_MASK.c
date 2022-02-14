
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oprofile_operations {int create_files; } ;
struct TYPE_4__ {int x86; } ;
struct TYPE_3__ {int num_virt_counters; void* num_controls; void* num_counters; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (void*,int ) ;
 void* VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_2(struct oprofile_operations *VAR_8)
{
 FUNC_0();
 VAR_4 = VAR_8->create_files;
 VAR_8->create_files = VAR_7;

 if (VAR_3.x86 == 0x15) {
  VAR_5 = VAR_1;
 } else {
  VAR_5 = VAR_0;
 }

 VAR_6.num_counters = VAR_5;
 VAR_6.num_controls = VAR_5;
 VAR_6.num_virt_counters = FUNC_1(VAR_5, VAR_2);

 return 0;
}
