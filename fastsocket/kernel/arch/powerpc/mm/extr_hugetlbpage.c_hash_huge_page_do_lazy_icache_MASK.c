
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int flags; } ;
typedef int pte_t ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (int ) ;
 struct page* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;

__attribute__((used)) static unsigned int FUNC_8(unsigned long VAR_3,
     pte_t VAR_4, int VAR_5, unsigned long VAR_6)
{
 struct page *VAR_7;
 int VAR_8;

 if (!FUNC_3(FUNC_5(VAR_4)))
  return VAR_3;

 VAR_7 = FUNC_4(VAR_4);


 if (!FUNC_7(VAR_2, &VAR_7->flags) && !FUNC_0(VAR_7)) {
  if (VAR_5 == 0x400) {
   for (VAR_8 = 0; VAR_8 < (VAR_6 / VAR_1); VAR_8++)
    FUNC_1(FUNC_2(VAR_7+VAR_8));
   FUNC_6(VAR_2, &VAR_7->flags);
  } else {
   VAR_3 |= VAR_0;
  }
 }
 return VAR_3;
}
