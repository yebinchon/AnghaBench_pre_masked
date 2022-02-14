
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 size_t VAR_0 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*,unsigned long,size_t,int) ;

void FUNC_2(struct page *VAR_1, unsigned long VAR_2,
     size_t VAR_3, int VAR_4)
{






 size_t VAR_5 = VAR_3;
 do {
  size_t VAR_6 = VAR_5;
  if (FUNC_0(VAR_1) && VAR_6 + VAR_2 > VAR_0) {
   if (VAR_2 >= VAR_0) {
    VAR_1 += VAR_2 / VAR_0;
    VAR_2 %= VAR_0;
   }
   VAR_6 = VAR_0 - VAR_2;
  }
  FUNC_1(VAR_1, VAR_2, VAR_6, VAR_4);
  VAR_2 = 0;
  VAR_1++;
  VAR_5 -= VAR_6;
 } while (VAR_5);
}
