
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ tcpOutRsts; scalar_t__ tcpRetransSegs; scalar_t__ tcpOutSegs; scalar_t__ tcpInSegs; } ;
union rdma_protocol_stats {TYPE_3__ iw; } ;
struct tp_tcp_stats {scalar_t__ tcpOutSegs; scalar_t__ tcpOutRsts; scalar_t__ tcpRetransSegs; scalar_t__ tcpInSegs; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int pdev; } ;
struct TYPE_5__ {TYPE_1__ lldi; } ;
struct c4iw_dev {TYPE_2__ rdev; } ;


 int FUNC_0 (int ,struct tp_tcp_stats*,struct tp_tcp_stats*) ;
 int FUNC_1 (union rdma_protocol_stats*,int ,int) ;
 struct c4iw_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_0,
   union rdma_protocol_stats *VAR_1)
{
 struct tp_tcp_stats VAR_2, VAR_3;
 struct c4iw_dev *VAR_4 = FUNC_2(VAR_0);

 FUNC_0(VAR_4->rdev.lldi.pdev, &VAR_2, &VAR_3);
 FUNC_1(VAR_1, 0, sizeof *VAR_1);
 VAR_1->iw.tcpInSegs = VAR_2 + VAR_3;
 VAR_1->iw.tcpOutSegs = VAR_2 + VAR_3;
 VAR_1->iw.tcpRetransSegs = VAR_2 + VAR_3;
 VAR_1->iw.tcpOutRsts = VAR_2 + VAR_3;

 return 0;
}
