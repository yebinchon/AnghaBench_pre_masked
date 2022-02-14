
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 unsigned char VAR_3 ;
 unsigned char FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned char,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_4)
{
 unsigned char VAR_5;



 VAR_5 = FUNC_0(VAR_4->base_addr + VAR_0);



 VAR_5 |= VAR_3;
 FUNC_1(VAR_5, VAR_4->base_addr + VAR_0);
 FUNC_2(10);
 VAR_5 &= ~VAR_3;
 FUNC_1(VAR_5, VAR_4->base_addr + VAR_0);



 VAR_5 |= VAR_1 | VAR_2;
 FUNC_1(VAR_5, VAR_4->base_addr + VAR_0);
}
