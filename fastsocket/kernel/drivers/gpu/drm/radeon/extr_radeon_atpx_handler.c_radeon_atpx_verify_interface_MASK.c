
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef size_t u16 ;
struct radeon_atpx {int functions; int handle; } ;
struct atpx_verify_interface {size_t version; int function_bits; } ;
typedef int output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct atpx_verify_interface*,scalar_t__,size_t) ;
 int FUNC_2 (struct atpx_verify_interface*,int ,int) ;
 size_t FUNC_3 (int,size_t) ;
 int FUNC_4 (char*,size_t) ;
 union acpi_object* FUNC_5 (int ,int ,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static int FUNC_7(struct radeon_atpx *VAR_3)
{
 union acpi_object *VAR_4;
 struct atpx_verify_interface VAR_5;
 size_t VAR_6;
 int VAR_7 = 0;

 VAR_4 = FUNC_5(VAR_3->handle, VAR_0, ((void*)0));
 if (!VAR_4)
  return -VAR_2;

 FUNC_2(&VAR_5, 0, sizeof(VAR_5));

 VAR_6 = *(u16 *) VAR_4->buffer.pointer;
 if (VAR_6 < 8) {
  FUNC_4("ATPX buffer is too small: %zu\n", VAR_6);
  VAR_7 = -VAR_1;
  goto out;
 }
 VAR_6 = FUNC_3(sizeof(VAR_5), VAR_6);

 FUNC_1(&VAR_5, VAR_4->buffer.pointer, VAR_6);


 FUNC_4("ATPX version %u\n", VAR_5.version);

 FUNC_6(&VAR_3->functions, VAR_5.function_bits);

out:
 FUNC_0(VAR_4);
 return VAR_7;
}
