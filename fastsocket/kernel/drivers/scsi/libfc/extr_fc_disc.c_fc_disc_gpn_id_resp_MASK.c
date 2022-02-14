
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct fc_seq {int dummy; } ;
struct TYPE_3__ {int port_name; int port_id; } ;
struct fc_rport_priv {int kref; int disc_id; TYPE_1__ ids; struct fc_lport* local_port; } ;
struct fc_ns_gid_pn {int fn_wwpn; } ;
struct TYPE_4__ {int rport_destroy; int (* rport_logoff ) (struct fc_rport_priv*) ;int (* rport_login ) (struct fc_rport_priv*) ;struct fc_rport_priv* (* rport_create ) (struct fc_lport*,int ) ;} ;
struct fc_disc {int disc_mutex; int disc_id; } ;
struct fc_lport {TYPE_2__ tt; struct fc_disc disc; } ;
struct fc_frame_header {int dummy; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int ct_cmd; int ct_explan; int ct_reason; } ;


 int FUNC_0 (struct fc_disc*,char*,scalar_t__,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_frame*) ;
 int FUNC_3 (struct fc_disc*) ;
 struct fc_ct_hdr* FUNC_4 (struct fc_frame*,int) ;
 int FUNC_5 (struct fc_frame*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (struct fc_rport_priv*) ;
 struct fc_rport_priv* FUNC_12 (struct fc_lport*,int ) ;
 int FUNC_13 (struct fc_rport_priv*) ;
 int FUNC_14 (struct fc_rport_priv*) ;
 int FUNC_15 (struct fc_rport_priv*) ;

__attribute__((used)) static void FUNC_16(struct fc_seq *VAR_3, struct fc_frame *VAR_4,
    void *VAR_5)
{
 struct fc_rport_priv *VAR_6 = VAR_5;
 struct fc_rport_priv *VAR_7;
 struct fc_lport *VAR_8;
 struct fc_disc *VAR_9;
 struct fc_ct_hdr *VAR_10;
 struct fc_ns_gid_pn *VAR_11;
 u64 VAR_12;

 VAR_8 = VAR_6->local_port;
 VAR_9 = &VAR_8->disc;

 FUNC_8(&VAR_9->disc_mutex);
 if (FUNC_2(VAR_4) == -VAR_0)
  goto out;
 if (FUNC_1(VAR_4))
  goto redisc;

 VAR_10 = FUNC_4(VAR_4, sizeof(*VAR_10));
 if (!VAR_10)
  goto redisc;
 if (FUNC_10(VAR_10->ct_cmd) == VAR_1) {
  if (FUNC_5(VAR_4) < sizeof(struct fc_frame_header) +
      sizeof(*VAR_10) + sizeof(*VAR_11))
   goto redisc;
  VAR_11 = (struct fc_ns_gid_pn *)(VAR_10 + 1);
  VAR_12 = FUNC_6(&VAR_11->fn_wwpn);
  if (VAR_6->ids.port_name == -1)
   VAR_6->ids.port_name = VAR_12;
  else if (VAR_6->ids.port_name != VAR_12) {
   FUNC_0(VAR_9, "GPN_ID accepted.  WWPN changed. "
        "Port-id %6.6x wwpn %16.16llx\n",
        VAR_6->ids.port_id, VAR_12);
   VAR_8->tt.rport_logoff(VAR_6);

   VAR_7 = VAR_8->tt.rport_create(VAR_8,
          VAR_6->ids.port_id);
   if (VAR_7) {
    VAR_7->disc_id = VAR_9->disc_id;
    VAR_8->tt.rport_login(VAR_7);
   }
   goto out;
  }
  VAR_6->disc_id = VAR_9->disc_id;
  VAR_8->tt.rport_login(VAR_6);
 } else if (FUNC_10(VAR_10->ct_cmd) == VAR_2) {
  FUNC_0(VAR_9, "GPN_ID rejected reason %x exp %x\n",
       VAR_10->ct_reason, VAR_10->ct_explan);
  VAR_8->tt.rport_logoff(VAR_6);
 } else {
  FUNC_0(VAR_9, "GPN_ID unexpected response code %x\n",
       FUNC_10(VAR_10->ct_cmd));
redisc:
  FUNC_3(VAR_9);
 }
out:
 FUNC_9(&VAR_9->disc_mutex);
 FUNC_7(&VAR_6->kref, VAR_8->tt.rport_destroy);
}
