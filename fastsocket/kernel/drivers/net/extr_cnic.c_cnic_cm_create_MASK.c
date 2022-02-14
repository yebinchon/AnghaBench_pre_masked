
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cnic_sock {size_t cid; size_t l5_cid; int ulp_type; int seed; int snd_buf; int rcv_buf; int snd_seq_scale; int ttl; int tos; int ka_max_probe_count; int ka_interval; int ka_timeout; void* context; struct cnic_dev* dev; int flags; int ref_count; } ;
struct cnic_local {struct cnic_sock* csk_tbl; struct cnic_context* ctx_tbl; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct cnic_context {int ctx_flags; } ;


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
 size_t VAR_13 ;
 int VAR_14 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static int FUNC_3(struct cnic_dev *VAR_15, int VAR_16, u32 VAR_17,
     u32 VAR_18, struct cnic_sock **VAR_19, void *VAR_20)
{
 struct cnic_local *VAR_21 = VAR_15->cnic_priv;
 struct cnic_sock *VAR_22;

 if (VAR_18 >= VAR_13)
  return -VAR_12;

 if (VAR_21->ctx_tbl) {
  struct cnic_context *VAR_23 = &VAR_21->ctx_tbl[VAR_18];

  if (FUNC_2(VAR_0, &VAR_23->ctx_flags))
   return -VAR_10;
 }

 VAR_22 = &VAR_21->csk_tbl[VAR_18];
 if (FUNC_0(&VAR_22->ref_count))
  return -VAR_10;

 if (FUNC_1(VAR_14, &VAR_22->flags))
  return -VAR_11;

 VAR_22->dev = VAR_15;
 VAR_22->cid = VAR_17;
 VAR_22->l5_cid = VAR_18;
 VAR_22->ulp_type = VAR_16;
 VAR_22->context = VAR_20;

 VAR_22->ka_timeout = VAR_3;
 VAR_22->ka_interval = VAR_1;
 VAR_22->ka_max_probe_count = VAR_2;
 VAR_22->tos = VAR_8;
 VAR_22->ttl = VAR_9;
 VAR_22->snd_seq_scale = VAR_7;
 VAR_22->rcv_buf = VAR_4;
 VAR_22->snd_buf = VAR_6;
 VAR_22->seed = VAR_5;

 *VAR_19 = VAR_22;
 return 0;
}
