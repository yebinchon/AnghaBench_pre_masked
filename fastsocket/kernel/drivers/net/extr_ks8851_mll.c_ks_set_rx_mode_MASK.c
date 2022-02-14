
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct ks_net {int mcast_lst_size; int * mcast_lst; } ;
struct dev_mc_list {int* dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ks_net*) ;
 int FUNC_1 (struct ks_net*) ;
 int FUNC_2 (struct ks_net*,int) ;
 int FUNC_3 (struct ks_net*,int) ;
 int FUNC_4 (int ,int*,int ) ;
 struct ks_net* FUNC_5 (struct net_device*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5)
{
 struct ks_net *VAR_6 = FUNC_5(VAR_5);
 struct dev_mc_list *VAR_7;


 if ((VAR_5->flags & VAR_2) == VAR_2)
  FUNC_3(VAR_6,
   (u16)((VAR_5->flags & VAR_2) == VAR_2));

 else if ((VAR_5->flags & VAR_0) == VAR_0)
  FUNC_2(VAR_6,
   (u16)((VAR_5->flags & VAR_0) == VAR_0));
 else
  FUNC_3(VAR_6, 0);

 if ((VAR_5->flags & VAR_1) && VAR_5->mc_count) {
  if (VAR_5->mc_count <= VAR_4) {
   int VAR_8 = 0;
   for (VAR_7 = VAR_5->mc_list; VAR_7; VAR_7 = VAR_7->next) {
    if (!(*VAR_7->dmi_addr & 1))
     continue;
    if (VAR_8 >= VAR_4)
     break;
    FUNC_4(VAR_6->mcast_lst[VAR_8++], VAR_7->dmi_addr,
    VAR_3);
   }
   VAR_6->mcast_lst_size = (u8)VAR_8;
   FUNC_1(VAR_6);
  } else {




   VAR_6->mcast_lst_size = VAR_4;
   FUNC_2(VAR_6, 1);
  }
 } else {
  VAR_6->mcast_lst_size = 0;
  FUNC_0(VAR_6);
 }
}
