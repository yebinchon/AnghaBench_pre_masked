
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* wwn_t ;
typedef int u32 ;
typedef int u16 ;
struct fchs_s {int dummy; } ;
struct TYPE_4__ {int rxsz; } ;
struct TYPE_6__ {int rxsz; } ;
struct TYPE_5__ {int els_code; } ;
struct fc_logi_s {void* node_name; void* port_name; TYPE_1__ class3; TYPE_3__ csp; TYPE_2__ els_cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct fchs_s*,int ,int ,int) ;
 int FUNC_3 (struct fc_logi_s*,int *,int) ;
 int VAR_2 ;

u16
FUNC_4(struct fchs_s *VAR_3, struct fc_logi_s *VAR_4, u32 VAR_5,
  u16 VAR_6, wwn_t VAR_7, wwn_t VAR_8, u16 VAR_9)
{
 u32 VAR_10 = FUNC_0(VAR_1);

 FUNC_3(VAR_4, &VAR_2, sizeof(struct fc_logi_s));

 VAR_4->els_cmd.els_code = VAR_0;
 FUNC_2(VAR_3, VAR_10, VAR_5, VAR_6);

 VAR_4->csp.rxsz = VAR_4->class3.rxsz = FUNC_1(VAR_9);
 VAR_4->port_name = VAR_7;
 VAR_4->node_name = VAR_8;

 return sizeof(struct fc_logi_s);
}
