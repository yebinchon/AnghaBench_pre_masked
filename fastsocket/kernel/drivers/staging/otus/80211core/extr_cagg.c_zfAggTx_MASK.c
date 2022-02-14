
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_2__ {int aggInitiated; } ;
typedef int * TID_TX ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *,int,int *) ;
 int * FUNC_2 (int *,int,int) ;
 int * FUNC_3 (int *,int,int,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

u16_t FUNC_8(zdev_t* VAR_2, zbuf_t* VAR_3, u16_t VAR_4)
{
    u16_t VAR_5;



    TID_TX VAR_6;

    FUNC_6(VAR_2);

    FUNC_4();

    if(!VAR_1->aggInitiated)
    {
        return VAR_0;
    }

    VAR_5 = FUNC_0(VAR_2, VAR_3);



    if (0xffff == VAR_5)
    {




        return VAR_0;
    }





    VAR_6 = FUNC_2(VAR_2, VAR_5, VAR_4);





    if (VAR_6 != ((void*)0))
    {





        if (0)
        {





            FUNC_5(VAR_2);



            FUNC_7(VAR_2);

        }

        return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);

    }
    else
    {






        if (1)
        {




            VAR_6 = FUNC_3(VAR_2, VAR_5, VAR_4, VAR_3);



            if (VAR_6)
            {
                return FUNC_1(VAR_2, VAR_3, VAR_5, VAR_6);

            }
            else
            {




                return VAR_0;
            }
        }
        else
        {




            return VAR_0;
        }
    }



}
