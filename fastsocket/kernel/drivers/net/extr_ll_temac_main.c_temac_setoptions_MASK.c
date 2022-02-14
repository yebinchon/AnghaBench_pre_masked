
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temac_option {int opt; int m_or; int reg; } ;
struct temac_local {int options; int indirect_mutex; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct temac_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct temac_local*,int ) ;
 int FUNC_4 (struct temac_local*,int ,int) ;
 struct temac_option* VAR_0 ;

__attribute__((used)) static u32 FUNC_5(struct net_device *VAR_1, u32 VAR_2)
{
 struct temac_local *VAR_3 = FUNC_2(VAR_1);
 struct temac_option *VAR_4 = &VAR_0[0];
 int VAR_5;

 FUNC_0(&VAR_3->indirect_mutex);
 while (VAR_4->opt) {
  VAR_5 = FUNC_3(VAR_3, VAR_4->reg) & ~VAR_4->m_or;
  if (VAR_2 & VAR_4->opt)
   VAR_5 |= VAR_4->m_or;
  FUNC_4(VAR_3, VAR_4->reg, VAR_5);
  VAR_4++;
 }
 VAR_3->options |= VAR_2;
 FUNC_1(&VAR_3->indirect_mutex);

 return (0);
}
