
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef void* uint32_t ;
typedef int int64_t ;
struct TYPE_12__ {int metadata; TYPE_1__* pb; } ;
struct TYPE_11__ {scalar_t__ eof_reached; } ;
typedef TYPE_1__ AVIOContext ;
typedef TYPE_2__ AVFormatContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,int ,char*) ;
 char* FUNC_4 (int) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,char*,int) ;
 void* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int) ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(AVFormatContext *VAR_8, int64_t VAR_9)
{
    int64_t VAR_10, VAR_11, VAR_12;
    AVIOContext *VAR_13 = VAR_8->pb;

    VAR_10 = FUNC_10(VAR_13);
    VAR_11 = VAR_10 + VAR_9;

    while ((VAR_12 = FUNC_10(VAR_13)) >= 0 &&
           VAR_12 <= VAR_11 - 8 ) {
        uint32_t VAR_14;
        int64_t VAR_15;
        char VAR_16[5] = { 0 };
        char *VAR_17;

        VAR_14 = FUNC_7(VAR_13);
        VAR_15 = FUNC_7(VAR_13);
        if (FUNC_5(VAR_13)) {
            if (VAR_14 || VAR_15) {
                FUNC_3(VAR_8, VAR_4, "INFO subchunk truncated\n");
                return VAR_1;
            }
            return VAR_0;
        }
        if (VAR_15 > VAR_11 ||
            VAR_11 - VAR_15 < VAR_12 ||
            VAR_15 == VAR_7) {
            FUNC_8(VAR_13, -9, VAR_6);
            VAR_14 = FUNC_7(VAR_13);
            VAR_15 = FUNC_7(VAR_13);
            if (VAR_15 > VAR_11 || VAR_11 - VAR_15 < VAR_12 || VAR_15 == VAR_7) {
                FUNC_3(VAR_8, VAR_4, "too big INFO subchunk\n");
                return VAR_1;
            }
        }

        VAR_15 += (VAR_15 & 1);

        if (!VAR_14) {
            if (VAR_15)
                FUNC_9(VAR_13, VAR_15);
            else if (VAR_13->eof_reached) {
                FUNC_3(VAR_8, VAR_4, "truncated file\n");
                return VAR_0;
            }
            continue;
        }

        VAR_17 = FUNC_4(VAR_15 + 1);
        if (!VAR_17) {
            FUNC_3(VAR_8, VAR_3,
                   "out of memory, unable to read INFO tag\n");
            return FUNC_0(VAR_5);
        }

        FUNC_1(VAR_16, VAR_14);


        VAR_16[4] = 0;

        if (FUNC_6(VAR_13, VAR_17, VAR_15) != VAR_15) {
            FUNC_3(VAR_8, VAR_4,
                   "premature end of file while reading INFO tag\n");
        }

        FUNC_2(&VAR_8->metadata, VAR_16, VAR_17, VAR_2);
    }

    return 0;
}
