
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int base_addr; int if_port; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int,scalar_t__) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void
FUNC_5(struct net_device *VAR_8)
{
 int VAR_9 = VAR_8->base_addr;

 FUNC_2(VAR_8);


 FUNC_3(VAR_4, VAR_9 + VAR_0);


 FUNC_3(VAR_2, VAR_9 + VAR_0);
 FUNC_3(VAR_6, VAR_9 + VAR_0);

 if (VAR_8->if_port == 3)

  FUNC_3(VAR_5, VAR_9 + VAR_0);
 else if (VAR_8->if_port == 0) {

  FUNC_0(4);
  FUNC_3(FUNC_1(VAR_9 + VAR_7) & ~VAR_1, VAR_9 + VAR_7);
 }

 FUNC_3(VAR_3 | 0x0000, VAR_9 + VAR_0);

 FUNC_4(VAR_8);
}
