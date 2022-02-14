
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lguest {unsigned long pfn_limit; } ;


 unsigned long VAR_0 ;

bool FUNC_0(const struct lguest *VAR_1,
         unsigned long VAR_2, unsigned long VAR_3)
{
 return (VAR_2+VAR_3) / VAR_0 < VAR_1->pfn_limit && (VAR_2+VAR_3 >= VAR_2);
}
