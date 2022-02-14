
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pointer; } ;
union acpi_object {TYPE_1__ buffer; } ;
typedef int u32 ;
typedef size_t u16 ;
struct TYPE_4__ {int power_cntl; int i2c_mux_cntl; int disp_mux_cntl; scalar_t__ px_params; } ;
struct radeon_atpx {TYPE_2__ functions; int handle; } ;
struct atpx_px_params {int flags; int valid_flags; } ;
typedef int output ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (union acpi_object*) ;
 int FUNC_1 (struct atpx_px_params*,scalar_t__,size_t) ;
 int FUNC_2 (struct atpx_px_params*,int ,int) ;
 size_t FUNC_3 (int,size_t) ;
 int FUNC_4 (char*,size_t) ;
 union acpi_object* FUNC_5 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_6(struct radeon_atpx *VAR_7)
{


 VAR_7->functions.power_cntl = 1;

 if (VAR_7->functions.px_params) {
  union acpi_object *VAR_8;
  struct atpx_px_params VAR_9;
  size_t VAR_10;
  u32 VAR_11;

  VAR_8 = FUNC_5(VAR_7->handle, VAR_2, ((void*)0));
  if (!VAR_8)
   return -VAR_6;

  FUNC_2(&VAR_9, 0, sizeof(VAR_9));

  VAR_10 = *(u16 *) VAR_8->buffer.pointer;
  if (VAR_10 < 10) {
   FUNC_4("ATPX buffer is too small: %zu\n", VAR_10);
   FUNC_0(VAR_8);
   return -VAR_5;
  }
  VAR_10 = FUNC_3(sizeof(VAR_9), VAR_10);

  FUNC_1(&VAR_9, VAR_8->buffer.pointer, VAR_10);

  VAR_11 = VAR_9.flags & VAR_9.valid_flags;

  if (VAR_11 & VAR_3) {
   VAR_7->functions.i2c_mux_cntl = 1;
   VAR_7->functions.disp_mux_cntl = 1;
  }

  if (VAR_11 & (VAR_0 |
      VAR_4 |
      VAR_1))
   VAR_7->functions.disp_mux_cntl = 1;

  FUNC_0(VAR_8);
 }
 return 0;
}
