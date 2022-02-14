
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int wchar_t ;
struct TYPE_11__ {int (* avs_get_version ) (int ) ;int (* avs_release_value ) (int ) ;int (* avs_get_video_info ) (int ) ;int (* avs_take_clip ) (int ,int ) ;int (* avs_invoke ) (int ,char*,int ,int ) ;} ;
struct TYPE_10__ {char* filename; TYPE_1__* priv_data; } ;
struct TYPE_9__ {int clip; int vi; int env; } ;
typedef TYPE_1__ AviSynthContext ;
typedef int AVS_Value ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,char*,int,int *,int) ;
 int FUNC_1 (int ,int ,int *,int,char*,int,int *,int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_3__ VAR_5 ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int ,int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_6)
{
    AviSynthContext *VAR_7 = VAR_6->priv_data;
    AVS_Value VAR_8, VAR_9;
    int VAR_10;





    if ((VAR_10 = FUNC_3(VAR_6)))
        return VAR_10;
    VAR_8 = FUNC_9(VAR_6->filename);

    VAR_9 = VAR_5.avs_invoke(VAR_7->env, "Import", VAR_8, 0);
    if (FUNC_8(VAR_9)) {
        FUNC_2(VAR_6, VAR_1, "%s\n", FUNC_6(VAR_9));
        VAR_10 = VAR_0;
        goto fail;
    }
    if (!FUNC_7(VAR_9)) {
        FUNC_2(VAR_6, VAR_1, "AviSynth script did not return a clip\n");
        VAR_10 = VAR_0;
        goto fail;
    }

    VAR_7->clip = VAR_5.avs_take_clip(VAR_9, VAR_7->env);
    VAR_7->vi = VAR_5.avs_get_video_info(VAR_7->clip);
    VAR_5.avs_release_value(VAR_9);

    if ((VAR_10 = FUNC_5(VAR_6)))
        goto fail;

    return 0;

fail:
    FUNC_4(VAR_7);
    return VAR_10;
}
