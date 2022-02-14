
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rendition_info {char* type; char* uri; char* defaultr; char* forced; char* characteristics; scalar_t__* assoc_language; int name; int language; int group_id; } ;
struct rendition {int type; char* group_id; char* language; char* name; int disposition; TYPE_3__* playlist; } ;
typedef enum AVMediaType { ____Placeholder_AVMediaType } AVMediaType ;
struct TYPE_8__ {scalar_t__ strict_std_compliance; } ;
struct TYPE_7__ {int n_renditions; int renditions; } ;
struct TYPE_6__ {int n_renditions; int renditions; TYPE_5__* ctx; } ;
typedef TYPE_1__ HLSContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (TYPE_5__*,int ,char*,...) ;
 struct rendition* FUNC_1 (int) ;
 char* FUNC_2 (char*,char*,char**) ;
 int FUNC_3 (int *,int *,struct rendition*) ;
 TYPE_3__* FUNC_4 (TYPE_1__*,char*,char const*) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (int ,scalar_t__*,int) ;

__attribute__((used)) static struct rendition *FUNC_9(HLSContext *VAR_11, struct rendition_info *VAR_12,
                                      const char *VAR_13)
{
    struct rendition *VAR_14;
    enum AVMediaType VAR_15 = VAR_2;
    char *VAR_16;
    char *VAR_17;
    char *VAR_18;

    if (!FUNC_5(VAR_12->type, "AUDIO"))
        VAR_15 = VAR_0;
    else if (!FUNC_5(VAR_12->type, "VIDEO"))
        VAR_15 = VAR_3;
    else if (!FUNC_5(VAR_12->type, "SUBTITLES"))
        VAR_15 = VAR_1;
    else if (!FUNC_5(VAR_12->type, "CLOSED-CAPTIONS"))


        return ((void*)0);

    if (VAR_15 == VAR_2) {
        FUNC_0(VAR_11->ctx, VAR_9, "Can't support the type: %s\n", VAR_12->type);
        return ((void*)0);
    }


    if (VAR_15 == VAR_1 && !VAR_12->uri[0]) {
        FUNC_0(VAR_11->ctx, VAR_8, "The URI tag is REQUIRED for subtitle.\n");
        return ((void*)0);
    }


    if (VAR_11->ctx->strict_std_compliance > VAR_10)
        if (VAR_15 == VAR_1) {
            FUNC_0(VAR_11->ctx, VAR_9, "Can't support the subtitle(uri: %s)\n", VAR_12->uri);
            return ((void*)0);
        }

    VAR_14 = FUNC_1(sizeof(struct rendition));
    if (!VAR_14)
        return ((void*)0);

    FUNC_3(&VAR_11->renditions, &VAR_11->n_renditions, VAR_14);

    VAR_14->type = VAR_15;
    FUNC_6(VAR_14->group_id, VAR_12->group_id);
    FUNC_6(VAR_14->language, VAR_12->language);
    FUNC_6(VAR_14->name, VAR_12->name);


    if (VAR_12->uri[0]) {
        VAR_14->playlist = FUNC_4(VAR_11, VAR_12->uri, VAR_13);
        if (VAR_14->playlist)
            FUNC_3(&VAR_14->playlist->renditions,
                         &VAR_14->playlist->n_renditions, VAR_14);
    }

    if (VAR_12->assoc_language[0]) {
        int VAR_19 = FUNC_7(VAR_14->language);
        if (VAR_19 < sizeof(VAR_14->language) - 3) {
            VAR_14->language[VAR_19] = ',';
            FUNC_8(VAR_14->language + VAR_19 + 1, VAR_12->assoc_language,
                    sizeof(VAR_14->language) - VAR_19 - 2);
        }
    }

    if (!FUNC_5(VAR_12->defaultr, "YES"))
        VAR_14->disposition |= VAR_4;
    if (!FUNC_5(VAR_12->forced, "YES"))
        VAR_14->disposition |= VAR_5;

    VAR_17 = VAR_12->characteristics;
    while ((VAR_16 = FUNC_2(VAR_17, ",", &VAR_18))) {
        if (!FUNC_5(VAR_16, "public.accessibility.describes-music-and-sound"))
            VAR_14->disposition |= VAR_6;
        else if (!FUNC_5(VAR_16, "public.accessibility.describes-video"))
            VAR_14->disposition |= VAR_7;

        VAR_17 = ((void*)0);
    }

    return VAR_14;
}
