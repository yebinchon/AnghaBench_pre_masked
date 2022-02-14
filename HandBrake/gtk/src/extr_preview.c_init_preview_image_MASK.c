
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_1__* preview; int builder; int settings; } ;
typedef TYPE_2__ signal_user_data_t ;
typedef int hb_title_t ;
typedef int gint ;
struct TYPE_7__ {size_t frame; int * pix; int * scaled_pix; scalar_t__* encoded; } ;
typedef int GtkWidget ;


 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,char*) ;
 int * FUNC_6 (int const*,size_t,TYPE_2__*,int *,int *) ;
 int * FUNC_7 (int ,int *) ;
 size_t FUNC_8 (int *) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (TYPE_2__*,int,int) ;

void
FUNC_15(signal_user_data_t *VAR_0)
{
    GtkWidget *VAR_1;
    gint VAR_2, VAR_3;

    gint VAR_4, VAR_5;
    const hb_title_t *VAR_6;

    FUNC_13(VAR_0);

    VAR_4 = FUNC_5(VAR_0->settings, "title");
    VAR_6 = FUNC_7(VAR_4, &VAR_5);
    if (VAR_6 == ((void*)0) && VAR_0->preview->pix != ((void*)0))
    {
        FUNC_2(VAR_0->preview->pix);
        VAR_0->preview->pix = ((void*)0);
    }
    VAR_1 = FUNC_0 (VAR_0->builder, "preview_frame");
    VAR_0->preview->frame = FUNC_8(VAR_1) - 1;
    if (VAR_0->preview->encoded[VAR_0->preview->frame])
    {
        VAR_1 = FUNC_0(VAR_0->builder, "live_progress_box");
        FUNC_11 (VAR_1);
        VAR_1 = FUNC_0(VAR_0->builder, "live_preview_progress");
        FUNC_12 (VAR_1);
    }
    else
    {
        VAR_1 = FUNC_0(VAR_0->builder, "live_preview_progress");
        FUNC_11 (VAR_1);
        VAR_1 = FUNC_0(VAR_0->builder, "live_progress_box");
        FUNC_12 (VAR_1);
        VAR_1 = FUNC_0(VAR_0->builder, "live_encode_progress");
        FUNC_10(FUNC_1(VAR_1), "");
        FUNC_9 (FUNC_1(VAR_1), 0);
    }
    if (VAR_0->preview->pix != ((void*)0))
        FUNC_2(VAR_0->preview->pix);
    if (VAR_0->preview->scaled_pix != ((void*)0))
        FUNC_2(VAR_0->preview->scaled_pix);

    VAR_0->preview->pix = FUNC_6(VAR_6, VAR_0->preview->frame,
                                             VAR_0, &VAR_2, &VAR_3);
    if (VAR_0->preview->pix == ((void*)0))
        return;

    int VAR_7, VAR_8;
    VAR_7 = FUNC_4(VAR_0->preview->pix);
    VAR_8 = FUNC_3(VAR_0->preview->pix);
    FUNC_14(VAR_0, VAR_7, VAR_8);
}
