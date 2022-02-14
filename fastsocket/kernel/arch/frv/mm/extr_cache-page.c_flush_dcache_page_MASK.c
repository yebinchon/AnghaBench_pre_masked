
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned long FUNC_0 (int) ;
 int FUNC_1 (int,unsigned long) ;
 int FUNC_2 (int,unsigned long) ;
 int FUNC_3 (unsigned long,scalar_t__) ;
 void* FUNC_4 (struct page*,int ) ;
 int FUNC_5 (void*,int ) ;

void FUNC_6(struct page *VAR_2)
{
 unsigned long VAR_3;
 void *VAR_4;

 VAR_3 = FUNC_0(2);

 VAR_4 = FUNC_4(VAR_2, VAR_1);

 FUNC_3((unsigned long) VAR_4, (unsigned long) VAR_4 + VAR_0);

 FUNC_5(VAR_4, VAR_1);

 if (VAR_3) {
  FUNC_1(2, VAR_3);
  FUNC_2(2, VAR_3);
 }

}
