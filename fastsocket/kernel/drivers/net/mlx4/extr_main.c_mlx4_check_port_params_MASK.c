
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int num_ports; int flags; int* supported_type; } ;
struct mlx4_dev {TYPE_1__ caps; } ;
typedef enum mlx4_port_type { ____Placeholder_mlx4_port_type } mlx4_port_type ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx4_dev*,char*,...) ;

int FUNC_1(struct mlx4_dev *VAR_2,
      enum mlx4_port_type *VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->caps.num_ports - 1; VAR_4++) {
  if (VAR_3[VAR_4] != VAR_3[VAR_4 + 1]) {
   if (!(VAR_2->caps.flags & VAR_1)) {
    FUNC_0(VAR_2, "Only same port types supported "
      "on this HCA, aborting.\n");
    return -VAR_0;
   }
  }
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->caps.num_ports; VAR_4++) {
  if (!(VAR_3[VAR_4] & VAR_2->caps.supported_type[VAR_4+1])) {
   FUNC_0(VAR_2, "Requested port type for port %d is not "
          "supported on this HCA\n", VAR_4 + 1);
   return -VAR_0;
  }
 }
 return 0;
}
