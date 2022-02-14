
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {scalar_t__ blocks_per_band; } ;
typedef TYPE_1__ shadow_map_t ;
typedef scalar_t__ boolean_t ;
typedef scalar_t__ band_number_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,scalar_t__,scalar_t__*) ;

__attribute__((used)) static uint32_t
FUNC_4(shadow_map_t * VAR_1, uint32_t VAR_2,
        uint32_t VAR_3, boolean_t VAR_4)
{
    band_number_t VAR_5 = FUNC_2(VAR_1, VAR_2);
    uint32_t VAR_6 = VAR_2 + VAR_3;
    boolean_t VAR_7;
    band_number_t VAR_8;
    uint32_t VAR_9 = VAR_6;
    uint32_t VAR_10;

    VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_4, &VAR_8);
    if (VAR_4 == VAR_0 && VAR_7 == VAR_0) {
 static int VAR_11 = 0;

 if (VAR_11 == 0) {
     FUNC_1("shadow_map_contiguous: this can't happen!\n");
     VAR_11 = 1;
 }
 return (VAR_2);
    }
    for (VAR_10 = FUNC_0(VAR_2 + VAR_1->blocks_per_band,
        VAR_1->blocks_per_band);
  VAR_10 < VAR_6; VAR_10 += VAR_1->blocks_per_band) {
 band_number_t VAR_12;

 VAR_5++;
 VAR_7 = FUNC_3(VAR_1, VAR_5, VAR_4,
        &VAR_12);
 if (VAR_4 == VAR_0 && VAR_7 == VAR_0) {
     return (VAR_10);
 }
 if ((VAR_8 + 1) != VAR_12) {

     VAR_9 = VAR_10;
     break;
 }
 VAR_8 = VAR_12;
    }
    return (VAR_9);
}
