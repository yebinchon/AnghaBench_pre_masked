
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct ipw_supported_rates {size_t num_rates; int * supported_rates; } ;



__attribute__((used)) static void FUNC_0(struct ipw_supported_rates *VAR_0,
      const struct ipw_supported_rates *VAR_1)
{
 u8 VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1->num_rates; VAR_2++)
  VAR_0->supported_rates[VAR_2] = VAR_1->supported_rates[VAR_2];
 VAR_0->num_rates = VAR_1->num_rates;
}
