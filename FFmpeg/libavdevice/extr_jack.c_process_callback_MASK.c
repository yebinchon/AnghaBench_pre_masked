
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int pkt ;
typedef scalar_t__ jack_nframes_t ;
struct TYPE_7__ {scalar_t__ max; } ;
typedef TYPE_1__ jack_latency_range_t ;
struct TYPE_9__ {double pts; scalar_t__ data; } ;
struct TYPE_8__ {double sample_rate; int buffer_size; int pkt_xrun; int nports; int packet_count; int filled_pkts; int * ports; int new_pkts; int timefilter; int client; } ;
typedef TYPE_2__ JackData ;
typedef TYPE_3__ AVPacket ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_3__*,int,int *) ;
 int FUNC_1 (int ,TYPE_3__*,int,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 double FUNC_4 () ;
 double FUNC_5 (int ,double,int) ;
 scalar_t__ FUNC_6 (int ) ;
 float* FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int ,TYPE_1__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(jack_nframes_t VAR_1, void *VAR_2)
{



    int VAR_3, VAR_4;
    JackData *VAR_5 = VAR_2;
    float * VAR_6;
    jack_nframes_t VAR_7, VAR_8;
    AVPacket VAR_9;
    float *VAR_10;
    double VAR_11;

    if (!VAR_5->client)
        return 0;


    VAR_8 = FUNC_6(VAR_5->client);


    VAR_11 = FUNC_5(VAR_5->timefilter,
                                      FUNC_4() / 1000000.0 - (double) VAR_8 / VAR_5->sample_rate,
                                      VAR_5->buffer_size);


    if ((FUNC_2(VAR_5->new_pkts) < sizeof(VAR_9)) || (FUNC_3(VAR_5->filled_pkts) < sizeof(VAR_9))) {
        VAR_5->pkt_xrun = 1;
        return 0;
    }


    FUNC_0(VAR_5->new_pkts, &VAR_9, sizeof(VAR_9), ((void*)0));

    VAR_10 = (float *) VAR_9.data;
    VAR_7 = 0;


    for (VAR_3 = 0; VAR_3 < VAR_5->nports; VAR_3++) {
        jack_latency_range_t VAR_12;
        FUNC_8(VAR_5->ports[VAR_3], VAR_0, &VAR_12);
        VAR_7 += VAR_12.max;
        VAR_6 = FUNC_7(VAR_5->ports[VAR_3], VAR_5->buffer_size);
        for (VAR_4 = 0; VAR_4 < VAR_5->buffer_size; VAR_4++)
            VAR_10[VAR_4 * VAR_5->nports + VAR_3] = VAR_6[VAR_4];
    }


    VAR_9.pts = (VAR_11 - (double) VAR_7 / (VAR_5->nports * VAR_5->sample_rate)) * 1000000.0;


    FUNC_1(VAR_5->filled_pkts, &VAR_9, sizeof(VAR_9), ((void*)0));
    FUNC_9(&VAR_5->packet_count);

    return 0;
}
