
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zd1201 {int dummy; } ;
struct net_device {int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {struct dev_mc_list* next; int dmi_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 struct zd1201* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct zd1201*,int ,unsigned char*,int,int ) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_3)
{
 struct zd1201 *VAR_4 = FUNC_1(VAR_3);
 struct dev_mc_list *VAR_5 = VAR_3->mc_list;
 unsigned char VAR_6[VAR_0*VAR_1];
 int VAR_7;

 if (VAR_3->mc_count > VAR_1)
  return;

 for (VAR_7=0; VAR_7<VAR_3->mc_count; VAR_7++) {
  FUNC_0(VAR_6+VAR_7*VAR_0, VAR_5->dmi_addr, VAR_0);
  VAR_5 = VAR_5->next;
 }
 FUNC_2(VAR_4, VAR_2, VAR_6,
     VAR_3->mc_count*VAR_0, 0);

}
