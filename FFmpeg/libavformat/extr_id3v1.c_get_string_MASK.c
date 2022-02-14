
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef int str ;
struct TYPE_3__ {int metadata; } ;
typedef TYPE_1__ AVFormatContext ;


 int FUNC_0 (int *,char const*,char*,int ) ;

__attribute__((used)) static void FUNC_1(AVFormatContext *VAR_0, const char *VAR_1,
                       const uint8_t *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    char *VAR_6, VAR_7[512], *VAR_8 = ((void*)0);

    VAR_6 = VAR_7;
    for(VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 = VAR_2[VAR_4];
        if (VAR_5 == '\0')
            break;
        if ((VAR_6 - VAR_7) >= sizeof(VAR_7) - 1)
            break;
        if (VAR_5 == ' ') {
            if (!VAR_8)
                VAR_8 = VAR_6;
        } else {
            VAR_8 = ((void*)0);
        }
        *VAR_6++ = VAR_5;
    }
    *VAR_6 = '\0';

    if (VAR_8)
        *VAR_8 = '\0';

    if (*VAR_7)
        FUNC_0(&VAR_0->metadata, VAR_1, VAR_7, 0);
}
