
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pad_list; } ;
struct TYPE_3__ {int connected; } ;


 int FUNC_0 (char*,int) ;
 int* VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_2(unsigned VAR_2)
{
   int VAR_3 = FUNC_1(VAR_1.pad_list);
   if(VAR_3 >= 0)
   {
      FUNC_0("[kpad]: got slot %d\n", VAR_3);
      VAR_0[VAR_2] = VAR_3;
      VAR_1.pad_list[VAR_3].connected = 1;
   }

   return VAR_3;
}
