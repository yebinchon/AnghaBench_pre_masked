
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ int32 ;
struct TYPE_4__ {int maxValue; int minValue; } ;
typedef TYPE_1__ ShardInterval ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(ShardInterval *VAR_0,
           ShardInterval *VAR_1)
{
 int32 VAR_2 = FUNC_0(VAR_0->minValue);
 int32 VAR_3 = FUNC_0(VAR_0->maxValue);
 int32 VAR_4 = FUNC_0(VAR_1->minValue);
 int32 VAR_5 = FUNC_0(VAR_1->maxValue);

 bool VAR_6 = VAR_2 == VAR_4;
 bool VAR_7 = VAR_3 == VAR_5;

 return VAR_6 && VAR_7;
}
