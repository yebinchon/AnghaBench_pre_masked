
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int renderer; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int ) ;
 int * VAR_2 ;

void FUNC_2(int VAR_3, int VAR_4)
{
 VAR_1.renderer += VAR_3;
 if (VAR_1.renderer >= VAR_0)
  VAR_1.renderer = 0;
 else if (VAR_1.renderer < 0)
  VAR_1.renderer = VAR_0 - 1;

 if (!VAR_4)
  FUNC_0();

 FUNC_1(VAR_2[VAR_1.renderer]);
}
