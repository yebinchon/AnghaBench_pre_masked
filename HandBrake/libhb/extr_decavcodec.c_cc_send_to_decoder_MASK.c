
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int list_subtitle; } ;
typedef TYPE_1__ hb_work_private_t ;
struct TYPE_6__ {int fifo_in; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int hb_buffer_t ;


 int * FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;

__attribute__((used)) static void FUNC_4(hb_work_private_t *VAR_0, hb_buffer_t *VAR_1)
{
    if (VAR_1 == ((void*)0))
        return;



    hb_subtitle_t *VAR_2;
    int VAR_3 = 0, VAR_4 = FUNC_2(VAR_0->list_subtitle);
    while (--VAR_4 > 0)
    {

        hb_buffer_t *VAR_5 = FUNC_0(VAR_1);

        VAR_2 = FUNC_3(VAR_0->list_subtitle, VAR_3++);
        FUNC_1(VAR_2->fifo_in, VAR_5);
    }
    VAR_2 = FUNC_3(VAR_0->list_subtitle, VAR_3);
    FUNC_1( VAR_2->fifo_in, VAR_1 );
}
