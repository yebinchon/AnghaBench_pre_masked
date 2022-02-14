
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef char uint8_t ;
typedef int uint32_t ;
struct TYPE_10__ {int string_validation; int string_validation_replacement; int string_validation_utf8_flags; } ;
typedef TYPE_1__ WriterContext ;
struct TYPE_11__ {int str; } ;
typedef TYPE_2__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

 int VAR_6 ;

 int FUNC_0 (TYPE_2__*,char const*,int) ;
 int FUNC_1 (TYPE_2__*,char**) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*,...) ;
 scalar_t__ FUNC_5 (int *,char const**,char const*,int ) ;
 int FUNC_6 (TYPE_2__*,char const*,int) ;
 int FUNC_7 (char const*) ;

__attribute__((used)) static inline int FUNC_8(WriterContext *VAR_7, char **VAR_8, const char *VAR_9)
{
    const uint8_t *VAR_10, *VAR_11;
    AVBPrint VAR_12;
    int VAR_13 = 0, VAR_14 = 0;

    FUNC_2(&VAR_12, 0, VAR_2);

    VAR_11 = VAR_9 + FUNC_7(VAR_9);
    for (VAR_10 = (uint8_t *)VAR_9; *VAR_10;) {
        uint32_t VAR_15;
        int VAR_16 = 0;
        const uint8_t *VAR_17 = VAR_10;

        if (FUNC_5(&VAR_15, &VAR_10, VAR_11, VAR_7->string_validation_utf8_flags) < 0) {
            AVBPrint VAR_18;
            FUNC_2(&VAR_18, 0, VAR_1);
            FUNC_6(&VAR_18, VAR_17, VAR_10-VAR_17);
            FUNC_4(VAR_7, VAR_3,
                   "Invalid UTF-8 sequence %s found in string '%s'\n", VAR_18.str, VAR_9);
            VAR_16 = 1;
        }

        if (VAR_16) {
            VAR_13++;

            switch (VAR_7->string_validation) {
            case 129:
                FUNC_4(VAR_7, VAR_4,
                       "Invalid UTF-8 sequence found in string '%s'\n", VAR_9);
                VAR_14 = VAR_0;
                goto end;
                break;

            case 128:
                FUNC_3(&VAR_12, "%s", VAR_7->string_validation_replacement);
                break;
            }
        }

        if (!VAR_16 || VAR_7->string_validation == VAR_6)
            FUNC_0(&VAR_12, VAR_17, VAR_10-VAR_17);
    }

    if (VAR_13 && VAR_7->string_validation == 128) {
        FUNC_4(VAR_7, VAR_5,
               "%d invalid UTF-8 sequence(s) found in string '%s', replaced with '%s'\n",
               VAR_13, VAR_9, VAR_7->string_validation_replacement);
    }

end:
    FUNC_1(&VAR_12, VAR_8);
    return VAR_14;
}
