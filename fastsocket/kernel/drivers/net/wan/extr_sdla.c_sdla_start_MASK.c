
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;
struct frad_local {int type; int state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;


 struct frad_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_6)
{
 struct frad_local *VAR_7;

 VAR_7 = FUNC_0(VAR_6);
 switch(VAR_7->type)
 {
  case 131:
   FUNC_1(VAR_3, VAR_6->base_addr + VAR_1);
   FUNC_1(VAR_4, VAR_6->base_addr + VAR_1);
   VAR_7->state = VAR_4;
   break;
  case 130:
   FUNC_1(VAR_5, VAR_6->base_addr + VAR_2);
   FUNC_1(0x00, VAR_6->base_addr + VAR_1);
   VAR_7->state = 0;
   break;
  case 129:
   VAR_7->state |= VAR_0;
   FUNC_1(VAR_7->state, VAR_6->base_addr + VAR_1);
   break;
  case 128:
   VAR_7->state |= VAR_0;
   FUNC_1(VAR_7->state, VAR_6->base_addr + VAR_1);
   break;
 }
}
