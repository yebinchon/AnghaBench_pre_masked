
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int* num_ele; int** pairing; int** index; } ;
struct TYPE_7__ {int samplerate_index; TYPE_2__ pce; } ;
struct TYPE_5__ {int flags; int profile; TYPE_3__* priv_data; } ;
typedef int PutBitContext ;
typedef TYPE_1__ AVCodecContext ;
typedef TYPE_2__ AACPCEInfo ;
typedef TYPE_3__ AACEncContext ;


 int VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char const*,int ) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static void FUNC_4(PutBitContext *VAR_2, AVCodecContext *VAR_3)
{
    int VAR_4, VAR_5;
    AACEncContext *VAR_6 = VAR_3->priv_data;
    AACPCEInfo *VAR_7 = &VAR_6->pce;
    const int VAR_8 = VAR_3->flags & VAR_0;
    const char *VAR_9 = VAR_8 ? "Lavc" : VAR_1;

    FUNC_2(VAR_2, 4, 0);

    FUNC_2(VAR_2, 2, VAR_3->profile);
    FUNC_2(VAR_2, 4, VAR_6->samplerate_index);

    FUNC_2(VAR_2, 4, VAR_7->num_ele[0]);
    FUNC_2(VAR_2, 4, VAR_7->num_ele[1]);
    FUNC_2(VAR_2, 4, VAR_7->num_ele[2]);
    FUNC_2(VAR_2, 2, VAR_7->num_ele[3]);
    FUNC_2(VAR_2, 3, 0);
    FUNC_2(VAR_2, 4, 0);

    FUNC_2(VAR_2, 1, 0);
    FUNC_2(VAR_2, 1, 0);
    FUNC_2(VAR_2, 1, 0);

    for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        for (VAR_5 = 0; VAR_5 < VAR_7->num_ele[VAR_4]; VAR_5++) {
            if (VAR_4 < 3)
                FUNC_2(VAR_2, 1, VAR_7->pairing[VAR_4][VAR_5]);
            FUNC_2(VAR_2, 4, VAR_7->index[VAR_4][VAR_5]);
        }
    }

    FUNC_0(VAR_2);
    FUNC_2(VAR_2, 8, FUNC_3(VAR_9));
    FUNC_1(VAR_2, VAR_9, 0);
}
