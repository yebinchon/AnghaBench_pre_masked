
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fcoe_port {struct bnx2fc_interface* priv; } ;
typedef void fcoe_ctlr ;
struct fc_seq {int dummy; } ;
struct fc_lport {int dummy; } ;
struct fc_frame_header {int fh_d_id; } ;
struct fc_frame {int dummy; } ;
struct bnx2fc_interface {int dummy; } ;





 int VAR_0 ;
 void FUNC_0 (struct fc_seq*,struct fc_frame*,void*) ;
 void FUNC_1 (struct fc_seq*,struct fc_frame*,void*) ;
 void* FUNC_2 (struct bnx2fc_interface*) ;
 struct fc_seq* FUNC_3 (struct fc_lport*,int ,struct fc_frame*,unsigned int,void (*) (struct fc_seq*,struct fc_frame*,void*),void*,int ) ;
 struct fc_frame_header* FUNC_4 (struct fc_frame*) ;
 struct fcoe_port* FUNC_5 (struct fc_lport*) ;
 int FUNC_6 (int ) ;

struct fc_seq *FUNC_7(struct fc_lport *VAR_1, u32 VAR_2,
          struct fc_frame *VAR_3, unsigned int VAR_4,
          void (*VAR_5)(struct fc_seq *,
         struct fc_frame *,
         void *),
          void *VAR_6, u32 VAR_7)
{
 struct fcoe_port *VAR_8 = FUNC_5(VAR_1);
 struct bnx2fc_interface *VAR_9 = VAR_8->priv;
 struct fcoe_ctlr *VAR_10 = FUNC_2(VAR_9);
 struct fc_frame_header *VAR_11 = FUNC_4(VAR_3);

 switch (VAR_4) {
 case 129:
 case 130:
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, FUNC_0,
         VAR_10, VAR_7);
 case 128:

  if (FUNC_6(VAR_11->fh_d_id) != VAR_0)
   break;
  return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, FUNC_1,
         VAR_10, VAR_7);
 }
 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
}
