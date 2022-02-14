
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct emac_instance {int emacp; int cell_index; } ;
struct emac_ethtool_regs_subhdr {int version; int index; } ;


 int FUNC_0 (struct emac_instance*) ;
 int VAR_0 ;
 int FUNC_1 (struct emac_instance*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct emac_instance*,int ) ;
 int FUNC_3 (struct emac_ethtool_regs_subhdr*,int ,int) ;

__attribute__((used)) static void *FUNC_4(struct emac_instance *VAR_3, void *VAR_4)
{
 struct emac_ethtool_regs_subhdr *VAR_5 = VAR_4;

 VAR_5->index = VAR_3->cell_index;
 if (FUNC_2(VAR_3, VAR_2)) {
  VAR_5->version = VAR_0;
  FUNC_3(VAR_5 + 1, VAR_3->emacp, FUNC_0(VAR_3));
  return ((void *)(VAR_5 + 1) + FUNC_0(VAR_3));
 } else {
  VAR_5->version = VAR_1;
  FUNC_3(VAR_5 + 1, VAR_3->emacp, FUNC_1(VAR_3));
  return ((void *)(VAR_5 + 1) + FUNC_1(VAR_3));
 }
}
