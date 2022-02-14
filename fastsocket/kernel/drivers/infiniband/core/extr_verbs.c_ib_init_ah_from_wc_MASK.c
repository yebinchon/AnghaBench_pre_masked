
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct ib_wc {int wc_flags; int dlid_path_bits; int sl; int slid; } ;
struct ib_grh {int version_tclass_flow; int dgid; int sgid; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int flow_label; int hop_limit; int traffic_class; void* sgid_index; int dgid; } ;
struct ib_ah_attr {TYPE_1__ grh; int ah_flags; void* port_num; int src_path_bits; int sl; int dlid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device*,int *,void**,scalar_t__*) ;
 int FUNC_2 (struct ib_ah_attr*,int ,int) ;

int FUNC_3(struct ib_device *VAR_2, u8 VAR_3, struct ib_wc *VAR_4,
         struct ib_grh *VAR_5, struct ib_ah_attr *VAR_6)
{
 u32 VAR_7;
 u16 VAR_8;
 int VAR_9;

 FUNC_2(VAR_6, 0, sizeof *VAR_6);
 VAR_6->dlid = VAR_4->slid;
 VAR_6->sl = VAR_4->sl;
 VAR_6->src_path_bits = VAR_4->dlid_path_bits;
 VAR_6->port_num = VAR_3;

 if (VAR_4->wc_flags & VAR_1) {
  VAR_6->ah_flags = VAR_0;
  VAR_6->grh.dgid = VAR_5->sgid;

  VAR_9 = FUNC_1(VAR_2, &VAR_5->dgid, &VAR_3,
      &VAR_8);
  if (VAR_9)
   return VAR_9;

  VAR_6->grh.sgid_index = (u8) VAR_8;
  VAR_7 = FUNC_0(VAR_5->version_tclass_flow);
  VAR_6->grh.flow_label = VAR_7 & 0xFFFFF;
  VAR_6->grh.hop_limit = 0xFF;
  VAR_6->grh.traffic_class = (VAR_7 >> 20) & 0xFF;
 }
 return 0;
}
