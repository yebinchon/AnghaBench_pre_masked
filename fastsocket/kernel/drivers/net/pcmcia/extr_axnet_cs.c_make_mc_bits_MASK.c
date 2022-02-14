
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct net_device {struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static inline void FUNC_1(u8 *VAR_1, struct net_device *VAR_2)
{
 struct dev_mc_list *VAR_3;
 u32 VAR_4;

 for (VAR_3=VAR_2->mc_list; VAR_3; VAR_3=VAR_3->next) {

  VAR_4 = FUNC_0(VAR_0, VAR_3->dmi_addr);




  VAR_1[VAR_4>>29] |= (1<<((VAR_4>>26)&7));
 }
}
