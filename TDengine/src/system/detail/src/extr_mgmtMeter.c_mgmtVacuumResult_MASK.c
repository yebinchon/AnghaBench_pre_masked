
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* offset; scalar_t__* bytes; } ;
typedef TYPE_1__ SShowObj ;


 int FUNC_0 (char*,char*,scalar_t__) ;

__attribute__((used)) static void FUNC_1(char *VAR_0, int32_t VAR_1, int32_t VAR_2, int32_t VAR_3, SShowObj *VAR_4) {
  if (VAR_2 < VAR_3) {
    for (int32_t VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5) {
      FUNC_0(VAR_0 + VAR_4->offset[VAR_5] * VAR_2, VAR_0 + VAR_4->offset[VAR_5] * VAR_3, VAR_4->bytes[VAR_5] * VAR_2);
    }
  }
}
