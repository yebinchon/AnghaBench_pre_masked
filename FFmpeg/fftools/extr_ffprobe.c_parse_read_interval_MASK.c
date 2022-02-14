
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef long long int64_t ;
struct TYPE_3__ {int has_start; int start_is_offset; long long start; int has_end; int end_is_offset; int duration_frames; long long end; } ;
typedef TYPE_1__ ReadInterval ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *,int ,char*,...) ;
 int FUNC_3 (long long*,char*,int) ;
 char* FUNC_4 (char const*) ;
 char* FUNC_5 (char*,char) ;
 long long FUNC_6 (char*,char**,int) ;

__attribute__((used)) static int FUNC_7(const char *VAR_3,
                               ReadInterval *VAR_4)
{
    int VAR_5 = 0;
    char *VAR_6, *VAR_7, *VAR_8 = FUNC_4(VAR_3);
    if (!VAR_8)
        return FUNC_0(VAR_2);

    if (!*VAR_8) {
        FUNC_2(((void*)0), VAR_0, "Invalid empty interval specification\n");
        VAR_5 = FUNC_0(VAR_1);
        goto end;
    }

    VAR_7 = VAR_8;
    VAR_6 = FUNC_5(VAR_8, '%');
    if (VAR_6)
        *VAR_6++ = 0;


    if (*VAR_7) {
        VAR_4->has_start = 1;

        if (*VAR_7 == '+') {
            VAR_4->start_is_offset = 1;
            VAR_7++;
        } else {
            VAR_4->start_is_offset = 0;
        }

        VAR_5 = FUNC_3(&VAR_4->start, VAR_7, 1);
        if (VAR_5 < 0) {
            FUNC_2(((void*)0), VAR_0, "Invalid interval start specification '%s'\n", VAR_7);
            goto end;
        }
    } else {
        VAR_4->has_start = 0;
    }


    VAR_7 = VAR_6;
    if (VAR_7 && *VAR_7) {
        int64_t VAR_9;
        VAR_4->has_end = 1;

        if (*VAR_7 == '+') {
            VAR_4->end_is_offset = 1;
            VAR_7++;
        } else {
            VAR_4->end_is_offset = 0;
        }

        if (VAR_4->end_is_offset && *VAR_7 == '#') {
            long long int VAR_10;
            char *VAR_11;
            VAR_4->duration_frames = 1;
            VAR_7++;
            VAR_10 = FUNC_6(VAR_7, &VAR_11, 10);
            if (*VAR_11 || VAR_10 < 0) {
                FUNC_2(((void*)0), VAR_0,
                       "Invalid or negative value '%s' for duration number of frames\n", VAR_7);
                goto end;
            }
            VAR_4->end = VAR_10;
        } else {
            VAR_4->duration_frames = 0;
            VAR_5 = FUNC_3(&VAR_9, VAR_7, 1);
            if (VAR_5 < 0) {
                FUNC_2(((void*)0), VAR_0, "Invalid interval end/duration specification '%s'\n", VAR_7);
                goto end;
            }
            VAR_4->end = VAR_9;
        }
    } else {
        VAR_4->has_end = 0;
    }

end:
    FUNC_1(VAR_8);
    return VAR_5;
}
