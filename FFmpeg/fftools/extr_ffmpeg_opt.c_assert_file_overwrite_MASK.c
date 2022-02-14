
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* ctx; } ;
struct TYPE_6__ {char* url; TYPE_1__* iformat; } ;
struct TYPE_5__ {int flags; } ;
typedef TYPE_3__ InputFile ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int ,char*,...) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 char* FUNC_2 (char const*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*,...) ;
 TYPE_3__** VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_8 (char const*,char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static void FUNC_11(const char *VAR_11)
{
    const char *VAR_12 = FUNC_2(VAR_11);

    if (VAR_5 && VAR_8) {
        FUNC_5(VAR_9, "Error, both -y and -n supplied. Exiting.\n");
        FUNC_3(1);
    }

    if (!VAR_5) {
        if (VAR_12 && !FUNC_8(VAR_12, "file") && FUNC_1(VAR_11, 0) == 0) {
            if (VAR_10 && !VAR_8) {
                FUNC_5(VAR_9,"File '%s' already exists. Overwrite? [y/N] ", VAR_11);
                FUNC_4(VAR_9);
                FUNC_9();
                FUNC_7(VAR_3, VAR_4);
                if (!FUNC_6()) {
                    FUNC_0(((void*)0), VAR_1, "Not overwriting - exiting\n");
                    FUNC_3(1);
                }
                FUNC_10();
            }
            else {
                FUNC_0(((void*)0), VAR_1, "File '%s' already exists. Exiting.\n", VAR_11);
                FUNC_3(1);
            }
        }
    }

    if (VAR_12 && !FUNC_8(VAR_12, "file")) {
        for (int VAR_13 = 0; VAR_13 < VAR_7; VAR_13++) {
             InputFile *VAR_14 = VAR_6[VAR_13];
             if (VAR_14->ctx->iformat->flags & VAR_0)
                 continue;
             if (!FUNC_8(VAR_11, VAR_14->ctx->url)) {
                 FUNC_0(((void*)0), VAR_1, "Output %s same as Input #%d - exiting\n", VAR_11, VAR_13);
                 FUNC_0(((void*)0), VAR_2, "FFmpeg cannot edit existing files in-place.\n");
                 FUNC_3(1);
             }
        }
    }
}
