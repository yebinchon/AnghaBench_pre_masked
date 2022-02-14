
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int const nb_inputs; TYPE_1__* priv; } ;
struct TYPE_5__ {int nb_inputs; int* map; int nb_map; } ;
typedef TYPE_1__ StreamSelectContext ;
typedef TYPE_2__ AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int*) ;
 int FUNC_3 (int**) ;
 int FUNC_4 (TYPE_2__*,int ,char*,...) ;
 int FUNC_5 (char const*,char**,int ) ;

__attribute__((used)) static int FUNC_6(AVFilterContext *VAR_5, const char *VAR_6)
{
    StreamSelectContext *VAR_7 = VAR_5->priv;
    int *VAR_8;
    int VAR_9 = 0;

    if (!VAR_6) {
        FUNC_4(VAR_5, VAR_1, "mapping definition is not set\n");
        return FUNC_0(VAR_3);
    }

    VAR_8 = FUNC_1(VAR_7->nb_inputs, sizeof(*VAR_8));
    if (!VAR_8)
        return FUNC_0(VAR_4);

    while (1) {
        char *VAR_10;
        const int VAR_11 = FUNC_5(VAR_6, &VAR_10, 0);

        FUNC_4(VAR_5, VAR_0, "n=%d map=%p p=%p\n", VAR_11, VAR_6, VAR_10);

        if (VAR_6 == VAR_10)
            break;
        VAR_6 = VAR_10;

        if (VAR_9 >= VAR_7->nb_inputs) {
            FUNC_4(VAR_5, VAR_1, "Unable to map more than the %d "
                   "input pads available\n", VAR_7->nb_inputs);
            FUNC_2(VAR_8);
            return FUNC_0(VAR_3);
        }

        if (VAR_11 < 0 || VAR_11 >= VAR_5->nb_inputs) {
            FUNC_4(VAR_5, VAR_1, "Input stream index %d doesn't exist "
                   "(there is only %d input streams defined)\n",
                   VAR_11, VAR_7->nb_inputs);
            FUNC_2(VAR_8);
            return FUNC_0(VAR_3);
        }

        FUNC_4(VAR_5, VAR_2, "Map input stream %d to output stream %d\n", VAR_11, VAR_9);
        VAR_8[VAR_9++] = VAR_11;
    }

    if (!VAR_9) {
        FUNC_4(VAR_5, VAR_1, "invalid mapping\n");
        FUNC_2(VAR_8);
        return FUNC_0(VAR_3);
    }

    FUNC_3(&VAR_7->map);
    VAR_7->map = VAR_8;
    VAR_7->nb_map = VAR_9;

    FUNC_4(VAR_5, VAR_2, "%d map set\n", VAR_7->nb_map);

    return 0;
}
