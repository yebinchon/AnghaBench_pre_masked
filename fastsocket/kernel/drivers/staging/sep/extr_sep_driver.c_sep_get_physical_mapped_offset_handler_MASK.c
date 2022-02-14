
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sep_driver_get_mapped_offset_t {scalar_t__ physical_address; scalar_t__ offset; } ;
struct sep_device {scalar_t__ shared_bus; } ;


 int VAR_0 ;
 int FUNC_0 (struct sep_driver_get_mapped_offset_t*,void*,int) ;
 int FUNC_1 (void*,struct sep_driver_get_mapped_offset_t*,int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct sep_device *VAR_1, unsigned long VAR_2)
{
 int VAR_3;
 struct sep_driver_get_mapped_offset_t VAR_4;

 FUNC_2("SEP Driver:--------> sep_get_physical_mapped_offset_handler start\n");

 VAR_3 = FUNC_0(&VAR_4, (void *) VAR_2, sizeof(struct sep_driver_get_mapped_offset_t));
 if (VAR_3)
  goto end_function;

 if (VAR_4.physical_address < VAR_1->shared_bus) {
  VAR_3 = -VAR_0;
  goto end_function;
 }


 VAR_4.offset = VAR_4.physical_address - VAR_1->shared_bus;

 FUNC_3("SEP Driver:bus_address is %08lx, offset is %lu\n", VAR_4.physical_address, VAR_4.offset);


 VAR_3 = FUNC_1((void *) VAR_2, &VAR_4, sizeof(struct sep_driver_get_mapped_offset_t));
end_function:
 FUNC_2("SEP Driver:<-------- sep_get_physical_mapped_offset_handler end\n");
 return VAR_3;
}
