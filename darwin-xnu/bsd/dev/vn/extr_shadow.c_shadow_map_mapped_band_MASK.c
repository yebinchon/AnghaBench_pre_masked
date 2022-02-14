
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t zeroth_band; size_t* bands; scalar_t__ next_band; } ;
typedef TYPE_1__ shadow_map_t ;
typedef scalar_t__ boolean_t ;
typedef size_t band_number_t ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static boolean_t
FUNC_0(shadow_map_t * VAR_3, band_number_t VAR_4,
         boolean_t VAR_5, band_number_t * VAR_6)
{
    boolean_t VAR_7 = VAR_1;

    if (VAR_4 == VAR_3->zeroth_band) {
 *VAR_6 = VAR_0;
 VAR_7 = VAR_2;
    }
    else {
 *VAR_6 = VAR_3->bands[VAR_4];
 if (*VAR_6 == VAR_0) {
     if (VAR_5) {

  if (VAR_3->next_band == 0) {

      VAR_3->zeroth_band = VAR_4;
  }
  *VAR_6 = VAR_3->bands[VAR_4] = VAR_3->next_band++;
  VAR_7 = VAR_2;
     }
 }
 else {
     VAR_7 = VAR_2;
 }
    }
    return (VAR_7);
}
