
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ next_in; scalar_t__ avail_in; int avail_out; int * next_out; int * opaque; int * zfree; int * zalloc; } ;
typedef TYPE_1__ z_stream ;
typedef int uint8_t ;
struct TYPE_9__ {scalar_t__ enc; scalar_t__ enc_size; scalar_t__ sl_begin; scalar_t__ sl_end; } ;
typedef TYPE_2__ Block ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_3(Block * VAR_3, Block * VAR_4, uint8_t * VAR_5,
                            int *VAR_6, int VAR_7)
{
    z_stream VAR_8;
    int VAR_9;
    VAR_8.zalloc = ((void*)0);
    VAR_8.zfree = ((void*)0);
    VAR_8.opaque = ((void*)0);
    VAR_9 = FUNC_2(&VAR_8, VAR_7);
    if (VAR_9 < 0)
        return -1;

    VAR_8.next_in = VAR_4->enc;
    VAR_8.avail_in = VAR_4->enc_size;
    while (VAR_8.avail_in > 0) {
        VAR_8.next_out = VAR_5;
        VAR_8.avail_out = *VAR_6;
        VAR_9 = FUNC_0(&VAR_8, VAR_2);
        if (VAR_9 < 0)
            return -1;
    }

    VAR_8.next_in = VAR_3->sl_begin;
    VAR_8.avail_in = VAR_3->sl_end - VAR_3->sl_begin;
    VAR_8.next_out = VAR_5;
    VAR_8.avail_out = *VAR_6;
    VAR_9 = FUNC_0(&VAR_8, VAR_0);
    FUNC_1(&VAR_8);
    *VAR_6 -= VAR_8.avail_out;
    if (VAR_9 != VAR_1)
        return -1;
    return 0;
}
