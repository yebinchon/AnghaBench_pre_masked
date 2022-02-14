
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;

int
FUNC_0(int32_t VAR_3)
{
 int32_t VAR_4 = VAR_0;
 int VAR_5 = 0;

 if (VAR_3 >= VAR_1) {
                return(-1);
        }

 while(VAR_4 <= VAR_3) {
  VAR_5 += VAR_2[VAR_4++].count;
 }

 return VAR_5;
}
