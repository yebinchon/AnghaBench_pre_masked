
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int filename ;
struct TYPE_10__ {int (* io_open ) (TYPE_3__*,int **,char*,int ,int *) ;} ;
struct TYPE_9__ {TYPE_3__* fc; scalar_t__ use_absolute_path; } ;
struct TYPE_8__ {int nlvl_to; scalar_t__ nlvl_from; char* path; } ;
typedef TYPE_1__ MOVDref ;
typedef TYPE_2__ MOVContext ;
typedef int AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*,int ,char*,...) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (TYPE_3__*,int **,char*,int ,int *) ;
 int FUNC_8 (TYPE_3__*,int **,char*,int ,int *) ;
 int FUNC_9 (char const*,char*) ;

__attribute__((used)) static int FUNC_10(MOVContext *VAR_4, AVIOContext **VAR_5, const char *VAR_6, MOVDref *VAR_7)
{


    if (VAR_7->nlvl_to > 0 && VAR_7->nlvl_from > 0) {
        char VAR_8[1025];
        const char *VAR_9;
        int VAR_10, VAR_11;


        VAR_9 = FUNC_5(VAR_6, '/');
        if (VAR_9)
            VAR_9++;
        else
            VAR_9 = VAR_6;


        for (VAR_10 = 0, VAR_11 = FUNC_4(VAR_7->path) - 1; VAR_11 >= 0; VAR_11--)
            if (VAR_7->path[VAR_11] == '/') {
                if (VAR_10 == VAR_7->nlvl_to - 1)
                    break;
                else
                    VAR_10++;
            }


        if (VAR_10 == VAR_7->nlvl_to - 1 && VAR_9 - VAR_6 < sizeof(VAR_8)) {
            FUNC_3(VAR_8, VAR_6, VAR_9 - VAR_6);
            VAR_8[VAR_9 - VAR_6] = 0;

            for (VAR_10 = 1; VAR_10 < VAR_7->nlvl_from; VAR_10++)
                FUNC_2(VAR_8, "../", sizeof(VAR_8));

            FUNC_2(VAR_8, VAR_7->path + VAR_11 + 1, sizeof(VAR_8));
            if (!VAR_4->use_absolute_path) {
                int VAR_12 = FUNC_9(VAR_6, VAR_8);

                if (!VAR_12) {
                    FUNC_1(VAR_4->fc, VAR_1,
                        "Reference with mismatching origin, %s not tried for security reasons, "
                        "set demuxer option use_absolute_path to allow it anyway\n",
                        VAR_7->path);
                    return FUNC_0(VAR_3);
                }

                if(FUNC_6(VAR_7->path + VAR_11 + 1, "..") ||
                   FUNC_6(VAR_7->path + VAR_11 + 1, ":") ||
                   (VAR_7->nlvl_from > 1 && VAR_12 < 0) ||
                   (VAR_8[0] == '/' && VAR_9 == VAR_6))
                    return FUNC_0(VAR_3);
            }

            if (FUNC_4(VAR_8) + 1 == sizeof(VAR_8))
                return FUNC_0(VAR_3);
            if (!VAR_4->fc->io_open(VAR_4->fc, VAR_5, VAR_8, VAR_0, ((void*)0)))
                return 0;
        }
    } else if (VAR_4->use_absolute_path) {
        FUNC_1(VAR_4->fc, VAR_2, "Using absolute path on user request, "
               "this is a possible security issue\n");
        if (!VAR_4->fc->io_open(VAR_4->fc, VAR_5, VAR_7->path, VAR_0, ((void*)0)))
            return 0;
    } else {
        FUNC_1(VAR_4->fc, VAR_1,
               "Absolute path %s not tried for security reasons, "
               "set demuxer option use_absolute_path to allow absolute paths\n",
               VAR_7->path);
    }

    return FUNC_0(VAR_3);
}
