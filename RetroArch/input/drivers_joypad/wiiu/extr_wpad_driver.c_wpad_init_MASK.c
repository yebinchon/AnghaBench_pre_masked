
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pad_list; } ;
struct TYPE_3__ {int connected; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int,int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;

__attribute__((used)) static bool FUNC_3(void *VAR_3)
{
   int VAR_4 = FUNC_1(VAR_0.pad_list);
   if(VAR_4 < 0)
      return 0;

   VAR_0.pad_list[VAR_4].connected = 1;
   FUNC_0(VAR_4, &VAR_1);
   FUNC_2();
   VAR_2 = 1;

   return 1;
}
