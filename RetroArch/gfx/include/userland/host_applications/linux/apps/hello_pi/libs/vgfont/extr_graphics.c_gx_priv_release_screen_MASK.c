
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__* refcounts; int lock; int * screens; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static
int32_t FUNC_3(uint32_t VAR_2)
{
   FUNC_1(&VAR_1.lock);
   VAR_1.refcounts[VAR_2]--;
   if (VAR_1.refcounts[VAR_2] == 0)
   {
      FUNC_0(VAR_1.screens[VAR_2]);
      VAR_1.screens[VAR_2] = VAR_0;
   }
   FUNC_2(&VAR_1.lock);
   return 0;
}
