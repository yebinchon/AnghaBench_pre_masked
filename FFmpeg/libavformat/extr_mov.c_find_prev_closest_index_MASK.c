
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t int64_t ;
struct TYPE_12__ {scalar_t__ timestamp; int flags; } ;
struct TYPE_11__ {int nb_index_entries; TYPE_4__* index_entries; TYPE_2__* priv_data; } ;
struct TYPE_10__ {scalar_t__ dts_shift; } ;
struct TYPE_9__ {size_t count; size_t duration; } ;
typedef TYPE_1__ MOVStts ;
typedef TYPE_2__ MOVStreamContext ;
typedef TYPE_3__ AVStream ;
typedef TYPE_4__ AVIndexEntry ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t*) ;
 size_t FUNC_1 (TYPE_3__*,size_t,int) ;

__attribute__((used)) static int FUNC_2(AVStream *VAR_3,
                                   AVIndexEntry *VAR_4,
                                   int VAR_5,
                                   MOVStts* VAR_6,
                                   int64_t VAR_7,
                                   int64_t VAR_8,
                                   int VAR_9,
                                   int64_t* VAR_10,
                                   int64_t* VAR_11,
                                   int64_t* VAR_12)
{
    MOVStreamContext *VAR_13 = VAR_3->priv_data;
    AVIndexEntry *VAR_14 = VAR_3->index_entries;
    int VAR_15 = VAR_3->nb_index_entries;
    int64_t VAR_16 = 0;
    int64_t VAR_17;

    FUNC_0(VAR_10);




    if (VAR_13->dts_shift > 0) {
        VAR_8 -= VAR_13->dts_shift;
    }

    VAR_3->index_entries = VAR_4;
    VAR_3->nb_index_entries = VAR_5;
    *VAR_10 = FUNC_1(VAR_3, VAR_8, VAR_9 | VAR_2);


    if (*VAR_10 >= 0) {
        for (VAR_16 = *VAR_10; VAR_16 > 0 && VAR_4[VAR_16].timestamp == VAR_4[VAR_16 - 1].timestamp;
             VAR_16--) {
            if ((VAR_9 & VAR_1) ||
                (VAR_4[VAR_16 - 1].flags & VAR_0)) {
                *VAR_10 = VAR_16 - 1;
            }
        }
    }



    if (VAR_6 && *VAR_10 >= 0) {
        FUNC_0(VAR_11);
        FUNC_0(VAR_12);

        *VAR_11 = 0;
        *VAR_12 = 0;
        for (VAR_17 = 0; VAR_17 < *VAR_10; VAR_17++) {
            if (*VAR_11 < VAR_7) {
                (*VAR_12)++;
                if (VAR_6[*VAR_11].count == *VAR_12) {
                    (*VAR_11)++;
                    *VAR_12 = 0;
                }
            }
        }

        while (*VAR_10 >= 0 && (*VAR_11) >= 0 && (*VAR_11) < VAR_7) {



            if ((VAR_4[*VAR_10].timestamp + VAR_6[*VAR_11].duration) <= VAR_8 &&
                (VAR_4[*VAR_10].flags & VAR_0)) {
                break;
            }

            (*VAR_10)--;
            if (*VAR_12 == 0) {
                (*VAR_11)--;
                if (*VAR_11 >= 0)
                  *VAR_12 = VAR_6[*VAR_11].count - 1;
            } else {
                (*VAR_12)--;
            }
        }
    }


    VAR_3->index_entries = VAR_14;
    VAR_3->nb_index_entries = VAR_15;
    return *VAR_10 >= 0 ? 0 : -1;
}
