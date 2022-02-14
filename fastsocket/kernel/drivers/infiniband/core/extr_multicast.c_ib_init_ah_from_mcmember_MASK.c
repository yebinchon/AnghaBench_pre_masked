
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef scalar_t__ u16 ;
struct ib_sa_mcmember_rec {int traffic_class; int hop_limit; int flow_label; int mgid; int rate; int sl; int mlid; int port_gid; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int traffic_class; int hop_limit; int flow_label; void* sgid_index; int dgid; } ;
struct ib_ah_attr {TYPE_1__ grh; int ah_flags; int static_rate; void* port_num; int sl; int dlid; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_device*,int *,void**,scalar_t__*) ;
 int FUNC_3 (struct ib_ah_attr*,int ,int) ;

int FUNC_4(struct ib_device *VAR_1, u8 VAR_2,
        struct ib_sa_mcmember_rec *VAR_3,
        struct ib_ah_attr *VAR_4)
{
 int VAR_5;
 u16 VAR_6;
 u8 VAR_7;

 VAR_5 = FUNC_2(VAR_1, &VAR_3->port_gid, &VAR_7, &VAR_6);
 if (VAR_5)
  return VAR_5;

 FUNC_3(VAR_4, 0, sizeof *VAR_4);
 VAR_4->dlid = FUNC_0(VAR_3->mlid);
 VAR_4->sl = VAR_3->sl;
 VAR_4->port_num = VAR_2;
 VAR_4->static_rate = VAR_3->rate;

 VAR_4->ah_flags = VAR_0;
 VAR_4->grh.dgid = VAR_3->mgid;

 VAR_4->grh.sgid_index = (u8) VAR_6;
 VAR_4->grh.flow_label = FUNC_1(VAR_3->flow_label);
 VAR_4->grh.hop_limit = VAR_3->hop_limit;
 VAR_4->grh.traffic_class = VAR_3->traffic_class;

 return 0;
}
