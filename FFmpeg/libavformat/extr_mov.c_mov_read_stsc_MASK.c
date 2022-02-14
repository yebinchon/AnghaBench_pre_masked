
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int uint64_t ;
typedef scalar_t__ int64_t ;
struct TYPE_21__ {scalar_t__ eof_reached; } ;
struct TYPE_20__ {TYPE_1__* priv_data; } ;
struct TYPE_19__ {int size; } ;
struct TYPE_18__ {TYPE_13__* fc; } ;
struct TYPE_17__ {unsigned int stsc_count; TYPE_12__* stsc_data; } ;
struct TYPE_16__ {int nb_streams; TYPE_4__** streams; } ;
struct TYPE_15__ {scalar_t__ first; int count; int id; } ;
typedef TYPE_1__ MOVStreamContext ;
typedef TYPE_2__ MOVContext ;
typedef TYPE_3__ MOVAtom ;
typedef TYPE_4__ AVStream ;
typedef TYPE_5__ AVIOContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int,int) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_12__*) ;
 int FUNC_5 (TYPE_13__*,int ,char*,...) ;
 TYPE_12__* FUNC_6 (unsigned int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 void* FUNC_9 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_10(MOVContext *VAR_7, AVIOContext *VAR_8, MOVAtom VAR_9)
{
    AVStream *VAR_10;
    MOVStreamContext *VAR_11;
    unsigned int VAR_12, VAR_13;

    if (VAR_7->fc->nb_streams < 1)
        return 0;
    VAR_10 = VAR_7->fc->streams[VAR_7->fc->nb_streams-1];
    VAR_11 = VAR_10->priv_data;

    FUNC_7(VAR_8);
    FUNC_8(VAR_8);

    VAR_13 = FUNC_9(VAR_8);
    if ((uint64_t)VAR_13 * 12 + 4 > VAR_9.size)
        return VAR_1;

    FUNC_5(VAR_7->fc, VAR_2, "track[%u].stsc.entries = %u\n", VAR_7->fc->nb_streams - 1, VAR_13);

    if (!VAR_13)
        return 0;
    if (VAR_11->stsc_data)
        FUNC_5(VAR_7->fc, VAR_3, "Duplicated STSC atom\n");
    FUNC_4(VAR_11->stsc_data);
    VAR_11->stsc_count = 0;
    VAR_11->stsc_data = FUNC_6(VAR_13, sizeof(*VAR_11->stsc_data));
    if (!VAR_11->stsc_data)
        return FUNC_0(VAR_4);

    for (VAR_12 = 0; VAR_12 < VAR_13 && !VAR_8->eof_reached; VAR_12++) {
        VAR_11->stsc_data[VAR_12].first = FUNC_9(VAR_8);
        VAR_11->stsc_data[VAR_12].count = FUNC_9(VAR_8);
        VAR_11->stsc_data[VAR_12].id = FUNC_9(VAR_8);
    }

    VAR_11->stsc_count = VAR_12;
    for (VAR_12 = VAR_11->stsc_count - 1; VAR_12 < VAR_6; VAR_12--) {
        int64_t VAR_14 = VAR_12 + 1;
        if ((VAR_12+1 < VAR_11->stsc_count && VAR_11->stsc_data[VAR_12].first >= VAR_11->stsc_data[VAR_12+1].first) ||
            (VAR_12 > 0 && VAR_11->stsc_data[VAR_12].first <= VAR_11->stsc_data[VAR_12-1].first) ||
            VAR_11->stsc_data[VAR_12].first < VAR_14 ||
            VAR_11->stsc_data[VAR_12].count < 1 ||
            VAR_11->stsc_data[VAR_12].id < 1) {
            FUNC_5(VAR_7->fc, VAR_3, "STSC entry %d is invalid (first=%d count=%d id=%d)\n", VAR_12, VAR_11->stsc_data[VAR_12].first, VAR_11->stsc_data[VAR_12].count, VAR_11->stsc_data[VAR_12].id);
            if (VAR_12+1 >= VAR_11->stsc_count) {
                VAR_11->stsc_data[VAR_12].first = FUNC_1(VAR_11->stsc_data[VAR_12].first, VAR_14);
                if (VAR_12 > 0 && VAR_11->stsc_data[VAR_12].first <= VAR_11->stsc_data[VAR_12-1].first)
                    VAR_11->stsc_data[VAR_12].first = FUNC_2(VAR_11->stsc_data[VAR_12-1].first + 1LL, VAR_5);
                VAR_11->stsc_data[VAR_12].count = FUNC_1(VAR_11->stsc_data[VAR_12].count, 1);
                VAR_11->stsc_data[VAR_12].id = FUNC_1(VAR_11->stsc_data[VAR_12].id, 1);
                continue;
            }
            FUNC_3(VAR_11->stsc_data[VAR_12+1].first >= 2);

            VAR_11->stsc_data[VAR_12].first = VAR_11->stsc_data[VAR_12+1].first - 1;
            VAR_11->stsc_data[VAR_12].count = VAR_11->stsc_data[VAR_12+1].count;
            VAR_11->stsc_data[VAR_12].id = VAR_11->stsc_data[VAR_12+1].id;
        }
    }

    if (VAR_8->eof_reached) {
        FUNC_5(VAR_7->fc, VAR_3, "reached eof, corrupted STSC atom\n");
        return VAR_0;
    }

    return 0;
}
