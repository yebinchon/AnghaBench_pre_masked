
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {char* name; } ;
struct TYPE_5__ {char* name; char* long_name; char* extensions; char* mime_type; scalar_t__ video_codec; scalar_t__ audio_codec; scalar_t__ subtitle_codec; scalar_t__ priv_class; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVCodecDescriptor ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_0 (char const*,int *,int *) ;
 int FUNC_1 (int *,int ,char*,char const*) ;
 TYPE_2__* FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,...) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3)
{
    const AVCodecDescriptor *VAR_4;
    const AVOutputFormat *VAR_5 = FUNC_0(VAR_3, ((void*)0), ((void*)0));

    if (!VAR_5) {
        FUNC_1(((void*)0), VAR_1, "Unknown format '%s'.\n", VAR_3);
        return;
    }

    FUNC_3("Muxer %s [%s]:\n", VAR_5->name, VAR_5->long_name);

    if (VAR_5->extensions)
        FUNC_3("    Common extensions: %s.\n", VAR_5->extensions);
    if (VAR_5->mime_type)
        FUNC_3("    Mime type: %s.\n", VAR_5->mime_type);
    if (VAR_5->video_codec != VAR_0 &&
        (VAR_4 = FUNC_2(VAR_5->video_codec))) {
        FUNC_3("    Default video codec: %s.\n", VAR_4->name);
    }
    if (VAR_5->audio_codec != VAR_0 &&
        (VAR_4 = FUNC_2(VAR_5->audio_codec))) {
        FUNC_3("    Default audio codec: %s.\n", VAR_4->name);
    }
    if (VAR_5->subtitle_codec != VAR_0 &&
        (VAR_4 = FUNC_2(VAR_5->subtitle_codec))) {
        FUNC_3("    Default subtitle codec: %s.\n", VAR_4->name);
    }

    if (VAR_5->priv_class)
        FUNC_4(VAR_5->priv_class, VAR_2);
}
