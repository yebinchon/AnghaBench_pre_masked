
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
struct TYPE_5__ {int rxsz; } ;
struct TYPE_4__ {int rxsz; } ;
struct TYPE_6__ {int els_code; } ;
struct fc_logi_s {void* node_name; void* port_name; TYPE_2__ class3; TYPE_1__ csp; TYPE_3__ els_cmd; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct fchs_s*,int ,int ,int) ;
 int FUNC_2 (struct fc_logi_s*,int *,int) ;
 int VAR_1 ;

u16
FUNC_3(struct fchs_s *VAR_2, u32 VAR_3, u32 VAR_4, u16 VAR_5,
        wwn_t VAR_6, wwn_t VAR_7, u16 VAR_8)
{
 struct fc_logi_s *VAR_9 = (struct fc_logi_s *) (VAR_2 + 1);

 FUNC_2(VAR_9, &VAR_1, sizeof(struct fc_logi_s));

 VAR_9->els_cmd.els_code = VAR_0;
 FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_9->csp.rxsz = VAR_9->class3.rxsz = FUNC_0(VAR_8);
 VAR_9->port_name = VAR_6;
 VAR_9->node_name = VAR_7;

 return sizeof(struct fc_logi_s);
}
