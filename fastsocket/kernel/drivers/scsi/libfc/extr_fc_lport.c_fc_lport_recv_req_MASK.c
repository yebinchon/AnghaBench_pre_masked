
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_seq {int dummy; } ;
struct TYPE_2__ {int (* exch_done ) (struct fc_seq*) ;} ;
struct fc_lport {TYPE_1__ tt; } ;
struct fc_frame_header {size_t fh_type; } ;
struct fc_frame {int dummy; } ;
struct fc4_prov {int module; int (* recv ) (struct fc_lport*,struct fc_frame*) ;} ;


 size_t VAR_0 ;
 int FUNC_0 (struct fc_lport*,char*,size_t) ;
 int FUNC_1 (struct fc_frame*) ;
 struct fc_frame_header* FUNC_2 (struct fc_frame*) ;
 int * VAR_1 ;
 struct fc_seq* FUNC_3 (struct fc_frame*) ;
 int FUNC_4 (int ) ;
 struct fc4_prov* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_9 (struct fc_seq*) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct fc_lport *VAR_2,
         struct fc_frame *VAR_3)
{
 struct fc_frame_header *VAR_4 = FUNC_2(VAR_3);
 struct fc_seq *VAR_5 = FUNC_3(VAR_3);
 struct fc4_prov *VAR_6;
 FUNC_6();
 if (VAR_4->fh_type >= VAR_0)
  goto drop;
 VAR_6 = FUNC_5(VAR_1[VAR_4->fh_type]);
 if (!VAR_6 || !FUNC_10(VAR_6->module))
  goto drop;
 FUNC_7();
 VAR_6->recv(VAR_2, VAR_3);
 FUNC_4(VAR_6->module);
 return;
drop:
 FUNC_7();
 FUNC_0(VAR_2, "dropping unexpected frame type %x\n", VAR_4->fh_type);
 FUNC_1(VAR_3);
 VAR_2->tt.exch_done(VAR_5);
}
