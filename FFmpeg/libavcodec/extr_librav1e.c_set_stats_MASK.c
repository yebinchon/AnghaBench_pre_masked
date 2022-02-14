
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ pass_size; scalar_t__ pass_pos; scalar_t__ pass_data; int ctx; } ;
typedef TYPE_1__ librav1eContext ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_1(AVCodecContext *VAR_1)
{
    librav1eContext *VAR_2 = VAR_1->priv_data;
    int VAR_3 = 1;

    while (VAR_3 > 0 && VAR_2->pass_size - VAR_2->pass_pos > 0) {
        VAR_3 = FUNC_0(VAR_2->ctx, VAR_2->pass_data + VAR_2->pass_pos, VAR_2->pass_size);
        if (VAR_3 < 0)
            return VAR_0;
        VAR_2->pass_pos += VAR_3;
    }

    return 0;
}
