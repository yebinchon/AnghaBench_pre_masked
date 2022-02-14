
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
typedef int int64_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_0(int64_t VAR_2, uint64_t* VAR_3, uint64_t* VAR_4, int64_t* VAR_5)
{
 uint64_t VAR_6;
 int64_t VAR_7, VAR_8;
 VAR_6 = (uint64_t)1 << 63;
 VAR_6 += (VAR_2 / 1024) * 2199;
 VAR_6 /= VAR_1;
 *VAR_3 = VAR_6 * 2;






 VAR_7 = (VAR_2 > 0)? VAR_2 >> 32 : -((-VAR_2) >> 32);
 VAR_6 = (uint64_t) VAR_0;
 VAR_6 += VAR_7;
 *VAR_4 = VAR_6;






 VAR_8 = (VAR_2 > 0)? ((uint32_t) VAR_2) : -((uint32_t) (-VAR_2));
 *VAR_5 = (VAR_8>0)? VAR_8 << 32 : -( (-VAR_8) << 32);

 return;
}
