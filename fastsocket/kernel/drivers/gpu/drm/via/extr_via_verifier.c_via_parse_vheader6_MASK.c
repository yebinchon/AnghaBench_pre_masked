
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;
typedef int drm_via_private_t ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_1(drm_via_private_t *VAR_1, uint32_t const **VAR_2,
     const uint32_t *VAR_3)
{

 uint32_t VAR_4, VAR_5, VAR_6;
 const uint32_t *VAR_7 = *VAR_2;

 VAR_6 = VAR_5 = *++VAR_7;
 VAR_7 += 3;
 while (VAR_6--) {
  VAR_4 = *VAR_7++;
  FUNC_0(VAR_4, *VAR_7++);
 }
 VAR_5 <<= 1;
 if (VAR_5 & 3)
  VAR_7 += 4 - (VAR_5 & 3);
 *VAR_2 = VAR_7;
 return VAR_0;
}
