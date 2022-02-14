
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_6__ {unsigned int* params; } ;
typedef TYPE_1__ BrotliTransforms ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int* FUNC_0 (TYPE_1__ const*,int) ;
 int const VAR_3 ;
 int const VAR_4 ;
 int* FUNC_1 (TYPE_1__ const*,int) ;
 int FUNC_2 (TYPE_1__ const*,int) ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_3 (int*,int,int ) ;
 int FUNC_4 (int*) ;

int FUNC_5(uint8_t* VAR_7, const uint8_t* VAR_8, int VAR_9,
    const BrotliTransforms* VAR_10, int VAR_11) {
  int VAR_12 = 0;
  const uint8_t* VAR_13 = FUNC_0(VAR_10, VAR_11);
  uint8_t VAR_14 = FUNC_2(VAR_10, VAR_11);
  const uint8_t* VAR_15 = FUNC_1(VAR_10, VAR_11);
  {
    int VAR_16 = *VAR_13++;
    while (VAR_16--) { VAR_7[VAR_12++] = *VAR_13++; }
  }
  {
    const int VAR_17 = VAR_14;
    int VAR_18 = 0;
    if (VAR_17 <= VAR_2) {
      VAR_9 -= VAR_17;
    } else if (VAR_17 >= VAR_0
        && VAR_17 <= VAR_1) {
      int VAR_19 = VAR_17 - (VAR_0 - 1);
      VAR_8 += VAR_19;
      VAR_9 -= VAR_19;
    }
    while (VAR_18 < VAR_9) { VAR_7[VAR_12++] = VAR_8[VAR_18++]; }
    if (VAR_17 == VAR_6) {
      FUNC_4(&VAR_7[VAR_12 - VAR_9]);
    } else if (VAR_17 == VAR_5) {
      uint8_t* VAR_20 = &VAR_7[VAR_12 - VAR_9];
      while (VAR_9 > 0) {
        int VAR_21 = FUNC_4(VAR_20);
        VAR_20 += VAR_21;
        VAR_9 -= VAR_21;
      }
    } else if (VAR_17 == VAR_4) {
      uint16_t VAR_22 = (uint16_t)(VAR_10->params[VAR_11 * 2]
          + (VAR_10->params[VAR_11 * 2 + 1] << 8u));
      FUNC_3(&VAR_7[VAR_12 - VAR_9], VAR_9, VAR_22);
    } else if (VAR_17 == VAR_3) {
      uint16_t VAR_23 = (uint16_t)(VAR_10->params[VAR_11 * 2]
          + (VAR_10->params[VAR_11 * 2 + 1] << 8u));
      uint8_t* VAR_24 = &VAR_7[VAR_12 - VAR_9];
      while (VAR_9 > 0) {
        int VAR_25 = FUNC_3(VAR_24, VAR_9, VAR_23);
        VAR_24 += VAR_25;
        VAR_9 -= VAR_25;
      }
    }
  }
  {
    int VAR_26 = *VAR_15++;
    while (VAR_26--) { VAR_7[VAR_12++] = *VAR_15++; }
    return VAR_12;
  }
}
