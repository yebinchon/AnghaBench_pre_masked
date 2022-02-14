
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ int32_t ;
struct TYPE_2__ {int sensormode; int pict_res; int curr_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ) ;

__attribute__((used)) static int32_t FUNC_1(int VAR_3)
{
 int32_t VAR_4 = 0;

 VAR_4 = FUNC_0(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 VAR_2->curr_res = VAR_2->pict_res;
 VAR_2->sensormode = VAR_3;

 return VAR_4;
}
