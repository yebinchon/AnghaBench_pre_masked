
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__* FUNC_1 (void*,scalar_t__) ;
 scalar_t__* FUNC_2 (void*) ;
 scalar_t__* FUNC_3 (void*) ;
 int FUNC_4 (char*,scalar_t__,scalar_t__) ;

uint32_t* FUNC_5(void* VAR_1, uint32_t VAR_2) {
  uint32_t VAR_3 = *FUNC_2(VAR_1);
  if (VAR_2 > VAR_3) {
    FUNC_4("Tried to access child_num %d > num_keys %d\n", VAR_2, VAR_3);
    FUNC_0(VAR_0);
  } else if (VAR_2 == VAR_3) {
    return FUNC_3(VAR_1);
  } else {
    return FUNC_1(VAR_1, VAR_2);
  }
}
