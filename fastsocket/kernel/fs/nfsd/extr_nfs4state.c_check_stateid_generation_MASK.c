
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ si_generation; } ;
typedef TYPE_1__ stateid_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(stateid_t *VAR_4, stateid_t *VAR_5, int VAR_6)
{




 if ((VAR_6 & VAR_0) && VAR_4->si_generation == 0)
  goto out;


 if (VAR_4->si_generation > VAR_5->si_generation)
  return VAR_2;
 if (VAR_4->si_generation < VAR_5->si_generation)
  return VAR_3;
out:
 return VAR_1;
}
