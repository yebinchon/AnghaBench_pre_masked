
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int hard_header_len; int addr_len; int priv_flags; int flags; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_0(struct net_device *VAR_3)
{
 VAR_3->type = VAR_0;
 VAR_3->flags = VAR_1;
 VAR_3->hard_header_len = 10;
 VAR_3->addr_len = 2;
 VAR_3->priv_flags &= ~VAR_2;
}
