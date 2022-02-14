
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int hb_value_array_t ;
struct TYPE_5__ {int list_subtitle; } ;
typedef TYPE_1__ hb_title_t ;
struct TYPE_6__ {int source; } ;
typedef TYPE_2__ hb_subtitle_t ;
typedef int hb_dict_t ;


 int FUNC_0 (int ,char*,int) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,char*,int ) ;
 TYPE_2__* FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(hb_value_array_t *VAR_5, hb_title_t *VAR_6, int VAR_7, int VAR_8, int *VAR_9)
{
    hb_subtitle_t *VAR_10;

    VAR_10 = FUNC_3(VAR_6->list_subtitle, VAR_7);
    if (VAR_10 == ((void*)0))
    {
        FUNC_0(VAR_1, "Warning: Could not find subtitle track %d, skipped\n",
                VAR_7 + 1);
        return -1;
    }

    int VAR_11 = !*VAR_9 && VAR_2 == VAR_8 &&
               FUNC_4(VAR_10->source);
    *VAR_9 |= VAR_11;
    int VAR_12 = VAR_3 == VAR_8;
    int VAR_13 = FUNC_9(VAR_4, VAR_8);

    if (!VAR_11 &&
        !FUNC_5(VAR_10->source, VAR_0))
    {

        if (*VAR_9)
        {
            FUNC_0(VAR_1, "Warning: Skipping subtitle track %d, can't have more than one track burnt in\n", VAR_7 + 1);
            return -1;
        }
        *VAR_9 = 1;
    }
    hb_dict_t *VAR_14 = FUNC_1();
    FUNC_2(VAR_14, "Track", FUNC_8(VAR_7));
    FUNC_2(VAR_14, "Default", FUNC_7(VAR_12));
    FUNC_2(VAR_14, "Forced", FUNC_7(VAR_13));
    FUNC_2(VAR_14, "Burn", FUNC_7(VAR_11));
    FUNC_6(VAR_5, VAR_14);
    return 0;
}
