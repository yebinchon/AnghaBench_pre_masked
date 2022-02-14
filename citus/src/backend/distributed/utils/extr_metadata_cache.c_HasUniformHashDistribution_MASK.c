
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64 ;
typedef int int32 ;
struct TYPE_3__ {int maxValue; int minValue; } ;
typedef TYPE_1__ ShardInterval ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

bool
FUNC_1(ShardInterval **VAR_3,
         int VAR_4)
{
 uint64 VAR_5 = 0;
 int VAR_6 = 0;


 if (VAR_4 == 0)
 {
  return 0;
 }


 VAR_5 = VAR_0 / VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
 {
  ShardInterval *VAR_7 = VAR_3[VAR_6];
  int32 VAR_8 = VAR_2 + (VAR_6 * VAR_5);
  int32 VAR_9 = VAR_8 + (VAR_5 - 1);

  if (VAR_6 == (VAR_4 - 1))
  {
   VAR_9 = VAR_1;
  }

  if (FUNC_0(VAR_7->minValue) != VAR_8 ||
   FUNC_0(VAR_7->maxValue) != VAR_9)
  {
   return 0;
  }
 }

 return 1;
}
