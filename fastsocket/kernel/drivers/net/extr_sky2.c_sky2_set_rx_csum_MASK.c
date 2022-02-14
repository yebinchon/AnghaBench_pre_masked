
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sky2_port {size_t port; int hw; int flags; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct sky2_port* FUNC_1 (struct net_device*) ;
 int * VAR_4 ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_5, u32 VAR_6)
{
 struct sky2_port *VAR_7 = FUNC_1(VAR_5);

 if (VAR_6)
  VAR_7->flags |= VAR_3;
 else
  VAR_7->flags &= ~VAR_3;

 FUNC_2(VAR_7->hw, FUNC_0(VAR_4[VAR_7->port], VAR_2),
       VAR_6 ? VAR_1 : VAR_0);

 return 0;
}
