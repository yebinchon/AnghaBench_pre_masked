
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ entry_count; } ;


 TYPE_1__** VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int
FUNC_1(void)
{
 int VAR_1 = FUNC_0();
 int VAR_2 = 0;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3)
  VAR_2 += VAR_0[VAR_3]->entry_count;
 return VAR_2;
}
