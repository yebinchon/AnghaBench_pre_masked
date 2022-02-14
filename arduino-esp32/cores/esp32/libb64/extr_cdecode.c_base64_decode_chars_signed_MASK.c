
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ int8_t ;
typedef int base64_decodestate ;


 int FUNC_0 (scalar_t__ const*,int const,scalar_t__*,int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(const int8_t* VAR_0, const int VAR_1, int8_t* VAR_2){
  base64_decodestate VAR_3;
  FUNC_1(&VAR_3);
  int VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3);
  if(VAR_4 > 0) VAR_2[VAR_4] = 0;
  return VAR_4;
}
