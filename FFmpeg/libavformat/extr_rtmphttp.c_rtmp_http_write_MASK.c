
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_5__ {int out_size; int out_capacity; scalar_t__ out_data; } ;
typedef TYPE_2__ RTMP_HTTPContext ;


 int FUNC_0 (scalar_t__*,int) ;
 int FUNC_1 (scalar_t__,int const*,int) ;

__attribute__((used)) static int FUNC_2(URLContext *VAR_0, const uint8_t *VAR_1, int VAR_2)
{
    RTMP_HTTPContext *VAR_3 = VAR_0->priv_data;

    if (VAR_3->out_size + VAR_2 > VAR_3->out_capacity) {
        int VAR_4;
        VAR_3->out_capacity = (VAR_3->out_size + VAR_2) * 2;
        if ((VAR_4 = FUNC_0(&VAR_3->out_data, VAR_3->out_capacity)) < 0) {
            VAR_3->out_size = 0;
            VAR_3->out_capacity = 0;
            return VAR_4;
        }
    }

    FUNC_1(VAR_3->out_data + VAR_3->out_size, VAR_1, VAR_2);
    VAR_3->out_size += VAR_2;

    return VAR_2;
}
