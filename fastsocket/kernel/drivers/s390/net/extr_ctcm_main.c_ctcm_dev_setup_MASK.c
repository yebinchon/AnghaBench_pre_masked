
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int tx_queue_len; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) void static FUNC_0(struct net_device *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->tx_queue_len = 100;
 VAR_3->flags = VAR_2 | VAR_1;
}
