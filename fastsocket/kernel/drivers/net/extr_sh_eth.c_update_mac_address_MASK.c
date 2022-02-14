
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct net_device {int* dev_addr; scalar_t__ base_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_2)
{
 u32 VAR_3 = VAR_2->base_addr;

 FUNC_0((VAR_2->dev_addr[0] << 24) | (VAR_2->dev_addr[1] << 16) |
    (VAR_2->dev_addr[2] << 8) | (VAR_2->dev_addr[3]),
    VAR_3 + VAR_0);
 FUNC_0((VAR_2->dev_addr[4] << 8) | (VAR_2->dev_addr[5]),
    VAR_3 + VAR_1);
}
