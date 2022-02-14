
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* preview; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef scalar_t__ gboolean ;
struct TYPE_6__ {int live_id; int encode_frame; size_t frame; scalar_t__* encoded; int * current; int pause; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__*,int ,int) ;

void
FUNC_5(signal_user_data_t *VAR_1)
{
    gboolean VAR_2;

    if (VAR_1->preview->live_id >= 0)
    {
        FUNC_2();
    }
    VAR_1->preview->live_id = -1;
    VAR_1->preview->encode_frame = -1;
    if (!VAR_1->preview->pause)
        FUNC_3(VAR_1);
    if (VAR_1->preview->current)
    {
        FUNC_0(VAR_1->preview->current);
        VAR_1->preview->current = ((void*)0);
    }
    VAR_2 = VAR_1->preview->encoded[VAR_1->preview->frame];
    FUNC_4(VAR_1->preview->encoded, 0, sizeof(gboolean) * VAR_0);
    if (VAR_2)
        FUNC_1(VAR_1);
}
