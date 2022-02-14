
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int flags; scalar_t__ mc_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,int ,int) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_6)
{
 if (VAR_6->mc_count || VAR_6->flags&(VAR_0|VAR_1))
 {
  FUNC_0(VAR_6, VAR_5, (VAR_4 & ~VAR_3) | VAR_2);
 }
 else
 {
  FUNC_0(VAR_6, VAR_5, VAR_4);
 }
}
