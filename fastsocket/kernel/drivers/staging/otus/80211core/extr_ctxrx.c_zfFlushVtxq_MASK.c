
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
struct TYPE_2__ {int queueFlushed; } ;


 TYPE_1__* VAR_0 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_1)
{
    zbuf_t* VAR_2;
    u8_t VAR_3;
    FUNC_5(VAR_1);


    while ((VAR_2 = FUNC_0(VAR_1)) != 0)
    {
        FUNC_2(VAR_1, VAR_2, 0);
        FUNC_3("zfFlushVtxq: [Vmmq]");
        VAR_0->queueFlushed |= 0x10;
    }


    for (VAR_3=0; VAR_3<4; VAR_3++)
    {
        while ((VAR_2 = FUNC_1(VAR_1, VAR_3)) != 0)
        {
            FUNC_2(VAR_1, VAR_2, 0);
            FUNC_4("zfFlushVtxq: [zfGetVtxq]- ", VAR_3);
            VAR_0->queueFlushed |= (1<<VAR_3);
        }
    }
}
