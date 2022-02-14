
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct net_device {int flags; int name; scalar_t__ mc_count; } ;
struct TYPE_5__ {TYPE_4__* ctrl_urb; int flags; int * eth_regs; } ;
typedef TYPE_1__ pegasus_t ;
struct TYPE_6__ {scalar_t__ status; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_1__* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,int ) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_7)
{
 pegasus_t *VAR_8 = FUNC_1(VAR_7);

 if (VAR_7->flags & VAR_4) {
  VAR_8->eth_regs[VAR_2] |= VAR_6;
  if (FUNC_2(VAR_8))
   FUNC_4("%s: Promiscuous mode enabled.\n", VAR_7->name);
 } else if (VAR_7->mc_count || (VAR_7->flags & VAR_3)) {
  VAR_8->eth_regs[VAR_1] |= VAR_5;
  VAR_8->eth_regs[VAR_2] &= ~VAR_6;
  if (FUNC_2(VAR_8))
   FUNC_3("%s: set allmulti\n", VAR_7->name);
 } else {
  VAR_8->eth_regs[VAR_1] &= ~VAR_5;
  VAR_8->eth_regs[VAR_2] &= ~VAR_6;
 }

 VAR_8->ctrl_urb->status = 0;

 VAR_8->flags |= VAR_0;
 FUNC_0(VAR_8->ctrl_urb);
}
