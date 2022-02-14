
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_1)
{
 struct dev_mc_list *VAR_2;

 if ((VAR_1->flags & VAR_0) == 0) {
  FUNC_2(VAR_1);
  for (VAR_2 = VAR_1->mc_list; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
   FUNC_1(VAR_1, VAR_2->dmi_addr);
  FUNC_0(VAR_1);
 } else
  FUNC_3(VAR_1);
}
