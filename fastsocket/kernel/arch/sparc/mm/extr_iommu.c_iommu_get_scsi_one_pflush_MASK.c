
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int __u32 ;


 unsigned long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (struct device*,char*,unsigned long) ;

__attribute__((used)) static __u32 FUNC_2(struct device *VAR_2, char *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = ((unsigned long) VAR_3) & VAR_0;

 while(VAR_5 < ((unsigned long)(VAR_3 + VAR_4))) {
  FUNC_0(VAR_5);
  VAR_5 += VAR_1;
 }
 return FUNC_1(VAR_2, VAR_3, VAR_4);
}
