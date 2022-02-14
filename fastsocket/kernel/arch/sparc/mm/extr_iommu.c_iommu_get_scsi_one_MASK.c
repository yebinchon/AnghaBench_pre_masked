
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct page {int dummy; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ FUNC_0 (struct device*,struct page*,int) ;
 struct page* FUNC_1 (unsigned long) ;

__attribute__((used)) static u32 FUNC_2(struct device *VAR_3, char *VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 int VAR_7;
 struct page *VAR_8;
 u32 VAR_9;

 VAR_6 = (unsigned long)VAR_4 & ~VAR_0;
 VAR_7 = (VAR_6 + VAR_5 + VAR_2-1) >> VAR_1;
 VAR_8 = FUNC_1((unsigned long)VAR_4 & VAR_0);
 VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_7);
 return VAR_9 + VAR_6;
}
