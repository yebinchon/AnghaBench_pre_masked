
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef void* int64_t ;
struct TYPE_8__ {int nb_streams; TYPE_2__** streams; int * pb; TYPE_1__* priv_data; } ;
struct TYPE_7__ {int id; } ;
struct TYPE_6__ {int remaining_len; int current_stream; } ;
typedef TYPE_1__ RMDemuxContext ;
typedef TYPE_2__ AVStream ;
typedef int AVIOContext ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char,char,char,char) ;
 int FUNC_2 (TYPE_3__*,int ,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;
 void* FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(AVFormatContext *VAR_2, int64_t *VAR_3, int *VAR_4, int *VAR_5, int64_t *VAR_6){
    RMDemuxContext *VAR_7 = VAR_2->priv_data;
    AVIOContext *VAR_8 = VAR_2->pb;
    AVStream *VAR_9;
    uint32_t VAR_10=0xFFFFFFFF;

    while(!FUNC_3(VAR_8)){
        int VAR_11, VAR_12, VAR_13;
        int VAR_14;
        *VAR_6= FUNC_8(VAR_8) - 3;
        if(VAR_7->remaining_len > 0){
            VAR_12= VAR_7->current_stream;
            VAR_14 = 0;
            VAR_11= VAR_7->remaining_len;
            *VAR_3 = VAR_1;
            *VAR_4= 0;
        }else{
            VAR_10= (VAR_10<<8) + FUNC_4(VAR_8);

            if(VAR_10 == FUNC_1('I', 'N', 'D', 'X')){
                int VAR_15, VAR_16;
                VAR_11 = FUNC_6(VAR_8);
                FUNC_7(VAR_8, 2);
                VAR_15 = FUNC_6(VAR_8);
                VAR_16 = 20 + VAR_15 * 14;
                if (VAR_11 == 20)

                    VAR_11 = VAR_16;
                else if (VAR_11 != VAR_16)
                    FUNC_2(VAR_2, VAR_0,
                           "Index size %d (%d pkts) is wrong, should be %d.\n",
                           VAR_11, VAR_15, VAR_16);
                VAR_11 -= 14;
                if(VAR_11<0)
                    continue;
                goto skip;
            } else if (VAR_10 == FUNC_1('D','A','T','A')) {
                FUNC_2(VAR_2, VAR_0,
                       "DATA tag in middle of chunk, file may be broken.\n");
            }

            if(VAR_10 > (unsigned)0xFFFF || VAR_10 <= 12)
                continue;
            VAR_11=VAR_10 - 12;
            VAR_10= 0xFFFFFFFF;

            VAR_12 = FUNC_5(VAR_8);
            *VAR_3 = FUNC_6(VAR_8);
            VAR_14 = (FUNC_4(VAR_8) >> 1) - 1;
            VAR_14 = FUNC_0(VAR_14, 0) << 16;
            *VAR_4 = FUNC_4(VAR_8);
        }
        for(VAR_13=0;VAR_13<VAR_2->nb_streams;VAR_13++) {
            VAR_9 = VAR_2->streams[VAR_13];
            if (VAR_14 + VAR_12 == VAR_9->id)
                break;
        }
        if (VAR_13 == VAR_2->nb_streams) {
skip:

            FUNC_7(VAR_8, VAR_11);
            VAR_7->remaining_len = 0;
            continue;
        }
        *VAR_5= VAR_13;

        return VAR_11;
    }
    return -1;
}
