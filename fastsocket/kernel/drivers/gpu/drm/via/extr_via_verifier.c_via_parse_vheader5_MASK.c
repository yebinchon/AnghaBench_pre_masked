
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;
typedef int drm_via_private_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ) ;
 int VAR_1 ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_1(drm_via_private_t *VAR_2, uint32_t const **VAR_3,
     const uint32_t *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;
 const uint32_t *VAR_8 = *VAR_3;

 VAR_5 = *VAR_8++ & ~VAR_0;
 VAR_7 = VAR_6 = *VAR_8;
 VAR_8 += 3;
 while (VAR_7--)
  FUNC_0(VAR_5, *VAR_8++);
 if (VAR_6 & 3)
  VAR_8 += 4 - (VAR_6 & 3);
 *VAR_3 = VAR_8;
 return VAR_1;
}
