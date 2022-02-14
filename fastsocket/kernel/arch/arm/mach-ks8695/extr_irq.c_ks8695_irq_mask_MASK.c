
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned long FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static void FUNC_2(unsigned int VAR_2)
{
 unsigned long VAR_3;

 VAR_3 = FUNC_0(VAR_1 + VAR_0);
 VAR_3 &= ~(1 << VAR_2);

 FUNC_1(VAR_3, VAR_1 + VAR_0);
}
