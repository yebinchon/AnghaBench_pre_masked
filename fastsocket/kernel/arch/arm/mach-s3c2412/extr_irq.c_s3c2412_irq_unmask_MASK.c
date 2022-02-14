
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long FUNC_0 (int ) ;
 int FUNC_1 (unsigned long,int ) ;

__attribute__((used)) static void
FUNC_2(unsigned int VAR_3)
{
 unsigned long VAR_4 = 1UL << (VAR_3 - VAR_0);
 unsigned long VAR_5;

 VAR_5 = FUNC_0(VAR_2);
 FUNC_1(VAR_5 & ~VAR_4, VAR_2);

 VAR_5 = FUNC_0(VAR_1);
 FUNC_1(VAR_5 & ~VAR_4, VAR_1);
}
