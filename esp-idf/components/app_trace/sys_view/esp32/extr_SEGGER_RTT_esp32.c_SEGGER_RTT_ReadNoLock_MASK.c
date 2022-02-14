
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,void*,int*,int ) ;

unsigned FUNC_1(unsigned VAR_2, void* VAR_3, unsigned VAR_4) {
  uint32_t VAR_5 = VAR_4;
  esp_err_t VAR_6 = FUNC_0(VAR_0, VAR_3, &VAR_5, 0);
  if (VAR_6 != VAR_1) {
    return 0;
  }
  return VAR_5;
}
