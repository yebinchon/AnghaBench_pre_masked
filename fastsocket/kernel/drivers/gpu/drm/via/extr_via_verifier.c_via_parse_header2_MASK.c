
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int verifier_state_t ;
typedef int uint32_t ;
struct TYPE_3__ {int** fire_offsets; int num_fire_offsets; } ;
typedef TYPE_1__ drm_via_private_t ;


 int const VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;

 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int FUNC_0 (scalar_t__,int ) ;
 int VAR_13 ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_1(drm_via_private_t *VAR_14, uint32_t const **VAR_15,
    const uint32_t *VAR_16, int *VAR_17)
{
 uint32_t VAR_18;
 const uint32_t *VAR_19 = *VAR_15;
 const uint32_t *VAR_20;
 int VAR_21 = 0;

 VAR_20 = VAR_14->fire_offsets[*VAR_17];
 VAR_19++;
 VAR_18 = (*VAR_19 & 0xFFFF0000) >> 16;
 FUNC_0(VAR_8 + VAR_7, *VAR_19++);
 switch (VAR_18) {
 case 128:
  while ((VAR_19 < VAR_16) &&
         (*VAR_17 < VAR_14->num_fire_offsets) &&
         (*VAR_19 & VAR_5) == VAR_4) {
   while (VAR_19 <= VAR_20) {
    FUNC_0(VAR_9 + VAR_7 +
       (VAR_21 & 63), *VAR_19++);
    VAR_21 += 4;
   }
   if ((VAR_19 < VAR_16)
       && ((*VAR_19 & VAR_1) == VAR_0))
    VAR_19++;

   if (++(*VAR_17) < VAR_14->num_fire_offsets)
    VAR_20 = VAR_14->fire_offsets[*VAR_17];
  }
  break;
 default:
  while (VAR_19 < VAR_16) {

   if (*VAR_19 == VAR_6 ||
       (*VAR_19 & VAR_3) == VAR_2 ||
       (*VAR_19 & VAR_10) == VAR_11 ||
       (*VAR_19 & VAR_10) == VAR_12)
    break;

   FUNC_0(VAR_9 + VAR_7 +
      (VAR_21 & 63), *VAR_19++);
   VAR_21 += 4;
  }
 }
 *VAR_15 = VAR_19;
 return VAR_13;
}
