
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int rbsp_buffer_alloc_size; int * rbsp_buffer; scalar_t__ rbsp_buffer_ref; } ;
typedef TYPE_1__ H2645RBSP ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,unsigned int,int *,int *,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int **) ;
 int * FUNC_7 (unsigned int) ;
 int FUNC_8 (int *,int ,unsigned int) ;

__attribute__((used)) static void FUNC_9(H2645RBSP *VAR_2, unsigned int VAR_3, int VAR_4)
{
    int VAR_5 = VAR_3;

    if (VAR_3 > VAR_1 - VAR_0)
        goto fail;
    VAR_3 += VAR_0;

    if (VAR_2->rbsp_buffer_alloc_size >= VAR_3 &&
        (!VAR_2->rbsp_buffer_ref || FUNC_3(VAR_2->rbsp_buffer_ref))) {
        FUNC_1(VAR_2->rbsp_buffer);
        FUNC_8(VAR_2->rbsp_buffer + VAR_5, 0, VAR_0);
        return;
    }

    VAR_3 = FUNC_0(VAR_3 + VAR_3 / 16 + 32, VAR_1);

    if (VAR_2->rbsp_buffer_ref)
        FUNC_4(&VAR_2->rbsp_buffer_ref);
    else
        FUNC_5(VAR_2->rbsp_buffer);

    VAR_2->rbsp_buffer = FUNC_7(VAR_3);
    if (!VAR_2->rbsp_buffer)
        goto fail;
    VAR_2->rbsp_buffer_alloc_size = VAR_3;

    if (VAR_4) {
        VAR_2->rbsp_buffer_ref = FUNC_2(VAR_2->rbsp_buffer, VAR_3,
                                                 ((void*)0), ((void*)0), 0);
        if (!VAR_2->rbsp_buffer_ref)
            goto fail;
    }

    return;

fail:
    VAR_2->rbsp_buffer_alloc_size = 0;
    if (VAR_2->rbsp_buffer_ref) {
        FUNC_4(&VAR_2->rbsp_buffer_ref);
        VAR_2->rbsp_buffer = ((void*)0);
    } else
        FUNC_6(&VAR_2->rbsp_buffer);

    return;
}
