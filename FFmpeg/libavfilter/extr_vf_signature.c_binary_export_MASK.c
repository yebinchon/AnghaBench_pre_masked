
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int buf ;
struct TYPE_17__ {int** data; TYPE_5__* last; TYPE_4__* first; struct TYPE_17__* next; } ;
struct TYPE_16__ {int pts; int confidence; int* words; int* framesig; struct TYPE_16__* next; } ;
struct TYPE_10__ {int den; int num; } ;
struct TYPE_15__ {int lastindex; int w; int h; TYPE_7__* finesiglist; TYPE_8__* coarsesiglist; TYPE_3__* coarseend; TYPE_1__ time_base; } ;
struct TYPE_14__ {int index; int pts; } ;
struct TYPE_13__ {int index; int pts; } ;
struct TYPE_12__ {TYPE_2__* last; } ;
struct TYPE_11__ {int pts; } ;
typedef TYPE_6__ StreamContext ;
typedef int PutBitContext ;
typedef TYPE_7__ FineSignature ;
typedef int FILE ;
typedef TYPE_8__ CoarseSignature ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int **) ;
 int FUNC_2 (int *,int ,char*,char const*,char*) ;
 int * FUNC_3 (int,int) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (char const*,char*) ;
 int FUNC_9 (int *,int,int,int *) ;
 int FUNC_10 (int *,int *,int) ;
 int FUNC_11 (int *,int,int) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(AVFilterContext *VAR_4, StreamContext *VAR_5, const char* VAR_6)
{
    FILE* VAR_7;
    FineSignature* VAR_8;
    CoarseSignature* VAR_9;
    uint32_t VAR_10 = (VAR_5->lastindex + 44)/45;
    int VAR_11, VAR_12;
    PutBitContext VAR_13;

    int VAR_14 = (512 + 6 * 32 + 3*16 + 2 +
        VAR_10 * (4*32 + 1 + 5*243) +
        VAR_5->lastindex * (2 + 32 + 6*8 + 608)) / 8;
    uint8_t* VAR_15 = FUNC_3(VAR_14, sizeof(uint8_t));
    if (!VAR_15)
        return FUNC_0(VAR_2);

    VAR_7 = FUNC_8(VAR_6, "wb");
    if (!VAR_7) {
        int VAR_16 = FUNC_0(VAR_1);
        char VAR_17[128];
        FUNC_4(VAR_16, VAR_17, sizeof(VAR_17));
        FUNC_2(VAR_4, VAR_0, "cannot open file %s: %s\n", VAR_6, VAR_17);
        FUNC_1(&VAR_15);
        return VAR_16;
    }
    FUNC_10(&VAR_13, VAR_15, VAR_14);

    FUNC_12(&VAR_13, 1);
    FUNC_11(&VAR_13, 1, 1);
    FUNC_12(&VAR_13, 0);
    FUNC_11(&VAR_13, 16, VAR_5->w-1 & 0xFFFF);
    FUNC_11(&VAR_13, 16, VAR_5->h-1 & 0xFFFF);
    FUNC_12(&VAR_13, 0);
    FUNC_12(&VAR_13, VAR_5->lastindex);


    FUNC_11(&VAR_13, 16, 0xFFFF & (VAR_5->time_base.den / VAR_5->time_base.num));
    FUNC_11(&VAR_13, 1, 1);
    FUNC_12(&VAR_13, 0);
    FUNC_12(&VAR_13, 0xFFFFFFFF & VAR_5->coarseend->last->pts);
    FUNC_12(&VAR_13, VAR_10);

    for (VAR_9 = VAR_5->coarsesiglist; VAR_9; VAR_9 = VAR_9->next) {
        FUNC_12(&VAR_13, VAR_9->first->index);
        FUNC_12(&VAR_13, VAR_9->last->index);
        FUNC_11(&VAR_13, 1, 1);
        FUNC_12(&VAR_13, 0xFFFFFFFF & VAR_9->first->pts);
        FUNC_12(&VAR_13, 0xFFFFFFFF & VAR_9->last->pts);
        for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {

            for (VAR_12 = 0; VAR_12 < 30; VAR_12++) {
                FUNC_11(&VAR_13, 8, VAR_9->data[VAR_11][VAR_12]);
            }
            FUNC_11(&VAR_13, 3, VAR_9->data[VAR_11][30] >> 5);
        }
    }

    FUNC_11(&VAR_13, 1, 0);
    for (VAR_8 = VAR_5->finesiglist; VAR_8; VAR_8 = VAR_8->next) {
        FUNC_11(&VAR_13, 1, 1);
        FUNC_12(&VAR_13, 0xFFFFFFFF & VAR_8->pts);
        FUNC_11(&VAR_13, 8, VAR_8->confidence);
        for (VAR_11 = 0; VAR_11 < 5; VAR_11++) {
            FUNC_11(&VAR_13, 8, VAR_8->words[VAR_11]);
        }

        for (VAR_11 = 0; VAR_11 < VAR_3/5; VAR_11++) {
            FUNC_11(&VAR_13, 8, VAR_8->framesig[VAR_11]);
        }
    }

    FUNC_5(&VAR_13);
    FUNC_7(&VAR_13);
    FUNC_9(VAR_15, 1, FUNC_13(&VAR_13)/8, VAR_7);
    FUNC_6(VAR_7);
    FUNC_1(&VAR_15);
    return 0;
}
