
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_ns_gid_ft {int dummy; } ;
struct TYPE_2__ {scalar_t__ (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_disc*,int) ;} ;
struct fc_lport {int r_a_tov; TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_disc {int pending; scalar_t__ seq_count; scalar_t__ buf_len; scalar_t__ requested; } ;
struct fc_ct_hdr {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fc_disc*,int *) ;
 int VAR_1 ;
 struct fc_lport* FUNC_2 (struct fc_disc*) ;
 struct fc_frame* FUNC_3 (struct fc_lport*,int) ;
 int FUNC_4 (struct fc_lport*) ;
 scalar_t__ FUNC_5 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_disc*,int) ;

__attribute__((used)) static void FUNC_6(struct fc_disc *VAR_2)
{
 struct fc_frame *VAR_3;
 struct fc_lport *VAR_4 = FUNC_2(VAR_2);

 FUNC_0(!FUNC_4(VAR_4));

 VAR_2->pending = 1;
 VAR_2->requested = 0;

 VAR_2->buf_len = 0;
 VAR_2->seq_count = 0;
 VAR_3 = FUNC_3(VAR_4,
       sizeof(struct fc_ct_hdr) +
       sizeof(struct fc_ns_gid_ft));
 if (!VAR_3)
  goto err;

 if (VAR_4->tt.elsct_send(VAR_4, 0, VAR_3,
     VAR_0,
     VAR_1,
     VAR_2, 3 * VAR_4->r_a_tov))
  return;
err:
 FUNC_1(VAR_2, ((void*)0));
}
