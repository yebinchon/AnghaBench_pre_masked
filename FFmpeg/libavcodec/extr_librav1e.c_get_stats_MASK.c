
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {int pass_pos; int * pass_data; int pass_size; int ctx; } ;
typedef TYPE_1__ librav1eContext ;
struct TYPE_9__ {int stats_out; TYPE_1__* priv_data; } ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_2__ RaData ;
typedef TYPE_3__ AVCodecContext ;


 int FUNC_0 (int ) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (int ,size_t,int *,int) ;
 int * FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int **) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (TYPE_2__*) ;
 TYPE_2__* FUNC_8 (int ) ;

__attribute__((used)) static int FUNC_9(AVCodecContext *VAR_1, int VAR_2)
{
    librav1eContext *VAR_3 = VAR_1->priv_data;
    RaData* VAR_4 = FUNC_8(VAR_3->ctx);
    if (!VAR_4)
        return 0;

    if (!VAR_2) {
        uint8_t *VAR_5 = FUNC_3(VAR_3->pass_data, &VAR_3->pass_size,
                                      VAR_3->pass_pos + VAR_4->len);
        if (!VAR_5) {
            FUNC_7(VAR_4);
            return FUNC_0(VAR_0);
        }

        VAR_3->pass_data = VAR_5;
        FUNC_6(VAR_3->pass_data + VAR_3->pass_pos, VAR_4->data, VAR_4->len);
        VAR_3->pass_pos += VAR_4->len;
    } else {
        size_t VAR_6 = FUNC_1(VAR_3->pass_pos);

        FUNC_6(VAR_3->pass_data, VAR_4->data, VAR_4->len);

        VAR_1->stats_out = FUNC_5(VAR_6);
        if (!VAR_1->stats_out) {
            FUNC_7(VAR_4);
            return FUNC_0(VAR_0);
        }

        FUNC_2(VAR_1->stats_out, VAR_6, VAR_3->pass_data, VAR_3->pass_pos);

        FUNC_4(&VAR_3->pass_data);
    }

    FUNC_7(VAR_4);

    return 0;
}
