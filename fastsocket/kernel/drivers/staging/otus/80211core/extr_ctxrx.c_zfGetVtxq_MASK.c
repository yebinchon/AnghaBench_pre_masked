
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
struct TYPE_2__ {size_t* vtxqHead; size_t* vtxqTail; int *** vtxq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

zbuf_t* FUNC_4(zdev_t* VAR_2, u8_t VAR_3)
{
    zbuf_t* VAR_4;

    FUNC_2(VAR_2);

    FUNC_0();

    VAR_3 &= 0x3;
    FUNC_1(VAR_2);
    if (VAR_1->vtxqHead[VAR_3] != VAR_1->vtxqTail[VAR_3])
    {
        VAR_4 = VAR_1->vtxq[VAR_3][VAR_1->vtxqTail[VAR_3]];
        VAR_1->vtxqTail[VAR_3] = ((VAR_1->vtxqTail[VAR_3] + 1) & VAR_0);
        FUNC_3(VAR_2);
        return VAR_4;
    }
    else
    {
        FUNC_3(VAR_2);
        return 0;
    }
}
