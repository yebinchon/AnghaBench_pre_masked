
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef unsigned long __u32 ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 (struct device*,unsigned long,int) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_3, __u32 VAR_4, unsigned long VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;

 VAR_6 = VAR_4 & ~VAR_0;
 VAR_7 = (VAR_6 + VAR_5 + VAR_2-1) >> VAR_1;
 FUNC_0(VAR_3, VAR_4 & VAR_0, VAR_7);
}
