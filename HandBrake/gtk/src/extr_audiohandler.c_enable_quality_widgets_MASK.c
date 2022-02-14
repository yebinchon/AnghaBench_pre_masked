
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int builder; } ;
typedef TYPE_1__ signal_user_data_t ;
typedef int gboolean ;
typedef int GtkWidget ;


 int VAR_0 ;
 int * FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int,int,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(
    signal_user_data_t *VAR_3,
    gboolean VAR_4,
    int VAR_5,
    int VAR_6,
    int VAR_7)
{
    GtkWidget *VAR_8;
    gboolean VAR_9 = VAR_2;
    gboolean VAR_10 = VAR_2;

    VAR_8 = FUNC_0(VAR_3->builder, "AudioBitrate");
    FUNC_4(VAR_8, !VAR_4);
    VAR_8 = FUNC_0(VAR_3->builder, "AudioTrackQualityBox");
    FUNC_4(VAR_8, VAR_4);

    if (FUNC_6(VAR_5) == VAR_1)
    {
        VAR_9 = VAR_0;
    }
    if (FUNC_5(VAR_5, VAR_6, VAR_7) == -1)
    {
        VAR_10 = VAR_0;
    }

    if (!VAR_9)
    {
        VAR_8 = FUNC_0(VAR_3->builder, "AudioTrackBitrateEnable");
        FUNC_2(FUNC_1(VAR_8),
                                     !VAR_9);
    }
    VAR_8 = FUNC_0(VAR_3->builder, "AudioTrackQualityEnable");
    FUNC_3(VAR_8, VAR_9);

    VAR_8 = FUNC_0(VAR_3->builder, "AudioBitrate");
    FUNC_3(VAR_8, VAR_10);
    VAR_8 = FUNC_0(VAR_3->builder, "AudioTrackQualityEnableBox");
    FUNC_3(VAR_8, VAR_10 || VAR_9);
    VAR_8 = FUNC_0(VAR_3->builder, "AudioTrackQualityBox");
    FUNC_3(VAR_8, VAR_9);
}
