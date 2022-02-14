
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_size_t ;
typedef int vm_address_t ;
typedef unsigned int uint64_t ;
struct TYPE_5__ {int * mzn_name; } ;
typedef TYPE_1__ mach_zone_name_t ;
struct TYPE_6__ {unsigned int mzi_elem_size; } ;
typedef TYPE_2__ mach_zone_info_t ;
typedef int mach_memory_info_t ;
typedef int kern_return_t ;


 int FUNC_0 (unsigned int,unsigned int,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int *,unsigned int) ;
 int VAR_1 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__**,unsigned int*,TYPE_2__**,unsigned int*,int **,unsigned int*) ;
 int FUNC_5 () ;
 size_t FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int *,char const*,size_t) ;
 unsigned int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_10(void)
{
 kern_return_t VAR_2;
 uint64_t VAR_3, VAR_4;
 mach_zone_name_t *VAR_5 = ((void*)0);
 unsigned int VAR_6 = 0;
 mach_zone_info_t *VAR_7 = ((void*)0);
 unsigned int VAR_8 = 0;
 mach_memory_info_t *VAR_9 = ((void*)0);
 unsigned int VAR_10 = 0;
 const char VAR_11[] = "kalloc.";

 VAR_2 = FUNC_4(FUNC_3(),
   &VAR_5, &VAR_6, &VAR_7, &VAR_8,
   &VAR_9, &VAR_10);
 VAR_1; FUNC_1(VAR_2, "mach_memory_info");
 VAR_1; FUNC_0(VAR_6, VAR_8, "zone name and info counts don't match");


 for (VAR_4 = 0; VAR_4 < VAR_6; VAR_4++) {
  if (FUNC_7(VAR_5[VAR_4].mzn_name, VAR_11, FUNC_6(VAR_11)) == 0) {
   VAR_3 = FUNC_8(&(VAR_5[VAR_4].mzn_name[FUNC_6(VAR_11)]), ((void*)0), 10);
   FUNC_2("ZONE NAME: %-25s ELEMENT SIZE: %llu", VAR_5[VAR_4].mzn_name, VAR_3);
   VAR_1; FUNC_0(VAR_3, VAR_7[VAR_4].mzi_elem_size, "kalloc zone name and element size don't match");
  }
 }

 if ((VAR_5 != ((void*)0)) && (VAR_6 != 0)) {
  VAR_2 = FUNC_9(FUNC_5(), (vm_address_t) VAR_5,
    (vm_size_t) (VAR_6 * sizeof *VAR_5));
  VAR_1; FUNC_1(VAR_2, "vm_deallocate name");
 }

 if ((VAR_7 != ((void*)0)) && (VAR_8 != 0)) {
  VAR_2 = FUNC_9(FUNC_5(), (vm_address_t) VAR_7,
    (vm_size_t) (VAR_8 * sizeof *VAR_7));
  VAR_1; FUNC_1(VAR_2, "vm_deallocate info");
 }

 if ((VAR_9 != ((void*)0)) && (VAR_10 != 0)) {
  VAR_2 = FUNC_9(FUNC_5(), (vm_address_t) VAR_9,
    (vm_size_t) (VAR_10 * sizeof *VAR_9));
  VAR_1; FUNC_1(VAR_2, "vm_deallocate wiredInfo");
 }

 VAR_0;
}
