
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int OPENOptions; int FunctAddr; } ;
struct net_local {TYPE_1__ ocpl; } ;
struct net_device {int flags; int mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {char* dmi_addr; struct dev_mc_list* next; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9)
{
 struct net_local *VAR_10 = FUNC_0(VAR_9);
 unsigned int VAR_11;

 VAR_11 = VAR_10->ocpl.OPENOptions &
  ~(VAR_6
    | VAR_7
    | VAR_8
    | VAR_0
    | VAR_1);

 VAR_10->ocpl.FunctAddr = 0;

 if(VAR_9->flags & VAR_3)

  VAR_11 |= VAR_1 |
   VAR_0;
 else
 {
  if(VAR_9->flags & VAR_2)
  {

   VAR_10->ocpl.FunctAddr = 0xFFFFFFFF;
  }
  else
  {
   int VAR_12;
   struct dev_mc_list *VAR_13 = VAR_9->mc_list;
   for (VAR_12=0; VAR_12< VAR_9->mc_count; VAR_12++)
   {
    ((char *)(&VAR_10->ocpl.FunctAddr))[0] |=
     VAR_13->dmi_addr[2];
    ((char *)(&VAR_10->ocpl.FunctAddr))[1] |=
     VAR_13->dmi_addr[3];
    ((char *)(&VAR_10->ocpl.FunctAddr))[2] |=
     VAR_13->dmi_addr[4];
    ((char *)(&VAR_10->ocpl.FunctAddr))[3] |=
     VAR_13->dmi_addr[5];
    VAR_13 = VAR_13->next;
   }
  }
  FUNC_1(VAR_9, VAR_5);
 }

 VAR_10->ocpl.OPENOptions = VAR_11;
 FUNC_1(VAR_9, VAR_4);
 return;
}
