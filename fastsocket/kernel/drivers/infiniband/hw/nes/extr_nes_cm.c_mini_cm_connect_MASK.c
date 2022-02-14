
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u16 ;
struct nes_vnic {int local_ipaddr; } ;
struct TYPE_2__ {int client; void* rcv_wscale; void* snd_wscale; int rcv_wnd; int snd_wnd; int max_snd_wnd; int loc_seq_num; int rcv_nxt; } ;
struct nes_cm_node {int cm_id; int rem_port; int rem_addr; int cm_core; int state; void* mpa_frame_size; int * mpa_frame_buf; TYPE_1__ tcp_cntxt; struct nes_cm_node* loopbackpartner; } ;
struct nes_cm_listener {int cm_id; } ;
struct nes_cm_info {scalar_t__ loc_addr; scalar_t__ rem_addr; int cm_id; int loc_port; int rem_port; } ;
struct nes_cm_core {int dummy; } ;
struct ietf_mpa_v2 {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *) ;
 int VAR_8 ;
 int FUNC_1 (struct nes_cm_node*,int ) ;
 struct nes_cm_listener* FUNC_2 (struct nes_cm_core*,int ,int ,int ) ;
 struct nes_cm_node* FUNC_3 (struct nes_cm_core*,struct nes_vnic*,struct nes_cm_info*,struct nes_cm_listener*) ;
 int FUNC_4 (int *,void*,void*) ;
 int FUNC_5 (int ,char*,int ,int ,struct nes_cm_node*,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,struct nes_cm_node*) ;
 int FUNC_8 (struct nes_cm_node*,int ,int *) ;

__attribute__((used)) static struct nes_cm_node *FUNC_9(struct nes_cm_core *VAR_9,
        struct nes_vnic *VAR_10, u16 VAR_11,
        void *VAR_12, struct nes_cm_info *VAR_13)
{
 int VAR_14 = 0;
 struct nes_cm_node *VAR_15;
 struct nes_cm_listener *VAR_16;
 struct nes_cm_node *VAR_17;
 struct nes_cm_info VAR_18;
 u8 *VAR_19;


 VAR_15 = FUNC_3(VAR_9, VAR_10, VAR_13, ((void*)0));
 if (!VAR_15)
  return ((void*)0);


 VAR_15->tcp_cntxt.client = 1;
 VAR_15->tcp_cntxt.rcv_wscale = VAR_0;

 if (VAR_13->loc_addr == VAR_13->rem_addr) {
  VAR_16 = FUNC_2(VAR_9,
             FUNC_6(VAR_10->local_ipaddr), VAR_15->rem_port,
             VAR_3);
  if (VAR_16 == ((void*)0)) {
   FUNC_1(VAR_15, VAR_1);
  } else {
   VAR_18 = *VAR_13;
   VAR_18.loc_port = VAR_13->rem_port;
   VAR_18.rem_port = VAR_13->loc_port;
   VAR_18.cm_id = VAR_16->cm_id;
   VAR_17 = FUNC_3(VAR_9, VAR_10,
         &VAR_18, VAR_16);
   if (!VAR_17) {
    FUNC_7(VAR_15->cm_core, VAR_15);
    return ((void*)0);
   }
   FUNC_0(&VAR_8);
   VAR_17->loopbackpartner = VAR_15;
   VAR_17->tcp_cntxt.rcv_wscale =
    VAR_0;
   VAR_15->loopbackpartner = VAR_17;
   FUNC_4(VAR_17->mpa_frame_buf, VAR_12,
          VAR_11);
   VAR_17->mpa_frame_size = VAR_11;



   VAR_15->state = VAR_6;
   VAR_15->tcp_cntxt.rcv_nxt =
    VAR_17->tcp_cntxt.loc_seq_num;
   VAR_17->tcp_cntxt.rcv_nxt =
    VAR_15->tcp_cntxt.loc_seq_num;
   VAR_15->tcp_cntxt.max_snd_wnd =
    VAR_17->tcp_cntxt.rcv_wnd;
   VAR_17->tcp_cntxt.max_snd_wnd =
    VAR_15->tcp_cntxt.rcv_wnd;
   VAR_15->tcp_cntxt.snd_wnd =
    VAR_17->tcp_cntxt.rcv_wnd;
   VAR_17->tcp_cntxt.snd_wnd =
    VAR_15->tcp_cntxt.rcv_wnd;
   VAR_15->tcp_cntxt.snd_wscale =
    VAR_17->tcp_cntxt.rcv_wscale;
   VAR_17->tcp_cntxt.snd_wscale =
    VAR_15->tcp_cntxt.rcv_wscale;
   VAR_17->state = VAR_4;
   FUNC_1(VAR_17, VAR_2);
  }
  return VAR_15;
 }

 VAR_19 = &VAR_15->mpa_frame_buf[0] + sizeof(struct ietf_mpa_v2);
 VAR_15->mpa_frame_size = VAR_11;

 FUNC_4(VAR_19, VAR_12, VAR_11);


 VAR_15->state = VAR_5;
 VAR_14 = FUNC_8(VAR_15, 0, ((void*)0));

 if (VAR_14) {

  FUNC_5(VAR_7, "Api - connect() FAILED: dest "
     "addr=0x%08X, port=0x%04x, cm_node=%p, cm_id = %p.\n",
     VAR_15->rem_addr, VAR_15->rem_port, VAR_15,
     VAR_15->cm_id);
  FUNC_7(VAR_15->cm_core, VAR_15);
  VAR_15 = ((void*)0);
 }

 if (VAR_15) {
  FUNC_5(VAR_7, "Api - connect(): dest addr=0x%08X,"
     "port=0x%04x, cm_node=%p, cm_id = %p.\n",
     VAR_15->rem_addr, VAR_15->rem_port, VAR_15,
     VAR_15->cm_id);
 }

 return VAR_15;
}
