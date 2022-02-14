
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* pkey_phys_table_len; } ;
struct TYPE_3__ {int num_ports; int* gid_table_len; scalar_t__* pkey_table_len; } ;
struct mlx4_dev {TYPE_2__ phys_caps; TYPE_1__ caps; } ;



__attribute__((used)) static void FUNC_0(struct mlx4_dev *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 1; VAR_1 <= VAR_0->caps.num_ports; VAR_1++) {
  VAR_0->caps.gid_table_len[VAR_1] = 1;
  VAR_0->caps.pkey_table_len[VAR_1] =
   VAR_0->phys_caps.pkey_phys_table_len[VAR_1] - 1;
 }
}
