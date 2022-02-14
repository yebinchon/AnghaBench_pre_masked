
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
struct TYPE_7__ {int amixdown; } ;
typedef TYPE_2__ hb_mixdown_t ;
typedef int gint64 ;
typedef int gint ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int ,int) ;
 TYPE_2__* FUNC_2 (TYPE_2__ const*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_4(signal_user_data_t *VAR_0, gint VAR_1, gint64 VAR_2)
{
    FUNC_0("grey_mix_opts()\n");

    const hb_mixdown_t *VAR_3;
    for (VAR_3 = FUNC_2(((void*)0)); VAR_3 != ((void*)0);
         VAR_3 = FUNC_2(VAR_3))
    {
        FUNC_1(VAR_0->builder, "AudioMixdown", VAR_3->amixdown,
                !FUNC_3(VAR_3->amixdown, VAR_1, VAR_2));
    }
}
