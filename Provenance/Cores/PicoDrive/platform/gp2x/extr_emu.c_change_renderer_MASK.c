
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int renderer32x; int renderer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static void FUNC_0(int VAR_6)
{
 int *VAR_7;
 if (VAR_2 & VAR_0)
  VAR_7 = &VAR_5.renderer32x;
 else
  VAR_7 = &VAR_5.renderer;
 *VAR_7 += VAR_6;


 if ((VAR_2 & VAR_1) && *VAR_7 == VAR_3)
  (*VAR_7)++;

 if (*VAR_7 >= VAR_4)
  *VAR_7 = 0;
 else if (*VAR_7 < 0)
  *VAR_7 = VAR_4 - 1;
}
