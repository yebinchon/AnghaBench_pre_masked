
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int (* io_open ) (TYPE_2__*,int **,char const*,int ,int **) ;int flags; TYPE_1__* priv_data; } ;
struct TYPE_7__ {char const* allowed_extensions; int ctx; scalar_t__ http_persistent; } ;
typedef TYPE_1__ HLSContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_2__*,int ,char*,char const*,...) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,char*,int ,int **) ;
 scalar_t__ FUNC_7 (char const*,char*,int *) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int ,int **,char const*,int **) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,char const*,int) ;
 int FUNC_13 (TYPE_2__*,int **,char const*,int ,int **) ;
 int FUNC_14 (TYPE_2__*,int **,char const*,int ,int **) ;

__attribute__((used)) static int FUNC_15(AVFormatContext *VAR_9, AVIOContext **VAR_10, const char *VAR_11,
                    AVDictionary *VAR_12, AVDictionary *VAR_13, int *VAR_14)
{
    HLSContext *VAR_15 = VAR_9->priv_data;
    AVDictionary *VAR_16 = ((void*)0);
    const char *VAR_17 = ((void*)0);
    int VAR_18;
    int VAR_19 = 0;

    if (FUNC_7(VAR_11, "crypto", ((void*)0))) {
        if (VAR_11[6] == '+' || VAR_11[6] == ':')
            VAR_17 = FUNC_8(VAR_11 + 7);
    }

    if (!VAR_17)
        VAR_17 = FUNC_8(VAR_11);

    if (!VAR_17)
        return VAR_2;


    if (FUNC_7(VAR_17, "file", ((void*)0))) {
        if (FUNC_10(VAR_15->allowed_extensions, "ALL") && !FUNC_5(VAR_11, VAR_15->allowed_extensions)) {
            FUNC_4(VAR_9, VAR_6,
                "Filename extension of \'%s\' is not a common multimedia extension, blocked for security reasons.\n"
                "If you wish to override this adjust allowed_extensions, you can set it to \'ALL\' to allow all\n",
                VAR_11);
            return VAR_2;
        }
    } else if (FUNC_7(VAR_17, "http", ((void*)0))) {
        VAR_19 = 1;
    } else
        return VAR_2;

    if (!FUNC_12(VAR_17, VAR_11, FUNC_11(VAR_17)) && VAR_11[FUNC_11(VAR_17)] == ':')
        ;
    else if (FUNC_7(VAR_11, "crypto", ((void*)0)) && !FUNC_12(VAR_17, VAR_11 + 7, FUNC_11(VAR_17)) && VAR_11[7 + FUNC_11(VAR_17)] == ':')
        ;
    else if (FUNC_10(VAR_17, "file") || !FUNC_12(VAR_11, "file,", 5))
        return VAR_2;

    FUNC_0(&VAR_16, VAR_12, 0);
    FUNC_0(&VAR_16, VAR_13, 0);

    if (VAR_19 && VAR_15->http_persistent && *VAR_10) {
        VAR_18 = FUNC_9(VAR_15->ctx, VAR_10, VAR_11, &VAR_16);
        if (VAR_18 == VAR_1) {
            FUNC_1(&VAR_16);
            return VAR_18;
        } else if (VAR_18 < 0) {
            if (VAR_18 != VAR_0)
                FUNC_4(VAR_9, VAR_7,
                    "keepalive request failed for '%s' with error: '%s' when opening url, retrying with new connection\n",
                    VAR_11, FUNC_3(VAR_18));
            VAR_18 = VAR_9->io_open(VAR_9, VAR_10, VAR_11, VAR_4, &VAR_16);
        }
    } else {
        VAR_18 = VAR_9->io_open(VAR_9, VAR_10, VAR_11, VAR_4, &VAR_16);
    }
    if (VAR_18 >= 0) {

        char *VAR_20 = ((void*)0);

        if (!(VAR_9->flags & VAR_3))
            FUNC_6(*VAR_10, "cookies", VAR_8, (uint8_t**)&VAR_20);

        if (VAR_20)
            FUNC_2(&VAR_12, "cookies", VAR_20, VAR_5);
    }

    FUNC_1(&VAR_16);

    if (VAR_14)
        *VAR_14 = VAR_19;

    return VAR_18;
}
