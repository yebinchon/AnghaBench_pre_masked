
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mac_info {struct ring_info* rings; } ;
struct config_param {int rx_ring_num; } ;
struct s2io_nic {struct mac_info mac_control; struct config_param config; struct net_device* dev; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ block_index; } ;
struct TYPE_3__ {scalar_t__ offset; scalar_t__ block_index; } ;
struct ring_info {scalar_t__ rx_bufs_left; TYPE_2__ rx_curr_get_info; TYPE_1__ rx_curr_put_info; } ;
struct net_device {int name; } ;


 int FUNC_0 (int ,char*,int ,int,int) ;
 int VAR_0 ;
 int FUNC_1 (struct s2io_nic*,int,int) ;
 int* VAR_1 ;

__attribute__((used)) static void FUNC_2(struct s2io_nic *VAR_2)
{
 struct net_device *VAR_3 = VAR_2->dev;
 int VAR_4, VAR_5 = 0, VAR_6 = 0;
 struct config_param *VAR_7 = &VAR_2->config;
 struct mac_info *VAR_8 = &VAR_2->mac_control;

 for (VAR_4 = 0; VAR_4 < VAR_7->rx_ring_num; VAR_4++) {
  struct ring_info *VAR_9 = &VAR_8->rings[VAR_4];

  for (VAR_5 = 0; VAR_5 < VAR_1[VAR_4]; VAR_5++)
   FUNC_1(VAR_2, VAR_4, VAR_5);

  VAR_9->rx_curr_put_info.block_index = 0;
  VAR_9->rx_curr_get_info.block_index = 0;
  VAR_9->rx_curr_put_info.offset = 0;
  VAR_9->rx_curr_get_info.offset = 0;
  VAR_9->rx_bufs_left = 0;
  FUNC_0(VAR_0, "%s: Freed 0x%x Rx Buffers on ring%d\n",
     VAR_3->name, VAR_6, VAR_4);
 }
}
