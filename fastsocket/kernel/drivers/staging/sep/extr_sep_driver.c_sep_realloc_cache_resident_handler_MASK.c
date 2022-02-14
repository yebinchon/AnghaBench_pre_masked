
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_driver_realloc_cache_resident_t {scalar_t__ new_base_addr; scalar_t__ new_cache_addr; scalar_t__ new_resident_addr; scalar_t__ new_shared_area_addr; } ;
struct sep_device {scalar_t__ shared_bus; scalar_t__ resident_bus; scalar_t__ rar_bus; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,struct sep_driver_realloc_cache_resident_t*,int) ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (struct sep_device*) ;

__attribute__((used)) static int FUNC_3(struct sep_device *VAR_1,
      unsigned long VAR_2)
{
 struct sep_driver_realloc_cache_resident_t VAR_3;
 int VAR_4;


 VAR_4 = FUNC_2(VAR_1);
 if (VAR_4)
  return VAR_4;

 VAR_3.new_base_addr = VAR_1->shared_bus;



 if (VAR_1->resident_bus < VAR_3.new_base_addr)
  VAR_3.new_base_addr = VAR_1->resident_bus;
 if (VAR_1->rar_bus < VAR_3.new_base_addr)
  VAR_3.new_base_addr = VAR_1->rar_bus;


 VAR_3.new_cache_addr = VAR_1->rar_bus;
 VAR_3.new_resident_addr = VAR_1->resident_bus;


 VAR_3.new_shared_area_addr = VAR_1->shared_bus;

 FUNC_1("SEP Driver:command_args.new_shared_addr is %08llx\n", VAR_3.new_shared_area_addr);
 FUNC_1("SEP Driver:command_args.new_base_addr is %08llx\n", VAR_3.new_base_addr);
 FUNC_1("SEP Driver:command_args.new_resident_addr is %08llx\n", VAR_3.new_resident_addr);
 FUNC_1("SEP Driver:command_args.new_rar_addr is %08llx\n", VAR_3.new_cache_addr);


 if (FUNC_0((void *) VAR_2, &VAR_3, sizeof(struct sep_driver_realloc_cache_resident_t)))
  return -VAR_0;
 return 0;
}
