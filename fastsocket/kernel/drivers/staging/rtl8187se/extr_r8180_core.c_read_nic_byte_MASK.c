
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {scalar_t__ mem_start; } ;


 int FUNC_0 (int*) ;

u8 FUNC_1(struct net_device *VAR_0, int VAR_1)
{
        return 0xff&FUNC_0((u8*)VAR_0->mem_start +VAR_1);
}
