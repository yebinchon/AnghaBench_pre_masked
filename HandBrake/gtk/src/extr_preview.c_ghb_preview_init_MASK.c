
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int builder; TYPE_4__* preview; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int preview_t ;
typedef int gint64 ;
struct TYPE_6__ {int encode_frame; int live_id; char* vsink; int live_enabled; int * play; int button_height; int button_width; int pause; } ;
typedef int GtkWidget ;
typedef int GstBus ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_4__* FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,char*,char*,char*,...) ;
 int FUNC_5 (int *,int ,TYPE_1__*) ;
 void* FUNC_6 (char*,char*) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int ) ;
 int FUNC_9 (int *,int *,int *) ;
 int FUNC_10 (int *) ;
 int VAR_2 ;

void
FUNC_11(signal_user_data_t *VAR_3)
{
    GtkWidget *VAR_4;

    VAR_3->preview = FUNC_2(sizeof(preview_t));
    VAR_3->preview->pause = VAR_1;
    VAR_3->preview->encode_frame = -1;
    VAR_3->preview->live_id = -1;

    VAR_4 = FUNC_0(VAR_3->builder, "preview_button_image");
    FUNC_9(VAR_4, &VAR_3->preview->button_width,
                                        &VAR_3->preview->button_height);
    VAR_4 = FUNC_0(VAR_3->builder, "live_preview_box");
    FUNC_10 (VAR_4);
    VAR_4 = FUNC_0(VAR_3->builder, "live_preview_duration_box");
    FUNC_10 (VAR_4);

}
