
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOrderDescriptor ;
typedef int tFilePage ;
typedef int tExtMemBuffer ;
typedef scalar_t__ int32_t ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *,int *,scalar_t__) ;

int32_t FUNC_2(tExtMemBuffer *VAR_0, tOrderDescriptor *VAR_1, tFilePage *VAR_2, int32_t VAR_3) {
  int32_t VAR_4 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3);
  if (VAR_4 != 0) {
    return -1;
  }

  if (!FUNC_0(VAR_0)) {
    return -1;
  }

  return 0;
}
