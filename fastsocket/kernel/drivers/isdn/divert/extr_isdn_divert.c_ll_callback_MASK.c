
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int command; int arg; } ;
typedef TYPE_1__ isdn_ctrl ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3(isdn_ctrl *VAR_2)
{
  switch (VAR_2->command)
   { case 130:
     case 129:
       return(FUNC_0(VAR_2));
     break;

     case 128:
       if ((VAR_2->arg & 0xFF) == VAR_1)
 { if (VAR_2->arg != VAR_0)
            return(FUNC_2(VAR_2));
          else
            return(0);
        }
       else
         return(-1);

     default:
       return(FUNC_1(VAR_2));
   }
}
