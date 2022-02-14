
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {TYPE_1__* priv_data; } ;
struct TYPE_4__ {int const* n_val; int const* r_val; } ;
typedef TYPE_1__ OMAContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int const*,int) ;
 int FUNC_2 (int const*,int ,int) ;

__attribute__((used)) static int FUNC_3(AVFormatContext *VAR_0, const uint8_t *VAR_1, const uint8_t *VAR_2,
                int VAR_3)
{
    OMAContext *VAR_4 = VAR_0->priv_data;

    if (!VAR_1 && !VAR_2)
        return -1;

    VAR_3 = FUNC_0(VAR_3, 16);


    if (VAR_1) {
        if (VAR_1 != VAR_4->r_val) {
            FUNC_2(VAR_4->r_val, 0, 24);
            FUNC_1(VAR_4->r_val, VAR_1, VAR_3);
        }
        FUNC_1(&VAR_4->r_val[16], VAR_1, 8);
    }
    if (VAR_2) {
        if (VAR_2 != VAR_4->n_val) {
            FUNC_2(VAR_4->n_val, 0, 24);
            FUNC_1(VAR_4->n_val, VAR_2, VAR_3);
        }
        FUNC_1(&VAR_4->n_val[16], VAR_2, 8);
    }

    return 0;
}
