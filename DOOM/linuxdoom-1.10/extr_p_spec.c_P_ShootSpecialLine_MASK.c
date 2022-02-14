
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int player; } ;
typedef TYPE_1__ mobj_t ;
struct TYPE_10__ {int special; } ;
typedef TYPE_2__ line_t ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_4
( mobj_t* VAR_3,
  line_t* VAR_4 )
{
    int VAR_5;


    if (!VAR_3->player)
    {
 VAR_5 = 0;
 switch(VAR_4->special)
 {
   case 46:

     VAR_5 = 1;
     break;
 }
 if (!VAR_5)
     return;
    }

    switch(VAR_4->special)
    {
      case 24:

 FUNC_1(VAR_4,VAR_1);
 FUNC_3(VAR_4,0);
 break;

      case 46:

 FUNC_0(VAR_4,VAR_0);
 FUNC_3(VAR_4,1);
 break;

      case 47:

 FUNC_2(VAR_4,VAR_2,0);
 FUNC_3(VAR_4,0);
 break;
    }
}
