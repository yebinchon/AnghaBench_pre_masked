
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef enum AVPixelFormat { ____Placeholder_AVPixelFormat } AVPixelFormat ;
struct TYPE_7__ {char* name; int flags; } ;
struct TYPE_6__ {scalar_t__ pix_fmt; int fourcc; } ;
typedef TYPE_1__ PixelFormatTag ;
typedef TYPE_2__ AVPixFmtDescriptor ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char const*) ;
 char* FUNC_2 (scalar_t__) ;
 TYPE_2__* FUNC_3 (int) ;
 TYPE_1__* FUNC_4 () ;
 int FUNC_5 (int ,char*,char const*) ;
 char FUNC_6 (int,char**,char*) ;
 char* VAR_2 ;
 int FUNC_7 (int,TYPE_1__ const*,char) ;
 int FUNC_8 (char*,...) ;
 int VAR_3 ;
 int FUNC_9 () ;

int FUNC_10(int VAR_4, char **VAR_5)
{
    int VAR_6, VAR_7 = 0, VAR_8 = 0;
    const PixelFormatTag *VAR_9 = FUNC_4();
    const char *VAR_10 = ((void*)0);
    char VAR_11;

    if (VAR_4 == 1) {
        FUNC_9();
        return 0;
    }

    while ((VAR_11 = FUNC_6(VAR_4, VAR_5, "hp:lL")) != -1) {
        switch (VAR_11) {
        case 'h':
            FUNC_9();
            return 0;
        case 'l':
            VAR_7 = 1;
            break;
        case 'L':
            VAR_8 = 1;
            break;
        case 'p':
            VAR_10 = VAR_2;
            break;
        case '?':
            FUNC_9();
            return 1;
        }
    }

    if (VAR_7)
        for (VAR_6 = 0; VAR_9[VAR_6].pix_fmt != VAR_1; VAR_6++)
            FUNC_8("%s: %s\n", FUNC_0(VAR_9[VAR_6].fourcc),
                   FUNC_2(VAR_9[VAR_6].pix_fmt));

    if (VAR_8) {
        for (VAR_6 = 0; FUNC_3(VAR_6); VAR_6++) {
            const AVPixFmtDescriptor *VAR_12 = FUNC_3(VAR_6);
            if (!VAR_12->name || VAR_12->flags & VAR_0)
                continue;
            FUNC_8("%s: ", VAR_12->name);
            FUNC_7(VAR_6, VAR_9, ' ');
            FUNC_8("\n");
        }
    }

    if (VAR_10) {
        enum AVPixelFormat VAR_13 = FUNC_1(VAR_10);
        if (VAR_13 == VAR_1) {
            FUNC_5(VAR_3, "Invalid pixel format selected '%s'\n", VAR_10);
            return 1;
        }
        FUNC_7(VAR_13, VAR_9, '\n');
    }

    return 0;
}
