
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mlx4_en_priv {TYPE_1__* dev; int prev_mac; int base_qpn; scalar_t__ port_up; } ;
struct TYPE_2__ {int dev_addr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct mlx4_en_priv*,char*) ;
 int FUNC_1 (struct mlx4_en_priv*,char*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct mlx4_en_priv*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mlx4_en_priv *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->port_up) {

  VAR_2 = FUNC_3(VAR_1, VAR_1->base_qpn,
       VAR_1->dev->dev_addr, VAR_1->prev_mac);
  if (VAR_2)
   FUNC_1(VAR_1, "Failed changing HW MAC address\n");
  FUNC_2(VAR_1->prev_mac, VAR_1->dev->dev_addr,
         sizeof(VAR_1->prev_mac));
 } else
  FUNC_0(VAR_0, VAR_1, "Port is down while registering mac, exiting...\n");

 return VAR_2;
}
