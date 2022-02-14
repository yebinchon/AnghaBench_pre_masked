
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
typedef int pte_t ;
typedef int pgprot_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (unsigned long,int ,int ) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (struct page*) ;
 void* FUNC_5 (int ) ;
 int FUNC_6 () ;
 int * FUNC_7 (unsigned long,int*) ;
 int FUNC_8 (unsigned long,int ) ;
 struct page* FUNC_9 (unsigned long) ;
 unsigned long FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(void *VAR_0, pgprot_t VAR_1)
{
 int VAR_2;
 pte_t *VAR_3;
 pte_t VAR_4;
 unsigned long VAR_5;
 struct page *VAR_6;

 VAR_3 = FUNC_7((unsigned long)VAR_0, &VAR_2);
 FUNC_1(VAR_3 == ((void*)0));

 VAR_5 = FUNC_10(*VAR_3);
 VAR_6 = FUNC_9(VAR_5);

 VAR_4 = FUNC_8(VAR_5, VAR_1);

 if (FUNC_2((unsigned long)VAR_0, VAR_4, 0))
  FUNC_0();

 if (!FUNC_4(VAR_6)) {
  void *VAR_7 = FUNC_5(FUNC_3(VAR_5));

  if (VAR_7 != VAR_0)
   if (FUNC_2((unsigned long)VAR_7, VAR_4, 0))
    FUNC_0();
 } else
  FUNC_6();
}
