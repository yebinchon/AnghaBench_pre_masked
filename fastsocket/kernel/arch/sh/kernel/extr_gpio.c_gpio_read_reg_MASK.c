
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long FUNC_0 (unsigned long,unsigned long) ;
 int FUNC_1 (char*,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static int FUNC_2(unsigned long VAR_0, unsigned long VAR_1,
    unsigned long VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;

 VAR_4 = 0;
 VAR_5 = (1 << VAR_2) - 1;
 VAR_6 = VAR_1 - ((VAR_3 + 1) * VAR_2);







 VAR_4 = FUNC_0(VAR_0, VAR_1);
 return (VAR_4 >> VAR_6) & VAR_5;
}
