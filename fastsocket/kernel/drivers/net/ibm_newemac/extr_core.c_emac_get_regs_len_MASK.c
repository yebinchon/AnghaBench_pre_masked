
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {int dummy; } ;
struct emac_ethtool_regs_subhdr {int dummy; } ;


 int FUNC_0 (struct emac_instance*) ;
 int FUNC_1 (struct emac_instance*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct emac_instance*,int ) ;

__attribute__((used)) static int FUNC_3(struct emac_instance *VAR_1)
{
 if (FUNC_2(VAR_1, VAR_0))
  return sizeof(struct emac_ethtool_regs_subhdr) +
   FUNC_0(VAR_1);
 else
  return sizeof(struct emac_ethtool_regs_subhdr) +
   FUNC_1(VAR_1);
}
