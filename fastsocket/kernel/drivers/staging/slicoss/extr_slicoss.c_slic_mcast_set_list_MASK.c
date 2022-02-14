
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int mc_count; int flags; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {int dmi_addrlen; struct dev_mc_list* next; int dmi_addr; } ;
struct adapter {int devflags_prev; int macopts; } ;


 int FUNC_0 (struct adapter*) ;
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
 scalar_t__ FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct adapter*,int) ;
 int FUNC_3 (struct adapter*,char*) ;
 int FUNC_4 (struct adapter*,char*) ;
 int FUNC_5 (struct adapter*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_11)
{
 struct adapter *VAR_12 = (struct adapter *)FUNC_1(VAR_11);
 int VAR_13 = VAR_10;
 int VAR_14;
 char *VAR_15;
 struct dev_mc_list *VAR_16 = VAR_11->mc_list;
 int VAR_17 = VAR_11->mc_count;

 FUNC_0(VAR_12);

 for (VAR_14 = 1; VAR_14 <= VAR_17; VAR_14++) {
  VAR_15 = (char *) &VAR_16->dmi_addr;
  if (VAR_16->dmi_addrlen == 6) {
   VAR_13 = FUNC_3(VAR_12, VAR_15);
   if (VAR_13 != VAR_10)
    break;
  } else {
   VAR_13 = -VAR_0;
   break;
  }
  FUNC_4(VAR_12, VAR_15);
  VAR_16 = VAR_16->next;
 }

 if (VAR_12->devflags_prev != VAR_11->flags) {
  VAR_12->macopts = VAR_7;
  if (VAR_11->flags) {
   if (VAR_11->flags & VAR_2)
    VAR_12->macopts |= VAR_6;
   if (VAR_11->flags & VAR_4)
    VAR_12->macopts |= VAR_9;
   if (VAR_11->flags & VAR_1)
    VAR_12->macopts |= VAR_5;
   if (VAR_11->flags & VAR_3)
    VAR_12->macopts |= VAR_8;
  }
  VAR_12->devflags_prev = VAR_11->flags;
  FUNC_2(VAR_12, 1);
 } else {
  if (VAR_13 == VAR_10)
   FUNC_5(VAR_12);
 }
 return;
}
