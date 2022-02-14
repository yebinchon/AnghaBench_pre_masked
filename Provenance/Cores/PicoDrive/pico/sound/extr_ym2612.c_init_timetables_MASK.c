
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {double freqbase; int ** dt_tab; } ;
struct TYPE_5__ {TYPE_1__ ST; } ;
struct TYPE_6__ {TYPE_2__ OPN; } ;
typedef int INT32 ;


 int VAR_0 ;
 double VAR_1 ;
 TYPE_3__ VAR_2 ;

__attribute__((used)) static void FUNC_0(const UINT8 *VAR_3)
{
 int VAR_4,VAR_5;
 double VAR_6;


 for (VAR_5 = 0;VAR_5 <= 3;VAR_5++){
  for (VAR_4 = 0;VAR_4 <= 31;VAR_4++){
   VAR_6 = ((double)VAR_3[VAR_5*32 + VAR_4]) * VAR_1 * VAR_2 * (1<<VAR_0) / ((double)(1<<20));
   VAR_2[VAR_5][VAR_4] = (INT32) VAR_6;
   VAR_2[VAR_5+4][VAR_4] = -VAR_2[VAR_5][VAR_4];
  }
 }
}
