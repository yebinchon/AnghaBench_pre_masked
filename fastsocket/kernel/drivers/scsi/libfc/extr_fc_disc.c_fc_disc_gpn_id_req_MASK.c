
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int port_id; } ;
struct fc_rport_priv {int kref; TYPE_2__ ids; } ;
struct fc_ns_fid {int dummy; } ;
struct TYPE_3__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;} ;
struct fc_lport {int r_a_tov; TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_ct_hdr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct fc_frame* FUNC_0 (struct fc_lport*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_rport_priv*,int) ;

__attribute__((used)) static int FUNC_3(struct fc_lport *VAR_3,
         struct fc_rport_priv *VAR_4)
{
 struct fc_frame *VAR_5;

 VAR_5 = FUNC_0(VAR_3, sizeof(struct fc_ct_hdr) +
       sizeof(struct fc_ns_fid));
 if (!VAR_5)
  return -VAR_0;
 if (!VAR_3->tt.elsct_send(VAR_3, VAR_4->ids.port_id, VAR_5, VAR_1,
      VAR_2, VAR_4,
      3 * VAR_3->r_a_tov))
  return -VAR_0;
 FUNC_1(&VAR_4->kref);
 return 0;
}
