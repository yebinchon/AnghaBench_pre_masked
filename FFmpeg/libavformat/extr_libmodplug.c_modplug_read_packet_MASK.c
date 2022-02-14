
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_1__* priv_data; } ;
struct TYPE_9__ {int stream_index; int* data; double pts; double dts; scalar_t__ size; int flags; } ;
struct TYPE_8__ {int video_switch; double w; double h; double packet_count; double ts_per_packet; int linesize; int f; scalar_t__ video_stream; scalar_t__ expr; scalar_t__ print_textinfo; int fsize; } ;
typedef TYPE_1__ ModPlugContext ;
typedef TYPE_2__ AVPacket ;
typedef TYPE_3__ AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 double FUNC_1 (int ) ;
 double FUNC_2 (int ) ;
 double FUNC_3 (int ) ;
 double FUNC_4 (int ) ;
 double FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int*,int ) ;
 int FUNC_7 (int,char*,size_t) ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int FUNC_8 (int,int ,int) ;
 double FUNC_9 (scalar_t__,double*,int *) ;
 scalar_t__ FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (int*,int ,int ) ;

__attribute__((used)) static int FUNC_13(AVFormatContext *VAR_16, AVPacket *VAR_17)
{
    ModPlugContext *VAR_18 = VAR_16->priv_data;

    if (VAR_18->video_stream) {
        VAR_18->video_switch ^= 1;
        if (VAR_18->video_switch) {
            double VAR_19[VAR_12];

            VAR_19[VAR_13 ] = VAR_18->w;
            VAR_19[VAR_5 ] = VAR_18->h;
            VAR_19[VAR_11 ] = VAR_18->packet_count * VAR_18->ts_per_packet;
            VAR_19[VAR_9 ] = FUNC_4 (VAR_18->f);
            VAR_19[VAR_10 ] = FUNC_5 (VAR_18->f);
            VAR_19[VAR_6 ] = FUNC_1 (VAR_18->f);
            VAR_19[VAR_7] = FUNC_2(VAR_18->f);
            VAR_19[VAR_8 ] = FUNC_3 (VAR_18->f);

            if (FUNC_10(VAR_17, VAR_18->fsize) < 0)
                return FUNC_0(VAR_4);
            VAR_17->stream_index = 1;
            FUNC_12(VAR_17->data, 0, VAR_18->fsize);

            if (VAR_18->print_textinfo) {
                char VAR_20[32];
                FUNC_7(0, "speed", VAR_9);
                FUNC_7(1, "tempo", VAR_10);
                FUNC_7(2, "order", VAR_6);
                FUNC_7(3, "pattern", VAR_7);
                FUNC_7(4, "row", VAR_8);
                FUNC_7(5, "ts", VAR_11);
            }

            if (VAR_18->expr) {
                int VAR_21, VAR_22;
                for (VAR_22 = 0; VAR_22 < VAR_18->h; VAR_22++) {
                    for (VAR_21 = 0; VAR_21 < VAR_18->w; VAR_21++) {
                        double VAR_23;
                        VAR_19[VAR_14] = VAR_21;
                        VAR_19[VAR_15] = VAR_22;
                        VAR_23 = FUNC_9(VAR_18->expr, VAR_19, ((void*)0));
                        VAR_17->data[VAR_22*VAR_18->linesize + VAR_21*3 + 2] |= FUNC_8((int)VAR_23, 0, 0xf)<<4;
                    }
                }
            }
            VAR_17->pts = VAR_17->dts = VAR_19[VAR_11];
            VAR_17->flags |= VAR_2;
            return 0;
        }
    }

    if (FUNC_10(VAR_17, VAR_0) < 0)
        return FUNC_0(VAR_4);

    if (VAR_18->video_stream)
        VAR_17->pts = VAR_17->dts = VAR_18->packet_count++ * VAR_18->ts_per_packet;

    VAR_17->size = FUNC_6(VAR_18->f, VAR_17->data, VAR_0);
    if (VAR_17->size <= 0) {
        FUNC_11(VAR_17);
        return VAR_17->size == 0 ? VAR_1 : FUNC_0(VAR_3);
    }
    return 0;
}
