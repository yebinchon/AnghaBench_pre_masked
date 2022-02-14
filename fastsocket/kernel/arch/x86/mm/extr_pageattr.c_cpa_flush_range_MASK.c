
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pte_t ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned long) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 () ;
 int * FUNC_5 (unsigned long,unsigned int*) ;
 int FUNC_6 (int ,int *,int) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_3, int VAR_4, int VAR_5)
{
 unsigned int VAR_6, VAR_7;
 unsigned long VAR_8;

 FUNC_0(FUNC_4());
 FUNC_2(FUNC_1(VAR_3) != VAR_3);

 FUNC_6(VAR_2, ((void*)0), 1);

 if (!VAR_5)
  return;







 for (VAR_6 = 0, VAR_8 = VAR_3; VAR_6 < VAR_4; VAR_6++, VAR_8 += VAR_0) {
  pte_t *VAR_9 = FUNC_5(VAR_8, &VAR_7);




  if (VAR_9 && (FUNC_7(*VAR_9) & VAR_1))
   FUNC_3((void *) VAR_8, VAR_0);
 }
}
