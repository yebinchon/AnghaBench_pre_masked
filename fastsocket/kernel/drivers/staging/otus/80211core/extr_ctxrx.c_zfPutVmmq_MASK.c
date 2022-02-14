
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u16_t ;
struct TYPE_2__ {int vmmqHead; int vmmqTail; int ** vmmq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

u16_t FUNC_6(zdev_t* VAR_5, zbuf_t* VAR_6)
{
    FUNC_4(VAR_5);
    FUNC_2();

    FUNC_3(VAR_5);
    if (((VAR_4->vmmqHead + 1) & VAR_3) != VAR_4->vmmqTail)
    {
        VAR_4->vmmq[VAR_4->vmmqHead] = VAR_6;
        VAR_4->vmmqHead = ((VAR_4->vmmqHead + 1) & VAR_3);
        FUNC_5(VAR_5);
        return VAR_2;
    }
    else
    {
        FUNC_5(VAR_5);

        FUNC_0(VAR_5, VAR_6, VAR_2);
        FUNC_1(VAR_1, "Packet discarded, VMmQ full");
        return VAR_0;
    }
}
