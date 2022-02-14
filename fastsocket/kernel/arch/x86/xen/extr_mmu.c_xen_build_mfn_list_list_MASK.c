
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int FUNC_0 (void**) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 void*** VAR_2 ;
 unsigned int FUNC_1 (unsigned int) ;
 void** VAR_3 ;
 void** VAR_4 ;
 void* FUNC_2 (void**) ;

void FUNC_3(void)
{
 unsigned VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5 += VAR_1) {
  unsigned VAR_7 = FUNC_1(VAR_5);

  VAR_3[VAR_7] = FUNC_2(VAR_2[VAR_7]);
 }

 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_4); VAR_6++) {
  unsigned VAR_8 = VAR_6 * VAR_1;
  VAR_4[VAR_6] = FUNC_2(&VAR_3[VAR_8]);
 }
}
