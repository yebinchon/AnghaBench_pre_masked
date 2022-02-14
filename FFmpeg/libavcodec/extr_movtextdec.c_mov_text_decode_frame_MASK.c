
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_14__ ;


typedef char uint8_t ;
typedef int uint64_t ;
struct TYPE_23__ {int str; } ;
struct TYPE_22__ {TYPE_1__* priv_data; } ;
struct TYPE_21__ {char* data; int size; } ;
struct TYPE_20__ {scalar_t__ num_rects; } ;
struct TYPE_19__ {int tracksize; int size_var; int readorder; scalar_t__ count_s; scalar_t__ box_flags; scalar_t__ style_entries; } ;
struct TYPE_18__ {int type; int base_size; int (* decode ) (char const*,TYPE_1__*,TYPE_3__*) ;} ;
typedef TYPE_1__ MovTextContext ;
typedef TYPE_2__ AVSubtitle ;
typedef TYPE_3__ AVPacket ;
typedef TYPE_4__ AVCodecContext ;
typedef TYPE_5__ AVBPrint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (TYPE_5__*,int *) ;
 int FUNC_5 (TYPE_5__*,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int ,char*) ;
 size_t VAR_3 ;
 TYPE_14__* VAR_4 ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ,int *,int *) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (char const*,TYPE_1__*,TYPE_3__*) ;
 int FUNC_10 (TYPE_5__*,char*,char*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_11(AVCodecContext *VAR_5,
                            void *VAR_6, int *VAR_7, AVPacket *VAR_8)
{
    AVSubtitle *VAR_9 = VAR_6;
    MovTextContext *VAR_10 = VAR_5->priv_data;
    int VAR_11;
    AVBPrint VAR_12;
    char *VAR_13 = VAR_8->data;
    char *VAR_14;
    int VAR_15, VAR_16, VAR_17;
    uint64_t VAR_18;
    const uint8_t *VAR_19;
    size_t VAR_20;

    if (!VAR_13 || VAR_8->size < 2)
        return VAR_0;
    if (VAR_8->size == 2)
        return FUNC_0(VAR_13) == 0 ? 0 : VAR_0;






    VAR_15 = FUNC_0(VAR_13);
    VAR_14 = VAR_13 + FUNC_3(2 + VAR_15, VAR_8->size);
    VAR_13 += 2;

    FUNC_8(VAR_10);

    VAR_18 = 0;
    VAR_10->tracksize = 2 + VAR_15;
    VAR_10->style_entries = 0;
    VAR_10->box_flags = 0;
    VAR_10->count_s = 0;

    FUNC_5(&VAR_12, 0, VAR_1);
    if (VAR_15 + 2 != VAR_8->size) {
        while (VAR_10->tracksize + 8 <= VAR_8->size) {

            VAR_19 = VAR_13 + VAR_10->tracksize - 2;
            VAR_18 = FUNC_1(VAR_19);
            VAR_19 += 4;
            VAR_16 = FUNC_1(VAR_19);
            VAR_19 += 4;

            if (VAR_18 == 1) {
                if (VAR_10->tracksize + 16 > VAR_8->size)
                    break;
                VAR_18 = FUNC_2(VAR_19);
                VAR_19 += 8;
                VAR_10->size_var = 16;
            } else
                VAR_10->size_var = 8;


            if (VAR_18 == 0) {
                FUNC_6(VAR_5, VAR_2, "tsmb_size is 0\n");
                return VAR_0;
            }

            if (VAR_18 > VAR_8->size - VAR_10->tracksize)
                break;

            for (VAR_20 = 0; VAR_20 < VAR_3; VAR_20++) {
                if (VAR_16 == VAR_4[VAR_20].type) {
                    if (VAR_10->tracksize + VAR_10->size_var + VAR_4[VAR_20].base_size > VAR_8->size)
                        break;
                    VAR_17 = VAR_4[VAR_20].decode(VAR_19, VAR_10, VAR_8);
                    if (VAR_17 == -1)
                        break;
                }
            }
            VAR_10->tracksize = VAR_10->tracksize + VAR_18;
        }
        FUNC_10(&VAR_12, VAR_13, VAR_14, VAR_5);
        FUNC_8(VAR_10);
    } else
        FUNC_10(&VAR_12, VAR_13, VAR_14, VAR_5);

    VAR_11 = FUNC_7(VAR_9, VAR_12.str, VAR_10->readorder++, 0, ((void*)0), ((void*)0));
    FUNC_4(&VAR_12, ((void*)0));
    if (VAR_11 < 0)
        return VAR_11;
    *VAR_7 = VAR_9->num_rects > 0;
    return VAR_8->size;
}
