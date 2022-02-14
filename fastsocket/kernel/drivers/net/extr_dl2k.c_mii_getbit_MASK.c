
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {long base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (long) ;
 int FUNC_2 (int,long) ;

__attribute__((used)) static int
FUNC_3 (struct net_device *VAR_3)
{
 long VAR_4 = VAR_3->base_addr + VAR_2;
 u8 VAR_5;

 VAR_5 = (FUNC_1 (VAR_4) & 0xf8) | VAR_1;
 FUNC_2 (VAR_5, VAR_4);
 FUNC_0 ();
 FUNC_2 (VAR_5 | VAR_0, VAR_4);
 FUNC_0 ();
 return ((FUNC_1 (VAR_4) >> 1) & 1);
}
