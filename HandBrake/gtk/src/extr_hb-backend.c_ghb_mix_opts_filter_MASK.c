
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int amixdown; } ;
typedef TYPE_1__ hb_mixdown_t ;
typedef int gint ;
typedef int GtkComboBox ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (int ,int ) ;

void
FUNC_4(GtkComboBox *VAR_0, gint VAR_1)
{
    FUNC_0("ghb_mix_opts_filter()\n");

    const hb_mixdown_t *VAR_2;
    for (VAR_2 = FUNC_2(((void*)0)); VAR_2 != ((void*)0);
         VAR_2 = FUNC_2(VAR_2))
    {
        FUNC_1(VAR_0, VAR_2->amixdown,
                !FUNC_3(VAR_2->amixdown, VAR_1));
    }
}
