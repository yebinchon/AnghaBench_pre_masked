
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int data; int size; } ;
typedef TYPE_1__ AVPacket ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int *,int ,char*) ;
 int * FUNC_2 (TYPE_1__*,int ,int*) ;
 int FUNC_3 (int *,int *,int) ;

int FUNC_4(AVFormatContext *VAR_6, AVPacket *VAR_7, int VAR_8, uint32_t *VAR_9)
{
    uint8_t *VAR_10;
    int VAR_11;

    VAR_10 = FUNC_2(VAR_7, VAR_4, &VAR_11);
    if (VAR_10) {
        if (VAR_11 != VAR_2) {
            FUNC_1(VAR_6, VAR_3, "Invalid palette side data\n");
            return VAR_0;
        }
        FUNC_3(VAR_9, VAR_10, VAR_2);
        return 1;
    }

    if (VAR_8 == VAR_5) {
        int VAR_12;
        for (VAR_12 = 0; VAR_12 < VAR_1; VAR_12++)
            VAR_9[VAR_12] = FUNC_0(VAR_7->data + VAR_7->size - VAR_2 + VAR_12*4);
        return 1;
    }

    return 0;
}
