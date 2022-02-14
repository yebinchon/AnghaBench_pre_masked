
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int write_out_ptr; int out_buffer; } ;
typedef TYPE_1__ MMSContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int const*) ;
 int FUNC_1 (int *,int,int,int,int *,int *,int *,int *) ;

__attribute__((used)) static int FUNC_2(MMSContext *VAR_0, const uint8_t *VAR_1)
{
    AVIOContext VAR_2;
    int VAR_3 = VAR_0->write_out_ptr - VAR_0->out_buffer;
    int VAR_4;
    FUNC_1(&VAR_2, VAR_0->write_out_ptr,
            sizeof(VAR_0->out_buffer) - VAR_3, 1, ((void*)0), ((void*)0), ((void*)0), ((void*)0));

    VAR_4 = FUNC_0(&VAR_2, VAR_1);
    if (VAR_4 < 0)
        return VAR_4;
    VAR_0->write_out_ptr += VAR_4;
    return 0;
}
