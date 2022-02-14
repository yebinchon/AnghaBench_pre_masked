
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int alloc; int size; int * buf; } ;
typedef TYPE_1__ hb_tx3g_output_buf_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (int *,int) ;

__attribute__((used)) static int FUNC_3(hb_tx3g_output_buf_t * VAR_0, int VAR_1)
{
    if (VAR_0->alloc < VAR_1)
    {
        uint8_t * VAR_2;

        VAR_0->alloc = VAR_1 + 1024;
        VAR_0->size = VAR_1;
        VAR_2 = FUNC_2(VAR_0->buf, VAR_0->alloc);
        if (VAR_2 == ((void*)0))
        {
            FUNC_1("realloc failed!");
            FUNC_0(VAR_0->buf);
            VAR_0->size = 0;
            VAR_0->alloc = 0;
            VAR_0->buf = ((void*)0);
            return 0;
        }
        VAR_0->buf = VAR_2;
    }
    return 1;
}
