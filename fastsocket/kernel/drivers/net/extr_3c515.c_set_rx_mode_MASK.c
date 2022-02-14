
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int flags; scalar_t__ mc_list; int name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 short VAR_5 ;
 short VAR_6 ;
 short VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (short,scalar_t__) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_9)
{
 int VAR_10 = VAR_9->base_addr;
 short VAR_11;

 if (VAR_9->flags & VAR_2) {
  if (VAR_8 > 3)
   FUNC_1("%s: Setting promiscuous mode.\n",
          VAR_9->name);
  VAR_11 = VAR_7 | VAR_6 | VAR_4 | VAR_3 | VAR_5;
 } else if ((VAR_9->mc_list) || (VAR_9->flags & VAR_1)) {
  VAR_11 = VAR_7 | VAR_6 | VAR_4 | VAR_3;
 } else
  VAR_11 = VAR_7 | VAR_6 | VAR_3;

 FUNC_0(VAR_11, VAR_10 + VAR_0);
}
