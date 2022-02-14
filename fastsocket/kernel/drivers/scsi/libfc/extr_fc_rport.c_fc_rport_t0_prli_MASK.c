
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fc_rport_priv {int dummy; } ;
struct fc_els_spp {int spp_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct fc_rport_priv *VAR_3, u32 VAR_4,
       const struct fc_els_spp *VAR_5,
       struct fc_els_spp *VAR_6)
{
 if (VAR_5->spp_flags & VAR_0)
  return VAR_2;
 return VAR_1;
}
