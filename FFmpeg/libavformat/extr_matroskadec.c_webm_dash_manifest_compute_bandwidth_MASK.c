
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int mod_bits_per_second ;
typedef int int64_t ;
struct TYPE_14__ {TYPE_4__** streams; TYPE_2__* priv_data; } ;
struct TYPE_13__ {int nb_index_entries; TYPE_1__* index_entries; } ;
struct TYPE_12__ {int start_time_ns; int end_time_ns; int end_offset; int start_offset; } ;
struct TYPE_11__ {int time_scale; int duration; } ;
struct TYPE_10__ {int timestamp; } ;
typedef TYPE_2__ MatroskaDemuxContext ;
typedef TYPE_3__ CueDesc ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVFormatContext ;


 int FUNC_0 (int,double,int,double const,double*,double*,TYPE_5__*,int) ;
 TYPE_3__ FUNC_1 (TYPE_5__*,int,int) ;

__attribute__((used)) static int64_t FUNC_2(AVFormatContext *VAR_0, int64_t VAR_1)
{
    MatroskaDemuxContext *VAR_2 = VAR_0->priv_data;
    AVStream *VAR_3 = VAR_0->streams[0];
    double VAR_4 = 0.0;
    int VAR_5;

    for (VAR_5 = 0; VAR_5 < VAR_3->nb_index_entries; VAR_5++) {
        int64_t VAR_6 = 1000000000;
        int64_t VAR_7 = VAR_3->index_entries[VAR_5].timestamp * VAR_2->time_scale;
        double VAR_8 = 1000000000.0;
        int64_t VAR_9 = VAR_7 + VAR_6;
        double VAR_10 = 0.0;
        int64_t VAR_11 = VAR_6;
        int64_t VAR_12, VAR_13;
        double VAR_14, VAR_15, VAR_16;
        CueDesc VAR_17 = FUNC_1(VAR_0, VAR_7, VAR_1);


        CueDesc VAR_18 = VAR_17;



        while (VAR_18.start_time_ns != -1 && VAR_18.end_time_ns < VAR_9) {

            VAR_10 += VAR_18.end_offset - VAR_18.start_offset;
            VAR_11 -= VAR_18.end_time_ns - VAR_18.start_time_ns;
            VAR_18 = FUNC_1(VAR_0, VAR_18.end_time_ns, VAR_1);
        }
        if (VAR_18.start_time_ns == -1) {

            if (VAR_2->duration * VAR_2->time_scale >= VAR_9)
              return -1;
            VAR_16 = 0.0;
        } else {


            VAR_12 = VAR_18.end_offset - VAR_18.start_offset;
            VAR_13 = VAR_18.end_time_ns - VAR_18.start_time_ns;
            VAR_14 = VAR_13 / VAR_8;
            VAR_10 +=
                VAR_12 * ((VAR_11 / VAR_8) / VAR_14);

            VAR_15 = VAR_6 / VAR_8;


            VAR_16 = 0.0;
            do {
                int64_t VAR_19 = VAR_18.end_offset - VAR_17.start_offset;
                int64_t VAR_20 = VAR_18.end_time_ns - VAR_17.start_time_ns;
                double VAR_21 = VAR_20 / VAR_8;
                double VAR_22 = (VAR_19 * 8) / VAR_21;


                double VAR_23 = (VAR_19 - VAR_10) / VAR_19;
                double VAR_24 = VAR_22 * VAR_23;

                if (VAR_15 < VAR_21) {
                    double VAR_25 =
                        (double)(VAR_2->duration * VAR_2->time_scale) / VAR_8;



                    int64_t VAR_26 = (int64_t)(VAR_24) + 1;
                    const double VAR_27 = 0.0;
                    double VAR_28 = VAR_15;
                    double VAR_29 = 0.0;

                    int VAR_30 = FUNC_0(VAR_9, VAR_25, VAR_26,
                                                               VAR_27, &VAR_28, &VAR_29,
                                                               VAR_0, VAR_1);
                    if (VAR_30 < 0) {
                        return -1;
                    } else if (VAR_30 == 0) {
                        VAR_16 = (double)(VAR_26);
                        break;
                    }
                }

                VAR_18 = FUNC_1(VAR_0, VAR_18.end_time_ns, VAR_1);
            } while (VAR_18.start_time_ns != -1);
        }
        if (VAR_4 < VAR_16) VAR_4 = VAR_16;
    }
    return (int64_t)VAR_4;
}
