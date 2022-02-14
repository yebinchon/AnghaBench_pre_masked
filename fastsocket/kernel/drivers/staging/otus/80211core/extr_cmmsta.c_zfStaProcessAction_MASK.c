
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_3__ {int DFSEnable; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;



 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int) ;

u16_t FUNC_5(zdev_t* VAR_1, zbuf_t* VAR_2)
{
    u8_t VAR_3, VAR_4;
    FUNC_3(VAR_1);

    VAR_3 = FUNC_4(VAR_1, VAR_2, 24);
    VAR_4 = FUNC_4(VAR_1, VAR_2, 25);
    switch (VAR_3)
    {
        case 0:
         switch(VAR_4)
         {
          case 0:
           break;
          case 1:

           break;
          case 2:


           break;
          case 3:


           break;
          case 4:
                    if (VAR_0->sta.DFSEnable)
                        FUNC_1(VAR_1, VAR_2);
           break;
          default:
           FUNC_2("Action Frame contain not support action field ", VAR_4);
           break;
         }
         break;
        case 128:
            FUNC_0(VAR_1, VAR_2);
            break;
        case 17:
         break;
    }

    return 0;
}
