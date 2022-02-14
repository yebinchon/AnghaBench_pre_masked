
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* wwn_t ;
typedef void* u8 ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_6__ {int npiv_supp; void* bbcred; void* security; void* ciro; void* rxsz; } ;
struct TYPE_5__ {void* rxsz; } ;
struct TYPE_4__ {int els_code; } ;
struct fc_logi_s {TYPE_3__ csp; int * vvl; void* node_name; void* port_name; TYPE_2__ class3; TYPE_1__ els_cmd; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct fchs_s*,int ,int ,int) ;
 int FUNC_4 (struct fc_logi_s*,int *,int) ;
 int VAR_3 ;

u16
FUNC_5(struct fchs_s *VAR_4, struct fc_logi_s *VAR_5, u32 VAR_6,
  u16 VAR_7, wwn_t VAR_8, wwn_t VAR_9, u16 VAR_10,
        u8 VAR_11, u8 VAR_12, u16 VAR_13)
{
 u32 VAR_14 = FUNC_0(VAR_1);
 __be32 *VAR_15;

 FUNC_4(VAR_5, &VAR_3, sizeof(struct fc_logi_s));

 VAR_5->els_cmd.els_code = VAR_0;
 FUNC_3(VAR_4, VAR_14, VAR_6, VAR_7);

 VAR_5->csp.rxsz = VAR_5->class3.rxsz = FUNC_1(VAR_10);
 VAR_5->port_name = VAR_8;
 VAR_5->node_name = VAR_9;





 VAR_5->csp.ciro = VAR_11;


 VAR_5->csp.security = VAR_12;

 VAR_5->csp.bbcred = FUNC_1(VAR_13);


 VAR_15 = (u32 *)&VAR_5->vvl[0];


 VAR_5->csp.npiv_supp = 1;
 VAR_15[0] = FUNC_2(VAR_2);

 return sizeof(struct fc_logi_s);
}
