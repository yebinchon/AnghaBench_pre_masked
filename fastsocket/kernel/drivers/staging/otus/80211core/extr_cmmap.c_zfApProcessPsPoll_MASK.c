
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef size_t u16_t ;
struct TYPE_3__ {size_t uniHead; size_t uniTail; int ** uniArray; } ;
struct TYPE_4__ {TYPE_1__ ap; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *,size_t,size_t*) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 size_t FUNC_6 (int *,int *,int) ;

void FUNC_7(zdev_t* VAR_3, zbuf_t* VAR_4)
{
    u16_t VAR_5[3];
    u16_t VAR_6[3];
    zbuf_t* VAR_7 = ((void*)0);
    u16_t VAR_8;
    u8_t VAR_9 = 0;

    FUNC_4(VAR_3);

    FUNC_2();

    VAR_5[0] = FUNC_6(VAR_3, VAR_4, 10);
    VAR_5[1] = FUNC_6(VAR_3, VAR_4, 12);
    VAR_5[2] = FUNC_6(VAR_3, VAR_4, 14);


    FUNC_3(VAR_3);
    VAR_8 = VAR_2->ap.uniHead;
    while (VAR_8 != VAR_2->ap.uniTail)
    {
        VAR_7 = VAR_2->ap.uniArray[VAR_8];

        VAR_6[0] = FUNC_6(VAR_3, VAR_7, 0);
        VAR_6[1] = FUNC_6(VAR_3, VAR_7, 2);
        VAR_6[2] = FUNC_6(VAR_3, VAR_7, 4);

        if ((VAR_5[0] == VAR_6[0]) && (VAR_5[1] == VAR_6[1]) && (VAR_5[2] == VAR_6[2]))
        {
            VAR_9 = FUNC_0(VAR_3, VAR_8, VAR_5);
            break;
        }
        else
        {
            VAR_7 = ((void*)0);
        }
        VAR_8 = (VAR_8 + 1) & (VAR_1 - 1);
    }
    FUNC_5(VAR_3);


    if (VAR_7 != ((void*)0))
    {

        FUNC_1(VAR_3, VAR_7, 0, VAR_0, VAR_9);
    }

    return;
}
