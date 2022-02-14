
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef enum vga_switcheroo_client_id { ____Placeholder_vga_switcheroo_client_id } vga_switcheroo_client_id ;
struct TYPE_2__ {int dhandle; int dsm_detected; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(enum vga_switcheroo_client_id VAR_4)
{
 if (!VAR_3.dsm_detected)
  return 0;
 if (VAR_4 == VAR_2)
  return FUNC_0(VAR_3.dhandle, VAR_1);
 else
  return FUNC_0(VAR_3.dhandle, VAR_0);
}
