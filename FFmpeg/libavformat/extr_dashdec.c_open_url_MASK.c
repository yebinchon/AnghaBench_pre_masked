
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int flags; TYPE_1__* priv_data; } ;
struct TYPE_5__ {char const* allowed_extensions; int interrupt_callback; } ;
typedef TYPE_1__ DASHContext ;
typedef int AVIOContext ;
typedef TYPE_2__ AVFormatContext ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int **,int *,int ) ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int **,char*,char*,int ) ;
 int FUNC_3 (int **) ;
 int FUNC_4 (TYPE_2__*,int ,char*,char const*) ;
 int FUNC_5 (char const*,char const*) ;
 int FUNC_6 (int *,char*,int ,int **) ;
 int FUNC_7 (char const*,char*,int *) ;
 char* FUNC_8 (char const*) ;
 int FUNC_9 (int **,char const*,int ,int ,int **) ;
 scalar_t__ FUNC_10 (char const*,char*) ;
 int FUNC_11 (char const*) ;
 int FUNC_12 (char const*,char const*,int) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_6, AVIOContext **VAR_7, const char *VAR_8,
                    AVDictionary *VAR_9, AVDictionary *VAR_10, int *VAR_11)
{
    DASHContext *VAR_12 = VAR_6->priv_data;
    AVDictionary *VAR_13 = ((void*)0);
    const char *VAR_14 = ((void*)0);
    int VAR_15;

    FUNC_0(&VAR_13, VAR_9, 0);
    FUNC_0(&VAR_13, VAR_10, 0);

    if (FUNC_7(VAR_8, "crypto", ((void*)0))) {
        if (VAR_8[6] == '+' || VAR_8[6] == ':')
            VAR_14 = FUNC_8(VAR_8 + 7);
    }

    if (!VAR_14)
        VAR_14 = FUNC_8(VAR_8);

    if (!VAR_14)
        return VAR_0;


    if (FUNC_7(VAR_14, "file", ((void*)0))) {
        if (FUNC_10(VAR_12->allowed_extensions, "ALL") && !FUNC_5(VAR_8, VAR_12->allowed_extensions)) {
            FUNC_4(VAR_6, VAR_4,
                   "Filename extension of \'%s\' is not a common multimedia extension, blocked for security reasons.\n"
                   "If you wish to override this adjust allowed_extensions, you can set it to \'ALL\' to allow all\n",
                   VAR_8);
            return VAR_0;
        }
    } else if (FUNC_7(VAR_14, "http", ((void*)0))) {
        ;
    } else
        return VAR_0;

    if (!FUNC_12(VAR_14, VAR_8, FUNC_11(VAR_14)) && VAR_8[FUNC_11(VAR_14)] == ':')
        ;
    else if (FUNC_7(VAR_8, "crypto", ((void*)0)) && !FUNC_12(VAR_14, VAR_8 + 7, FUNC_11(VAR_14)) && VAR_8[7 + FUNC_11(VAR_14)] == ':')
        ;
    else if (FUNC_10(VAR_14, "file") || !FUNC_12(VAR_8, "file,", 5))
        return VAR_0;

    FUNC_3(VAR_7);
    VAR_15 = FUNC_9(VAR_7, VAR_8, VAR_2, VAR_12->interrupt_callback, &VAR_13);
    if (VAR_15 >= 0) {

        char *VAR_16 = ((void*)0);

        if (!(VAR_6->flags & VAR_1))
            FUNC_6(*VAR_7, "cookies", VAR_5, (uint8_t**)&VAR_16);

        if (VAR_16) {
            FUNC_2(&VAR_9, "cookies", VAR_16, VAR_3);
        }

    }

    FUNC_1(&VAR_13);

    if (VAR_11)
        *VAR_11 = FUNC_7(VAR_14, "http", ((void*)0));

    return VAR_15;
}
