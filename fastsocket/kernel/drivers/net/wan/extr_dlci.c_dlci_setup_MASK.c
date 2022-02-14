
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int addr_len; int type; int destructor; int * netdev_ops; int * header_ops; scalar_t__ flags; } ;
struct frhdr {int dummy; } ;
struct dlci_local {int receive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct dlci_local* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_5)
{
 struct dlci_local *VAR_6 = FUNC_0(VAR_5);

 VAR_5->flags = 0;
 VAR_5->header_ops = &VAR_1;
 VAR_5->netdev_ops = &VAR_2;
 VAR_5->destructor = VAR_4;

 VAR_6->receive = VAR_3;

 VAR_5->type = VAR_0;
 VAR_5->hard_header_len = sizeof(struct frhdr);
 VAR_5->addr_len = sizeof(short);

}
