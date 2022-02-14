
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_11__ {int * priv_data; } ;
struct TYPE_10__ {TYPE_1__* display_list; } ;
struct TYPE_9__ {struct TYPE_9__* object_list_next; } ;
typedef TYPE_1__ DVBSubObjectDisplay ;
typedef TYPE_2__ DVBSubObject ;
typedef int DVBSubContext ;
typedef TYPE_3__ AVCodecContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_3__*,int ,char*,int,...) ;
 int FUNC_2 (TYPE_3__*,TYPE_1__*,int const*,int,int,int) ;
 TYPE_2__* FUNC_3 (int *,int) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_2,
                                       const uint8_t *VAR_3, int VAR_4)
{
    DVBSubContext *VAR_5 = VAR_2->priv_data;

    const uint8_t *VAR_6 = VAR_3 + VAR_4;
    int VAR_7;
    DVBSubObject *VAR_8;
    DVBSubObjectDisplay *VAR_9;
    int VAR_10, VAR_11;

    int VAR_12, VAR_13;

    VAR_7 = FUNC_0(VAR_3);
    VAR_3 += 2;

    VAR_8 = FUNC_3(VAR_5, VAR_7);

    if (!VAR_8)
        return VAR_0;

    VAR_12 = ((*VAR_3) >> 2) & 3;
    VAR_13 = ((*VAR_3++) >> 1) & 1;

    if (VAR_12 == 0) {
        VAR_10 = FUNC_0(VAR_3);
        VAR_3 += 2;
        VAR_11 = FUNC_0(VAR_3);
        VAR_3 += 2;

        if (VAR_3 + VAR_10 + VAR_11 > VAR_6) {
            FUNC_1(VAR_2, VAR_1, "Field data size %d+%d too large\n", VAR_10, VAR_11);
            return VAR_0;
        }

        for (VAR_9 = VAR_8->display_list; VAR_9; VAR_9 = VAR_9->object_list_next) {
            const uint8_t *VAR_14 = VAR_3;
            int VAR_15 = VAR_11;

            FUNC_2(VAR_2, VAR_9, VAR_14, VAR_10, 0,
                                            VAR_13);

            if (VAR_11 > 0)
                VAR_14 = VAR_3 + VAR_10;
            else
                VAR_15 = VAR_10;

            FUNC_2(VAR_2, VAR_9, VAR_14, VAR_15, 1,
                                            VAR_13);
        }



    } else {
        FUNC_1(VAR_2, VAR_1, "Unknown object coding %d\n", VAR_12);
    }

    return 0;
}
