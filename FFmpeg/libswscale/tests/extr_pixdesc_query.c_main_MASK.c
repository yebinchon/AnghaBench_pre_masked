
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_8__ {char* class; scalar_t__ (* cond ) (int) ;} ;
struct TYPE_7__ {char* name; } ;
typedef TYPE_1__ AVPixFmtDescriptor ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (char const***,int*,void*) ;
 int FUNC_2 (char const**) ;
 int FUNC_3 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_4 (TYPE_1__ const*) ;
 int VAR_4 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (char const**,int,int,int ) ;
 TYPE_2__* VAR_5 ;
 scalar_t__ FUNC_7 (int) ;

int FUNC_8(void)
{
    int VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_5); VAR_6++) {
        const char **VAR_8 = ((void*)0);
        int VAR_9 = 0;
        const AVPixFmtDescriptor *VAR_10 = ((void*)0);

        while ((VAR_10 = FUNC_4(VAR_10))) {
            enum AVPixelFormat VAR_11 = FUNC_3(VAR_10);
            if (VAR_5[VAR_6].cond(VAR_11)) {
                const char *VAR_12 = VAR_10->name;
                if (VAR_11 == VAR_2) VAR_12 = "rgb32";
                else if (VAR_11 == VAR_3) VAR_12 = "rgb32_1";
                else if (VAR_11 == VAR_0) VAR_12 = "bgr32";
                else if (VAR_11 == VAR_1) VAR_12 = "bgr32_1";

                FUNC_1(&VAR_8, &VAR_9, (void *)VAR_12);
            }
        }

        if (VAR_8) {
            FUNC_6(VAR_8, VAR_9, sizeof(*VAR_8), VAR_4);

            FUNC_5("%s:\n", VAR_5[VAR_6].class);
            for (VAR_7 = 0; VAR_7 < VAR_9; VAR_7++)
                FUNC_5("  %s\n", VAR_8[VAR_7]);
            FUNC_5("\n");

            FUNC_2(VAR_8);
        }
    }
    return 0;
}
