
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 scalar_t__ FUNC_0 (struct page*) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page**,int,int ) ;
 int FUNC_3 (unsigned long,unsigned long) ;
 unsigned long FUNC_4 (struct page*) ;

int FUNC_5(struct page **VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;
 int VAR_8;

 VAR_5 = FUNC_2(VAR_3, VAR_4,
   FUNC_1(VAR_2));
 if (VAR_5)
  return VAR_5;

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  if (FUNC_0(VAR_3[VAR_8]))
   continue;
  VAR_6 = FUNC_4(VAR_3[VAR_8]) << VAR_0;
  VAR_7 = VAR_6 + VAR_1;
  FUNC_3(VAR_6, VAR_7);
 }

 return 0;
}
