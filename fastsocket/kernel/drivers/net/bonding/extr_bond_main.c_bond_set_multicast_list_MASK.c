
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addrlen; int dmi_addr; struct dev_mc_list* next; } ;
struct bonding {int flags; int lock; struct dev_mc_list* mc_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bonding*,int ,int ) ;
 int FUNC_1 (struct bonding*,int ,int ) ;
 int FUNC_2 (struct dev_mc_list*,struct bonding*,int ) ;
 int FUNC_3 (struct bonding*) ;
 int FUNC_4 (struct dev_mc_list*,struct dev_mc_list*) ;
 int FUNC_5 (struct bonding*,int) ;
 int FUNC_6 (struct bonding*,int) ;
 struct bonding* FUNC_7 (struct net_device*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_3)
{
 struct bonding *VAR_4 = FUNC_7(VAR_3);
 struct dev_mc_list *VAR_5;




 if ((VAR_3->flags & VAR_2) && !(VAR_4->flags & VAR_2))




  FUNC_6(VAR_4, 1);


 if (!(VAR_3->flags & VAR_2) && (VAR_4->flags & VAR_2))
  FUNC_6(VAR_4, -1);



 if ((VAR_3->flags & VAR_1) && !(VAR_4->flags & VAR_1))




  FUNC_5(VAR_4, 1);


 if (!(VAR_3->flags & VAR_1) && (VAR_4->flags & VAR_1))
  FUNC_5(VAR_4, -1);


 FUNC_8(&VAR_4->lock);

 VAR_4->flags = VAR_3->flags;


 for (VAR_5 = VAR_3->mc_list; VAR_5; VAR_5 = VAR_5->next) {
  if (!FUNC_4(VAR_5, VAR_4->mc_list))
   FUNC_0(VAR_4, VAR_5->dmi_addr, VAR_5->dmi_addrlen);
 }


 for (VAR_5 = VAR_4->mc_list; VAR_5; VAR_5 = VAR_5->next) {
  if (!FUNC_4(VAR_5, VAR_3->mc_list))
   FUNC_1(VAR_4, VAR_5->dmi_addr, VAR_5->dmi_addrlen);
 }


 FUNC_3(VAR_4);
 FUNC_2(VAR_3->mc_list, VAR_4, VAR_0);

 FUNC_9(&VAR_4->lock);
}
