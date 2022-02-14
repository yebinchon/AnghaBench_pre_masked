
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef int int64_t ;
struct TYPE_15__ {TYPE_2__* pb; } ;
struct TYPE_14__ {struct TYPE_14__* buffer; } ;
struct TYPE_13__ {int filesize; size_t fuzz_size; int const* fuzz; scalar_t__ pos; } ;
typedef TYPE_1__ IOContext ;
typedef int GetByteContext ;
typedef int AVPacket ;
typedef TYPE_2__ AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int *) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_3__* FUNC_8 () ;
 int FUNC_9 (TYPE_3__**) ;
 int FUNC_10 (TYPE_3__*,int *) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__**,char*,int *,int *) ;
 TYPE_2__* FUNC_13 (int *,int,int ,TYPE_1__*,int ,int *,int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int const*,int) ;
 int FUNC_18 (char*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_19 (char*,int const*,int) ;

int FUNC_20(const uint8_t *VAR_5, size_t VAR_6) {
    const uint64_t VAR_7 = VAR_1;
    uint32_t VAR_8 = 0;
    AVFormatContext *VAR_9 = FUNC_8();
    AVPacket VAR_10;
    char VAR_11[1025] = {0};
    AVIOContext *VAR_12 = ((void*)0);
    uint8_t *VAR_13;
    int VAR_14 = 32768;
    int64_t VAR_15 = VAR_6;
    IOContext VAR_16;
    static int VAR_17;
    int VAR_18 = 0;
    int VAR_19;

    if (!VAR_17) {
        FUNC_6();
        FUNC_7();
        FUNC_2(VAR_0);
        VAR_17=1;
    }

    if (!VAR_9)
        FUNC_18("Failed avformat_alloc_context()");

    if (VAR_6 > 2048) {
        GetByteContext VAR_20;
        FUNC_19 (VAR_11, VAR_5 + VAR_6 - 1024, 1024);
        FUNC_17(&VAR_20, VAR_5 + VAR_6 - 2048, 1024);
        VAR_6 -= 2048;

        VAR_14 = FUNC_15(&VAR_20) & 0xFFFFFFF;
        VAR_18 = FUNC_14(&VAR_20) & 1;
        VAR_15 = FUNC_16(&VAR_20) & 0x7FFFFFFFFFFFFFFF;
    }
    VAR_13 = FUNC_3(VAR_14);
    if (!VAR_13)
        FUNC_18("Failed to allocate io_buffer");

    VAR_16.filesize = VAR_15;
    VAR_16.pos = 0;
    VAR_16.fuzz = VAR_5;
    VAR_16.fuzz_size= VAR_6;
    VAR_12 = FUNC_13(VAR_13, VAR_14, 0, &VAR_16,
                                   VAR_2, ((void*)0), VAR_18 ? VAR_3 : ((void*)0));
    if (!VAR_12)
        FUNC_18("avio_alloc_context failed");

    VAR_9->pb = VAR_12;

    VAR_19 = FUNC_12(&VAR_9, VAR_11, ((void*)0), ((void*)0));
    if (VAR_19 < 0) {
        FUNC_0(&VAR_12->buffer);
        FUNC_0(&VAR_12);
        FUNC_11(VAR_9);
        return 0;
    }

    VAR_19 = FUNC_10(VAR_9, ((void*)0));

    FUNC_1(&VAR_10);



    for(VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
        VAR_19 = FUNC_5(VAR_9, &VAR_10);
        if (VAR_19 < 0)
            break;
        FUNC_4(&VAR_10);
    }
end:
    FUNC_0(&VAR_12->buffer);
    FUNC_0(&VAR_12);
    FUNC_9(&VAR_9);

    return 0;
}
