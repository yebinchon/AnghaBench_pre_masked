
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* pnext; scalar_t__ pbuf; } ;
struct sgiseeq_rx_desc {TYPE_1__ rdma; } ;
struct sgiseeq_private {int dummy; } ;
struct net_device {int dummy; } ;


 void* FUNC_0 (struct sgiseeq_private*,struct sgiseeq_rx_desc*) ;
 int FUNC_1 (struct net_device*,struct sgiseeq_rx_desc*) ;
 struct sgiseeq_private* FUNC_2 (struct net_device*) ;

__attribute__((used)) static inline void FUNC_3(struct net_device *VAR_0,
     struct sgiseeq_rx_desc *VAR_1,
     int VAR_2)
{
 struct sgiseeq_private *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = 0;

 while (VAR_4 < (VAR_2 - 1)) {
  VAR_1[VAR_4].rdma.pnext = FUNC_0(VAR_3, VAR_1 + VAR_4 + 1);
  VAR_1[VAR_4].rdma.pbuf = 0;
  FUNC_1(VAR_0, &VAR_1[VAR_4]);
  VAR_4++;
 }
 VAR_1[VAR_4].rdma.pbuf = 0;
 VAR_1[VAR_4].rdma.pnext = FUNC_0(VAR_3, VAR_1);
 FUNC_1(VAR_0, &VAR_1[VAR_4]);
}
