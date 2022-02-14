
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u8 ;
struct ib_smp {int* data; void* attr_mod; int attr_id; } ;
struct ib_port_attr {int lmc; int sm_sl; int state; int phys_state; int port_cap_flags; int gid_tbl_len; int active_width; int active_speed; int max_mtu; int active_mtu; int subnet_timeout; int max_vl_num; int init_type_reply; void* qkey_viol_cntr; void* bad_pkey_cntr; int pkey_tbl_len; int max_msg_sz; void* sm_lid; void* lid; } ;
struct ib_device {int dummy; } ;
typedef int __be32 ;
typedef int __be16 ;
struct TYPE_5__ {int* gid_table_len; int * pkey_table_len; int max_msg_sz; } ;
struct TYPE_7__ {TYPE_1__ caps; } ;
struct TYPE_6__ {TYPE_3__* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 (size_t) ;
 int FUNC_3 (struct ib_smp*) ;
 int FUNC_4 (struct ib_smp*) ;
 struct ib_smp* FUNC_5 (int,int ) ;
 struct ib_smp* FUNC_6 (int,int ) ;
 int FUNC_7 (TYPE_2__*,int,size_t,int *,int *,struct ib_smp*,struct ib_smp*) ;
 scalar_t__ FUNC_8 (TYPE_3__*) ;
 TYPE_2__* FUNC_9 (struct ib_device*) ;

__attribute__((used)) static int FUNC_10(struct ib_device *VAR_13, u8 VAR_14,
         struct ib_port_attr *VAR_15, int VAR_16)
{
 struct ib_smp *VAR_17 = ((void*)0);
 struct ib_smp *VAR_18 = ((void*)0);
 int VAR_19;
 int VAR_20 = VAR_11;
 int VAR_21 = -VAR_0;

 VAR_17 = FUNC_6(sizeof *VAR_17, VAR_1);
 VAR_18 = FUNC_5(sizeof *VAR_18, VAR_1);
 if (!VAR_17 || !VAR_18)
  goto out;

 FUNC_3(VAR_17);
 VAR_17->attr_id = VAR_4;
 VAR_17->attr_mod = FUNC_2(VAR_14);

 if (FUNC_8(FUNC_9(VAR_13)->dev) && VAR_16)
  VAR_20 |= VAR_12;

 VAR_21 = FUNC_7(FUNC_9(VAR_13), VAR_20, VAR_14, ((void*)0), ((void*)0),
    VAR_17, VAR_18);
 if (VAR_21)
  goto out;


 VAR_15->lid = FUNC_0((__be16 *) (VAR_18->data + 16));
 VAR_15->lmc = VAR_18->data[34] & 0x7;
 VAR_15->sm_lid = FUNC_0((__be16 *) (VAR_18->data + 18));
 VAR_15->sm_sl = VAR_18->data[36] & 0xf;
 VAR_15->state = VAR_18->data[32] & 0xf;
 VAR_15->phys_state = VAR_18->data[33] >> 4;
 VAR_15->port_cap_flags = FUNC_1((__be32 *) (VAR_18->data + 20));
 if (VAR_16)
  VAR_15->gid_tbl_len = VAR_18->data[50];
 else
  VAR_15->gid_tbl_len = FUNC_9(VAR_13)->dev->caps.gid_table_len[VAR_14];
 VAR_15->max_msg_sz = FUNC_9(VAR_13)->dev->caps.max_msg_sz;
 VAR_15->pkey_tbl_len = FUNC_9(VAR_13)->dev->caps.pkey_table_len[VAR_14];
 VAR_15->bad_pkey_cntr = FUNC_0((__be16 *) (VAR_18->data + 46));
 VAR_15->qkey_viol_cntr = FUNC_0((__be16 *) (VAR_18->data + 48));
 VAR_15->active_width = VAR_18->data[31] & 0xf;
 VAR_15->active_speed = VAR_18->data[35] >> 4;
 VAR_15->max_mtu = VAR_18->data[41] & 0xf;
 VAR_15->active_mtu = VAR_18->data[36] >> 4;
 VAR_15->subnet_timeout = VAR_18->data[51] & 0x1f;
 VAR_15->max_vl_num = VAR_18->data[37] >> 4;
 VAR_15->init_type_reply = VAR_18->data[41] >> 4;


 if (VAR_15->port_cap_flags & VAR_3) {
  VAR_19 = VAR_18->data[62] >> 4;

  switch (VAR_19) {
  case 1:
   VAR_15->active_speed = VAR_6;
   break;
  case 2:
   VAR_15->active_speed = VAR_5;
   break;
  }
 }


 if (VAR_15->active_speed == VAR_8) {
  FUNC_3(VAR_17);
  VAR_17->attr_id = VAR_10;
  VAR_17->attr_mod = FUNC_2(VAR_14);

  VAR_21 = FUNC_7(FUNC_9(VAR_13), VAR_20, VAR_14,
       ((void*)0), ((void*)0), VAR_17, VAR_18);
  if (VAR_21)
   goto out;


  if (VAR_18->data[15] & 0x1)
   VAR_15->active_speed = VAR_7;
 }


 if (VAR_15->state == VAR_2)
   VAR_15->active_speed = VAR_9;

out:
 FUNC_4(VAR_17);
 FUNC_4(VAR_18);
 return VAR_21;
}
