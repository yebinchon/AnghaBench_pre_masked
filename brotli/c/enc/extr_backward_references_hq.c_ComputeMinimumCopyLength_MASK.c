
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {float cost; } ;
struct TYPE_5__ {TYPE_1__ u; } ;
typedef TYPE_2__ ZopfliNode ;



__attribute__((used)) static size_t FUNC_0(const float VAR_0,
                                       const ZopfliNode* VAR_1,
                                       const size_t VAR_2,
                                       const size_t VAR_3) {

  float VAR_4 = VAR_0;
  size_t VAR_5 = 2;
  size_t VAR_6 = 4;
  size_t VAR_7 = 10;
  while (VAR_3 + VAR_5 <= VAR_2 && VAR_1[VAR_3 + VAR_5].u.cost <= VAR_4) {



    ++VAR_5;
    if (VAR_5 == VAR_7) {


      VAR_4 += 1.0f;
      VAR_7 += VAR_6;
      VAR_6 *= 2;
    }
  }
  return VAR_5;
}
