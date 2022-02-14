
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {int width; int height; int flags; scalar_t__ len; unsigned int data_size; int data; } ;
struct TYPE_11__ {int * blockbuffer; } ;
typedef int Palette ;
typedef TYPE_1__ FlashSV2Context ;
typedef TYPE_2__ Block ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*,int const*,int,int) ;
 int FUNC_1 (TYPE_2__*,int const*,int) ;
 int FUNC_2 (TYPE_2__*,int ,unsigned int*,int) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int *,unsigned int*,int) ;
 int FUNC_4 (int ,int *,unsigned int) ;

__attribute__((used)) static int FUNC_5(FlashSV2Context *VAR_2, Palette * VAR_3, Block * VAR_4,
                        Block * VAR_5, const uint8_t * VAR_6, int VAR_7, int VAR_8,
                        int VAR_9, int VAR_10)
{
    unsigned VAR_11 = VAR_4->width * VAR_4->height * 6;
    uint8_t *VAR_12 = VAR_2->blockbuffer;
    int VAR_13;

    if (VAR_4->flags & VAR_0) {
        FUNC_0(VAR_3, VAR_4, VAR_6, VAR_7, VAR_9);
    } else {
        FUNC_1(VAR_4, VAR_6, VAR_7);
    }

    if (VAR_4->len > 0) {
        VAR_4->data_size = VAR_11;
        VAR_13 = FUNC_2(VAR_4, VAR_4->data, &VAR_4->data_size, VAR_8);
        if (VAR_13)
            return VAR_13;

        if (!VAR_10) {
            VAR_13 = FUNC_3(VAR_4, VAR_5, VAR_12, &VAR_11, VAR_8);
            if (VAR_13)
                return VAR_13;

            if (VAR_11 < VAR_4->data_size) {
                VAR_4->data_size = VAR_11;
                FUNC_4(VAR_4->data, VAR_12, VAR_11);
                VAR_4->flags |= VAR_1;
            }
        }
    } else {
        VAR_4->data_size = 0;
    }
    return 0;
}
