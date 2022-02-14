
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int verifier_state_t ;
typedef int uint32_t ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int const**,int const*,int) ;

__attribute__((used)) static __inline__ verifier_state_t
FUNC_3(uint32_t const **VAR_2, const uint32_t * VAR_3)
{
 uint32_t VAR_4;
 const uint32_t *VAR_5 = *VAR_2;
 uint32_t VAR_6;

 if (VAR_3 - VAR_5 < 4) {
  FUNC_0("Illegal termination of video header6 command\n");
  return VAR_1;
 }
 VAR_5++;
 VAR_4 = *VAR_5++;
 if (*VAR_5++ != 0x00F60000) {
  FUNC_0("Illegal header6 header data\n");
  return VAR_1;
 }
 if (*VAR_5++ != 0x00000000) {
  FUNC_0("Illegal header6 header data\n");
  return VAR_1;
 }
 if ((VAR_3 - VAR_5) < (VAR_4 << 1)) {
  FUNC_0("Illegal termination of video header6 command\n");
  return VAR_1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
  if (FUNC_1(*VAR_5++))
   return VAR_1;
  VAR_5++;
 }
 VAR_4 <<= 1;
 if ((VAR_4 & 3) && FUNC_2(&VAR_5, VAR_3, 4 - (VAR_4 & 3)))
  return VAR_1;
 *VAR_2 = VAR_5;
 return VAR_0;
}
