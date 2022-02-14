
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int* FUNC_0 (void*,int) ;
 int* FUNC_1 (void*) ;

uint32_t FUNC_2(void* VAR_0, uint32_t VAR_1) {





  uint32_t VAR_2 = *FUNC_1(VAR_0);


  uint32_t VAR_3 = 0;
  uint32_t VAR_4 = VAR_2;

  while (VAR_3 != VAR_4) {
    uint32_t VAR_5 = (VAR_3 + VAR_4) / 2;
    uint32_t VAR_6 = *FUNC_0(VAR_0, VAR_5);
    if (VAR_6 >= VAR_1) {
      VAR_4 = VAR_5;
    } else {
      VAR_3 = VAR_5 + 1;
    }
  }

  return VAR_3;
}
