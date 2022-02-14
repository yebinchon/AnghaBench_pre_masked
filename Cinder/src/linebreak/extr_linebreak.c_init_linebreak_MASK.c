
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ prop; int start; } ;
struct TYPE_3__ {int end; TYPE_2__* lbp; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 TYPE_2__* VAR_2 ;
 TYPE_1__* VAR_3 ;

void FUNC_0(void)
{
 size_t VAR_4;
 size_t VAR_5;
 size_t VAR_6;
 size_t VAR_7;

 VAR_6 = 0;
 while (VAR_2[VAR_6].prop != VAR_0)
  ++VAR_6;
 VAR_7 = VAR_6 / VAR_1;
 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_1; ++VAR_4)
 {
  VAR_3[VAR_4].lbp = VAR_2 + VAR_5;
  VAR_5 += VAR_7;
  VAR_3[VAR_4].end = VAR_2[VAR_5].start - 1;
 }
 VAR_3[--VAR_4].end = 0xFFFFFFFF;
}
