
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef int __u32 ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (char*,unsigned long) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static __u32 FUNC_3(struct device *VAR_1, char *VAR_2, unsigned long VAR_3)
{
 unsigned long VAR_4;

 VAR_4 = ((unsigned long)VAR_2) & VAR_0;
 if (!FUNC_2(VAR_4)) {
  FUNC_0(VAR_4);
  return (__u32)VAR_2;
 }
 return (__u32)FUNC_1(VAR_2, VAR_3);
}
