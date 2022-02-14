
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct lmb_property {int base; int size; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct lmb_property*) ;
 int FUNC_1 (unsigned long,unsigned long,void*) ;

int
FUNC_2(unsigned long VAR_1, unsigned long VAR_2,
  void *VAR_3, int (*VAR_4)(unsigned long, unsigned long, void *))
{
 struct lmb_property VAR_5;
 unsigned long VAR_6, VAR_7;
 u64 VAR_8;
 int VAR_9 = -1;

 VAR_5.base = (u64) VAR_1 << VAR_0;
 VAR_5.size = (u64) VAR_2 << VAR_0;

 VAR_8 = VAR_5.base + VAR_5.size - 1;
 while ((VAR_5.base < VAR_8) && (FUNC_0(&VAR_5) >= 0)) {
  VAR_6 = (unsigned long)(VAR_5.base >> VAR_0);
  VAR_7 = (unsigned long)(VAR_5.size >> VAR_0);
  VAR_9 = (*VAR_4)(VAR_6, VAR_7, VAR_3);
  if (VAR_9)
   break;
  VAR_5.base += (VAR_5.size + 1);
  VAR_5.size = (VAR_8 - VAR_5.base + 1);
 }
 return VAR_9;
}
