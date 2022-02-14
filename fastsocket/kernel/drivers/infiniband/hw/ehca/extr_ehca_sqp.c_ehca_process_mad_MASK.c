
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct ib_wc {int src_qp; } ;
struct TYPE_2__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct ib_grh {int dummy; } ;
struct ib_device {scalar_t__ phys_port_cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_device*,char*,scalar_t__,int ) ;
 int FUNC_1 (struct ib_device*,scalar_t__,struct ib_wc*,struct ib_grh*,struct ib_mad*,struct ib_mad*) ;

int FUNC_2(struct ib_device *VAR_3, int VAR_4, u8 VAR_5,
       struct ib_wc *VAR_6, struct ib_grh *VAR_7,
       struct ib_mad *VAR_8, struct ib_mad *VAR_9)
{
 int VAR_10;

 if (!VAR_5 || VAR_5 > VAR_3->phys_port_cnt || !VAR_6)
  return VAR_0;


 if (VAR_8->mad_hdr.mgmt_class != VAR_2)
  return VAR_1;

 FUNC_0(VAR_3, "port_num=%x src_qp=%x", VAR_5, VAR_6->src_qp);
 VAR_10 = FUNC_1(VAR_3, VAR_5, VAR_6, VAR_7,
    VAR_8, VAR_9);

 return VAR_10;
}
