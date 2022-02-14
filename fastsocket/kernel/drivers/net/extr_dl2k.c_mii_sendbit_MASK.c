
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct net_device {long base_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (long) ;
 int FUNC_2 (int,long) ;

__attribute__((used)) static void
FUNC_3 (struct net_device *VAR_4, u32 VAR_5)
{
 long VAR_6 = VAR_4->base_addr + VAR_3;
 VAR_5 = (VAR_5) ? VAR_1 : 0;
 VAR_5 |= VAR_2;
 VAR_5 |= (FUNC_1 (VAR_6) & 0xf8) | VAR_2;
 FUNC_2 (VAR_5, VAR_6);
 FUNC_0 ();
 FUNC_2 (VAR_5 | VAR_0, VAR_6);
 FUNC_0 ();
}
