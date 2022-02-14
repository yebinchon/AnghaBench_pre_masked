
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef enum km_type { ____Placeholder_km_type } km_type ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*) ;
 int * FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (scalar_t__) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (struct page*) ;
 int VAR_2 ;
 int FUNC_6 (unsigned long) ;
 int FUNC_7 (struct page*,int ) ;
 void* FUNC_8 (struct page*) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ,int ) ;
 int FUNC_12 () ;

void *FUNC_13(struct page *VAR_3, enum km_type VAR_4)
{
 unsigned int VAR_5;
 unsigned long VAR_6;
 void *VAR_7;

 FUNC_9();
 if (!FUNC_1(VAR_3))
  return FUNC_8(VAR_3);

 FUNC_4(VAR_4);

 VAR_7 = FUNC_5(VAR_3);
 if (VAR_7)
  return VAR_7;

 VAR_5 = VAR_4 + VAR_1 * FUNC_12();
 VAR_6 = FUNC_3(VAR_0 + VAR_5);







 FUNC_11(FUNC_2(VAR_6), FUNC_7(VAR_3, VAR_2), 0);





 FUNC_6(VAR_6);

 return (void *)VAR_6;
}
