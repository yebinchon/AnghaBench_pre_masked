
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct ib_sa_mcmember_data {int scope_join_state; } ;
struct mcast_group {int timeout_work; TYPE_3__* demux; int state; struct ib_sa_mcmember_data rec; int last_req_tid; } ;
struct TYPE_6__ {int sm_key; int comp_mask; void* attr_offset; } ;
struct TYPE_5__ {int base_version; int class_version; int attr_mod; void* attr_id; int tid; void* class_specific; void* status; int method; int mgmt_class; } ;
struct ib_sa_mad {TYPE_2__ sa_hdr; TYPE_1__ mad_hdr; int data; } ;
struct ib_mad {int dummy; } ;
struct TYPE_7__ {int mcg_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_sa_mad*,int ,int) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (TYPE_3__*,struct ib_mad*) ;

__attribute__((used)) static int FUNC_7(struct mcast_group *VAR_8, u8 VAR_9)
{
 struct ib_sa_mad VAR_10;
 struct ib_sa_mcmember_data *VAR_11 = (struct ib_sa_mcmember_data *)&VAR_10.data;
 int VAR_12;

 FUNC_2(&VAR_10, 0, sizeof VAR_10);
 VAR_10.mad_hdr.base_version = 1;
 VAR_10.mad_hdr.mgmt_class = VAR_0;
 VAR_10.mad_hdr.class_version = 2;
 VAR_10.mad_hdr.method = VAR_5;
 VAR_10.mad_hdr.status = FUNC_0(0);
 VAR_10.mad_hdr.class_specific = FUNC_0(0);
 VAR_10.mad_hdr.tid = FUNC_3(VAR_8->demux);
 VAR_8->last_req_tid = VAR_10.mad_hdr.tid;
 VAR_10.mad_hdr.attr_id = FUNC_0(VAR_1);
 VAR_10.mad_hdr.attr_mod = FUNC_1(0);
 VAR_10.sa_hdr.sm_key = 0x0;
 VAR_10.sa_hdr.attr_offset = FUNC_0(7);
 VAR_10.sa_hdr.comp_mask = VAR_3 |
  VAR_4 | VAR_2;

 *VAR_11 = VAR_8->rec;
 VAR_11->scope_join_state = VAR_9;

 VAR_12 = FUNC_6(VAR_8->demux, (struct ib_mad *)&VAR_10);
 if (VAR_12)
  VAR_8->state = VAR_7;


 if (!VAR_12) {

  FUNC_5(VAR_8->demux->mcg_wq, &VAR_8->timeout_work,
    FUNC_4(VAR_6));
 }

 return VAR_12;
}
