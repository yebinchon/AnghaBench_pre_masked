
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ cur_pos; scalar_t__ tail_pos; scalar_t__ out2; scalar_t__ out; } ;
typedef TYPE_1__ OutputStream ;


 int FUNC_0 (scalar_t__,int *,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, uint8_t *VAR_1, int VAR_2)
{
    OutputStream *VAR_3 = VAR_0;
    if (VAR_3->out)
        FUNC_0(VAR_3->out, VAR_1, VAR_2);
    if (VAR_3->out2)
        FUNC_0(VAR_3->out2, VAR_1, VAR_2);
    VAR_3->cur_pos += VAR_2;
    if (VAR_3->cur_pos >= VAR_3->tail_pos)
        VAR_3->tail_pos = VAR_3->cur_pos;
    return VAR_2;
}
