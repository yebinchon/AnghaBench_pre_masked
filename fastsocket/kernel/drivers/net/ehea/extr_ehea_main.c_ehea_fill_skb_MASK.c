
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int ip_summed; int csum; int protocol; } ;
struct net_device {int dummy; } ;
struct ehea_port_res {TYPE_1__* port; } ;
struct ehea_cqe {int num_bytes_transfered; int status; int inet_checksum_value; } ;
struct TYPE_2__ {struct ehea_port_res* port_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int) ;
 int FUNC_3 (struct sk_buff*,int) ;

__attribute__((used)) static inline void FUNC_4(struct net_device *VAR_3,
     struct sk_buff *VAR_4, struct ehea_cqe *VAR_5,
     struct ehea_port_res *VAR_6)
{
 int VAR_7 = VAR_5->num_bytes_transfered - 4;

 FUNC_2(VAR_4, VAR_7);
 VAR_4->protocol = FUNC_1(VAR_4, VAR_3);



 if (VAR_5->status & VAR_2) {
  VAR_4->ip_summed = VAR_0;
  VAR_4->csum = FUNC_0(~VAR_5->inet_checksum_value);
 } else
  VAR_4->ip_summed = VAR_1;

 FUNC_3(VAR_4, VAR_6 - &VAR_6->port->port_res[0]);
}
