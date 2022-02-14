
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int roles; } ;
struct fc_rport_priv {int supported_classes; int flags; TYPE_1__ ids; struct fc_lport* local_port; } ;
struct fc_lport {int service_params; } ;
struct fc_els_spp {int spp_flags; int spp_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct fc_rport_priv *VAR_10, u32 VAR_11,
        const struct fc_els_spp *VAR_12,
        struct fc_els_spp *VAR_13)
{
 struct fc_lport *VAR_14 = VAR_10->local_port;
 u32 VAR_15;

 VAR_15 = FUNC_1(VAR_12->spp_params);
 VAR_10->ids.roles = VAR_6;
 if (VAR_15 & VAR_0)
  VAR_10->ids.roles |= VAR_4;
 if (VAR_15 & VAR_2)
  VAR_10->ids.roles |= VAR_5;
 if (VAR_15 & VAR_1)
  VAR_10->flags |= VAR_7;
 VAR_10->supported_classes = VAR_3;

 if (!(VAR_14->service_params & VAR_0))
  return 0;

 VAR_13->spp_flags |= VAR_12->spp_flags & VAR_8;




 VAR_15 = FUNC_1(VAR_13->spp_params);
 VAR_13->spp_params = FUNC_0(VAR_15 | VAR_14->service_params);
 return VAR_9;
}
