
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int x; int y; int angle; int options; } ;
typedef TYPE_1__ mapthing_t ;
typedef int byte ;
typedef int boolean ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 void* FUNC_1 (int) ;
 int * FUNC_2 (int,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_5 (int VAR_3)
{
    byte* VAR_4;
    int VAR_5;
    mapthing_t* VAR_6;
    int VAR_7;
    boolean VAR_8;

    VAR_4 = FUNC_2 (VAR_3,VAR_0);
    VAR_7 = FUNC_3 (VAR_3) / sizeof(mapthing_t);

    VAR_6 = (mapthing_t *)VAR_4;
    for (VAR_5=0 ; VAR_5<VAR_7 ; VAR_5++, VAR_6++)
    {
 VAR_8 = 1;


 if ( VAR_2 != VAR_1)
 {
     switch(VAR_6->type)
     {
       case 68:
       case 64:
       case 88:
       case 89:
       case 69:
       case 67:
       case 71:
       case 65:
       case 66:
       case 84:
  VAR_8 = 0;
  break;
     }
 }
 if (VAR_8 == 0)
     break;


 VAR_6->x = FUNC_1(VAR_6->x);
 VAR_6->y = FUNC_1(VAR_6->y);
 VAR_6->angle = FUNC_1(VAR_6->angle);
 VAR_6->type = FUNC_1(VAR_6->type);
 VAR_6->options = FUNC_1(VAR_6->options);

 FUNC_0 (VAR_6);
    }

    FUNC_4 (VAR_4);
}
