
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct desc_struct {int dummy; } ;
struct desc_ptr {unsigned long address; int size; } ;
typedef int pte_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned long) ;
 scalar_t__ FUNC_2 (unsigned long*,unsigned int) ;
 unsigned long VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_3 (unsigned long) ;
 void* FUNC_4 (int ) ;
 int * FUNC_5 (unsigned long,int*) ;
 int FUNC_6 (void*) ;
 unsigned long FUNC_7 (unsigned long) ;
 unsigned long FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9(const struct desc_ptr *VAR_2)
{
 unsigned long VAR_3 = VAR_2->address;
 unsigned int VAR_4 = VAR_2->size + 1;
 unsigned VAR_5 = (VAR_4 + VAR_1 - 1) / VAR_1;
 unsigned long VAR_6[VAR_5];
 int VAR_7;






 FUNC_1(VAR_4 > 65536);
 FUNC_1(VAR_3 & ~VAR_0);

 for (VAR_7 = 0; VAR_3 < VAR_2->address + VAR_4; VAR_3 += VAR_1, VAR_7++) {
  int VAR_8;
  pte_t *VAR_9;
  unsigned long VAR_10, VAR_11;
  void *VAR_12;
  VAR_9 = FUNC_5(VAR_3, &VAR_8);
  FUNC_1(VAR_9 == ((void*)0));

  VAR_10 = FUNC_8(*VAR_9);
  VAR_11 = FUNC_7(VAR_10);
  VAR_12 = FUNC_4(FUNC_3(VAR_10));

  VAR_6[VAR_7] = VAR_11;

  FUNC_6((void *)VAR_3);
  FUNC_6(VAR_12);
 }

 if (FUNC_2(VAR_6, VAR_4 / sizeof(struct desc_struct)))
  FUNC_0();
}
