
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int maxValueExists; int minValueExists; } ;
typedef TYPE_1__ ShardInterval ;


 int FUNC_0 (int ) ;

__attribute__((used)) static bool
FUNC_1(ShardInterval **VAR_0, int VAR_1)
{
 bool VAR_2 = 0;
 ShardInterval *VAR_3 = ((void*)0);

 if (VAR_1 == 0)
 {
  return VAR_2;
 }

 FUNC_0(VAR_0 != ((void*)0));





 VAR_3 = VAR_0[VAR_1 - 1];
 if (!VAR_3->minValueExists || !VAR_3->maxValueExists)
 {
  VAR_2 = 1;
 }

 return VAR_2;
}
