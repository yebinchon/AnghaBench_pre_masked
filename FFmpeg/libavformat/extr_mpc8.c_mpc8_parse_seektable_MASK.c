
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int int64_t ;
struct TYPE_6__ {scalar_t__ nb_streams; int * streams; int pb; TYPE_1__* priv_data; } ;
struct TYPE_5__ {int samples; int header_pos; } ;
typedef TYPE_1__ MPCContext ;
typedef int GetBitContext ;
typedef TYPE_2__ AVFormatContext ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int,int,int ,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__*,int ,char*) ;
 int * FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 int FUNC_11 (int ,int*,int*) ;

__attribute__((used)) static void FUNC_12(AVFormatContext *VAR_7, int64_t VAR_8)
{
    MPCContext *VAR_9 = VAR_7->priv_data;
    int VAR_10;
    int64_t VAR_11, VAR_12, VAR_13[2];
    uint8_t *VAR_14;
    int VAR_15, VAR_16, VAR_17, VAR_18;
    GetBitContext VAR_19;

    if (VAR_7->nb_streams == 0) {
        FUNC_2(VAR_7, VAR_2, "No stream added before parsing seek table\n");
        return;
    }

    FUNC_5(VAR_7->pb, VAR_8, VAR_4);
    FUNC_11(VAR_7->pb, &VAR_10, &VAR_11);
    if(VAR_10 != VAR_5){
        FUNC_2(VAR_7, VAR_2, "No seek table at given position\n");
        return;
    }
    if (VAR_11 > VAR_3/10 || VAR_11<=0) {
        FUNC_2(VAR_7, VAR_2, "Bad seek table size\n");
        return;
    }
    if(!(VAR_14 = FUNC_3(VAR_11 + VAR_1)))
        return;
    VAR_18 = FUNC_4(VAR_7->pb, VAR_14, VAR_11);
    if (VAR_18 != VAR_11) {
        FUNC_2(VAR_7, VAR_2, "seek table truncated\n");
        FUNC_1(VAR_14);
        return;
    }
    FUNC_10(VAR_14+VAR_11, 0, VAR_1);

    FUNC_9(&VAR_19, VAR_14, VAR_11 * 8);
    VAR_11 = FUNC_6(&VAR_19);
    if(VAR_11 > VAR_6/4 || VAR_11 > VAR_9->samples/1152){
        FUNC_2(VAR_7, VAR_2, "Seek table is too big\n");
        FUNC_1(VAR_14);
        return;
    }
    VAR_17 = FUNC_7(&VAR_19, 4);
    for(VAR_15 = 0; VAR_15 < 2; VAR_15++){
        VAR_12 = FUNC_6(&VAR_19) + VAR_9->header_pos;
        VAR_13[1 - VAR_15] = VAR_12;
        FUNC_0(VAR_7->streams[0], VAR_12, VAR_15, 0, 0, VAR_0);
    }
    for(; VAR_15 < VAR_11; VAR_15++){
        VAR_16 = FUNC_8(&VAR_19, 1, 33) << 12;
        VAR_16 += FUNC_7(&VAR_19, 12);
        if(VAR_16 & 1)
            VAR_16 = -(VAR_16 & ~1);
        VAR_12 = (VAR_16 >> 1) + VAR_13[0]*2 - VAR_13[1];
        FUNC_0(VAR_7->streams[0], VAR_12, VAR_15 << VAR_17, 0, 0, VAR_0);
        VAR_13[1] = VAR_13[0];
        VAR_13[0] = VAR_12;
    }
    FUNC_1(VAR_14);
}
