
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {char const* key; } ;
struct TYPE_10__ {TYPE_1__* filter; } ;
struct TYPE_9__ {int name; int priv_class; } ;
typedef TYPE_2__ AVFilterContext ;
typedef TYPE_3__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int **) ;
 TYPE_3__* FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (char**) ;
 int FUNC_4 (TYPE_2__*,int ,char*,char const*,...) ;
 char* FUNC_5 (char const*) ;
 int FUNC_6 (TYPE_2__*,int **) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (TYPE_2__*,int **,char const*) ;
 char* FUNC_9 (char*,char) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (char*) ;

int FUNC_12(AVFilterContext *VAR_5, const char *VAR_6)
{
    AVDictionary *VAR_7 = ((void*)0);
    AVDictionaryEntry *VAR_8;
    int VAR_9 = 0;

    if (VAR_6 && *VAR_6) {
        if (!VAR_5->filter->priv_class) {
            FUNC_4(VAR_5, VAR_2, "This filter does not take any "
                   "options, but options were provided: %s.\n", VAR_6);
            return FUNC_0(VAR_3);
        }
        {
            VAR_9 = FUNC_8(VAR_5, &VAR_7, VAR_6);
            if (VAR_9 < 0)
                goto fail;
        }
    }

    VAR_9 = FUNC_6(VAR_5, &VAR_7);
    if (VAR_9 < 0)
        goto fail;

    if ((VAR_8 = FUNC_2(VAR_7, "", ((void*)0), VAR_1))) {
        FUNC_4(VAR_5, VAR_2, "No such option: %s.\n", VAR_8->key);
        VAR_9 = VAR_0;
        goto fail;
    }

fail:
    FUNC_1(&VAR_7);

    return VAR_9;
}
