
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ft_tport {int tpg; } ;
struct ft_sess {int params; int max_frame; int port_name; } ;
struct ft_node_acl {int dummy; } ;
struct TYPE_2__ {int port_name; int port_id; } ;
struct fc_rport_priv {int maxframe_size; TYPE_1__ ids; int prli_count; int local_port; } ;
struct fc_els_spp {int spp_flags; void* spp_params; } ;


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
 int VAR_10 ;
 struct ft_node_acl* FUNC_0 (int ,struct fc_rport_priv*) ;
 struct ft_sess* FUNC_1 (struct ft_tport*,int ,struct ft_node_acl*) ;
 struct ft_tport* FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (void*) ;

__attribute__((used)) static int FUNC_5(struct fc_rport_priv *VAR_11, u32 VAR_12,
     const struct fc_els_spp *VAR_13, struct fc_els_spp *VAR_14)
{
 struct ft_tport *VAR_15;
 struct ft_sess *VAR_16;
 struct ft_node_acl *VAR_17;
 u32 VAR_18;

 VAR_15 = FUNC_2(VAR_11->local_port);
 if (!VAR_15)
  goto not_target;

 VAR_17 = FUNC_0(VAR_15->tpg, VAR_11);
 if (!VAR_17)
  goto not_target;

 if (!VAR_13)
  goto fill;

 if (VAR_13->spp_flags & (VAR_4 | VAR_10))
  return VAR_8;




 VAR_18 = FUNC_4(VAR_13->spp_params);
 if (!(VAR_18 & (VAR_0 | VAR_2)))
  return VAR_7;





 if (VAR_13->spp_flags & VAR_3) {
  VAR_14->spp_flags |= VAR_3;
  if (!(VAR_18 & VAR_0))
   return VAR_6;
  VAR_16 = FUNC_1(VAR_15, VAR_11->ids.port_id, VAR_17);
  if (!VAR_16)
   return VAR_9;
  if (!VAR_16->params)
   VAR_11->prli_count++;
  VAR_16->params = VAR_18;
  VAR_16->port_name = VAR_11->ids.port_name;
  VAR_16->max_frame = VAR_11->maxframe_size;


 }




fill:
 VAR_18 = FUNC_4(VAR_14->spp_params);
 VAR_18 &= ~VAR_1;
 VAR_14->spp_params = FUNC_3(VAR_18 | VAR_2);
 return VAR_5;

not_target:
 VAR_18 = FUNC_4(VAR_14->spp_params);
 VAR_18 &= ~VAR_2;
 VAR_14->spp_params = FUNC_3(VAR_18);
 return 0;
}
