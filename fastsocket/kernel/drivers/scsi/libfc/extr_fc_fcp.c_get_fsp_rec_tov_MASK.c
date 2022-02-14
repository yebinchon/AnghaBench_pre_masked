
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fc_rport_libfc_priv {int e_d_tov; } ;
struct fc_fcp_pkt {TYPE_1__* rport; } ;
struct TYPE_2__ {struct fc_rport_libfc_priv* dd_data; } ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(struct fc_fcp_pkt *VAR_1)
{
 struct fc_rport_libfc_priv *VAR_2 = VAR_1->rport->dd_data;

 return FUNC_0(VAR_2->e_d_tov) + VAR_0;
}
