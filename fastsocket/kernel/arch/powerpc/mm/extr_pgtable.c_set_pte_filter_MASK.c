
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned long,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct page*) ;
 struct page* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static pte_t FUNC_9(pte_t VAR_4, unsigned long VAR_5)
{
 VAR_4 = FUNC_0(FUNC_6(VAR_4) & ~VAR_3);
 if (FUNC_5(VAR_4) && !(FUNC_2(VAR_0) ||
           FUNC_2(VAR_1))) {
  struct page *VAR_6 = FUNC_4(VAR_4);
  if (!VAR_6)
   return VAR_4;
  if (!FUNC_8(VAR_2, &VAR_6->flags)) {
   FUNC_3(VAR_6);
   FUNC_7(VAR_2, &VAR_6->flags);
  }
 }
 return VAR_4;
}
