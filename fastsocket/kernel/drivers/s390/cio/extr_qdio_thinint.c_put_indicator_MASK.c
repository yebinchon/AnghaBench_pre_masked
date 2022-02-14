
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct indicator_t {int dummy; } ;
struct TYPE_2__ {int count; } ;


 int FUNC_0 (int *) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static void FUNC_1(u32 *VAR_1)
{
 int VAR_2;

 if (!VAR_1)
  return;
 VAR_2 = ((unsigned long)VAR_1 - (unsigned long)VAR_0) /
  sizeof(struct indicator_t);
 FUNC_0(&VAR_0[VAR_2].count);
}
