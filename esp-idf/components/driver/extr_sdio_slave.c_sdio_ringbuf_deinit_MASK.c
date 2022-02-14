
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * data; int * remain_cnt; } ;
typedef TYPE_1__ sdio_ringbuf_t ;


 TYPE_1__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(sdio_ringbuf_t* VAR_0)
{
    if (VAR_0->remain_cnt != ((void*)0)) FUNC_2(VAR_0->remain_cnt);
    if (VAR_0->data != ((void*)0)) FUNC_1(VAR_0->data);
    *VAR_0 = FUNC_0();
}
