
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u8 ;
typedef int u64 ;
struct acpi_generic_address {scalar_t__ access_width; scalar_t__ bit_offset; void* bit_width; void* space_id; int address; } ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (void*) ;

__attribute__((used)) static inline void
FUNC_2(struct acpi_generic_address *VAR_0,
        u8 VAR_1, u8 VAR_2, u64 VAR_3)
{





 FUNC_0(&VAR_0->address, &VAR_3);



 VAR_0->space_id = VAR_1;
 VAR_0->bit_width = (u8)FUNC_1(VAR_2);
 VAR_0->bit_offset = 0;
 VAR_0->access_width = 0;
}
