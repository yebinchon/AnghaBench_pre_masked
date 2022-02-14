
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac_info {struct fifo_info* fifos; } ;
struct config_param {int tx_fifo_num; } ;
struct s2io_nic {scalar_t__ vlgrp; struct mac_info mac_control; struct config_param config; } ;
struct net_device {int dummy; } ;
struct fifo_info {int tx_lock; } ;


 int VAR_0 ;
 struct s2io_nic* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (scalar_t__,unsigned short,int *) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1, unsigned short VAR_2)
{
 int VAR_3;
 struct s2io_nic *VAR_4 = FUNC_0(VAR_1);
 unsigned long VAR_5[VAR_0];
 struct config_param *VAR_6 = &VAR_4->config;
 struct mac_info *VAR_7 = &VAR_4->mac_control;

 for (VAR_3 = 0; VAR_3 < VAR_6->tx_fifo_num; VAR_3++) {
  struct fifo_info *VAR_8 = &VAR_7->fifos[VAR_3];

  FUNC_1(&VAR_8->tx_lock, VAR_5[VAR_3]);
 }

 if (VAR_4->vlgrp)
  FUNC_3(VAR_4->vlgrp, VAR_2, ((void*)0));

 for (VAR_3 = VAR_6->tx_fifo_num - 1; VAR_3 >= 0; VAR_3--) {
  struct fifo_info *VAR_9 = &VAR_7->fifos[VAR_3];

  FUNC_2(&VAR_9->tx_lock, VAR_5[VAR_3]);
 }
}
