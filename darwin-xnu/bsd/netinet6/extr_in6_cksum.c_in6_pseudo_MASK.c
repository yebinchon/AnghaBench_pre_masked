
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct in6_addr {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct in6_addr const*) ;

uint16_t
FUNC_2(const struct in6_addr *VAR_0, const struct in6_addr *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3 = 0;
 const uint16_t *VAR_4;




 VAR_4 = (const uint16_t *)VAR_0;
 VAR_3 += VAR_4[0];
 if (!FUNC_1(VAR_0))
  VAR_3 += VAR_4[1];
 VAR_3 += VAR_4[2]; VAR_3 += VAR_4[3]; VAR_3 += VAR_4[4]; VAR_3 += VAR_4[5];
 VAR_3 += VAR_4[6]; VAR_3 += VAR_4[7];




 VAR_4 = (const uint16_t *)VAR_1;
 VAR_3 += VAR_4[0];
 if (!FUNC_1(VAR_1))
  VAR_3 += VAR_4[1];
 VAR_3 += VAR_4[2]; VAR_3 += VAR_4[3]; VAR_3 += VAR_4[4]; VAR_3 += VAR_4[5];
 VAR_3 += VAR_4[6]; VAR_3 += VAR_4[7];







 VAR_3 += VAR_2;


 FUNC_0(VAR_3);

 return (VAR_3);
}
