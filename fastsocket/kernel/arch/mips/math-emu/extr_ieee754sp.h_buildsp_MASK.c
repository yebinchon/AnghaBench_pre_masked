
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int sign; int bexp; unsigned int mant; } ;
struct TYPE_5__ {TYPE_1__ parts; } ;
typedef TYPE_2__ ieee754sp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline ieee754sp FUNC_1(int VAR_4, int VAR_5, unsigned VAR_6)
{
 ieee754sp VAR_7;

 FUNC_0((VAR_4) == 0 || (VAR_4) == 1);
 FUNC_0((VAR_5) >= VAR_2 - 1 + VAR_0
        && (VAR_5) <= VAR_1 + 1 + VAR_0);
 FUNC_0(((VAR_6) >> VAR_3) == 0);

 VAR_7.parts.sign = VAR_4;
 VAR_7.parts.bexp = VAR_5;
 VAR_7.parts.mant = VAR_6;

 return VAR_7;
}
