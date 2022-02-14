
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* pad_list; } ;
struct TYPE_7__ {int (* name ) (int) ;} ;
struct TYPE_6__ {int type; } ;
struct TYPE_5__ {int connected; } ;


 int VAR_0 ;
 int* VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (int,int ) ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_2(unsigned VAR_5)
{
   int VAR_6 = VAR_1[VAR_5];

   if(VAR_6 >= 0)
   {
      FUNC_0(VAR_6, VAR_3.name(VAR_6));
      VAR_4[VAR_5].type = VAR_0;
      VAR_2.pad_list[VAR_6].connected = 0;
      VAR_1[VAR_5] = -1;
   }
}
