
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pgprot_t ;
typedef enum km_type { ____Placeholder_km_type } km_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 unsigned long FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,unsigned long,int *,int ,int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (struct page*,int ) ;
 void* FUNC_7 (struct page*) ;
 int FUNC_8 () ;
 int FUNC_9 (int ) ;
 int FUNC_10 () ;

void *FUNC_11(struct page *VAR_4, enum km_type VAR_5, pgprot_t VAR_6)
{
 unsigned int VAR_7;
 unsigned long VAR_8;


 FUNC_8();
 if (!FUNC_1(VAR_4))
  return FUNC_7(VAR_4);

 FUNC_4(VAR_5);
 VAR_7 = VAR_5 + VAR_1*FUNC_10();
 VAR_8 = FUNC_2(VAR_0 + VAR_7);



 FUNC_3(&VAR_2, VAR_8, VAR_3-VAR_7, FUNC_6(VAR_4, VAR_6), 1);
 FUNC_5(((void*)0), VAR_8);

 return (void*) VAR_8;
}
