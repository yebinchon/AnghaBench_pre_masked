
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
struct TYPE_2__ {size_t vmmqHead; size_t vmmqTail; int ** vmmq; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

zbuf_t* FUNC_4(zdev_t* VAR_2)
{
    zbuf_t* VAR_3;
    FUNC_2(VAR_2);
    FUNC_0();

    FUNC_1(VAR_2);
    if (VAR_1->vmmqHead != VAR_1->vmmqTail)
    {
        VAR_3 = VAR_1->vmmq[VAR_1->vmmqTail];
        VAR_1->vmmqTail = ((VAR_1->vmmqTail + 1) & VAR_0);
        FUNC_3(VAR_2);
        return VAR_3;
    }
    else
    {
        FUNC_3(VAR_2);
        return 0;
    }
}
