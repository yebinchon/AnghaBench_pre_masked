
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct txdds_ent {int dummy; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static const struct txdds_ent *FUNC_0(const struct txdds_ent *VAR_1,
            unsigned VAR_2)
{




 if (VAR_2 <= 2)
  VAR_2 = 1;
 else if (VAR_2 > VAR_0)
  VAR_2 = VAR_0 - 1;
 else
  VAR_2--;
 return VAR_1 + VAR_2;
}
