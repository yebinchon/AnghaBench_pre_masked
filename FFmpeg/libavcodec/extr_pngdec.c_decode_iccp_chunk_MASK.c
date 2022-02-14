
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_13__ {scalar_t__ buffer; } ;
struct TYPE_12__ {int len; } ;
struct TYPE_11__ {int data; int metadata; } ;
struct TYPE_10__ {TYPE_6__ gb; int avctx; } ;
typedef TYPE_1__ PNGDecContext ;
typedef TYPE_2__ AVFrameSideData ;
typedef int AVFrame ;
typedef TYPE_3__ AVBPrint ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_3__*,char**) ;
 int FUNC_3 (int *,char*,scalar_t__*,int ) ;
 TYPE_2__* FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int ,int ,char*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,int) ;
 int FUNC_9 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_10 (int ,scalar_t__*,int ) ;

__attribute__((used)) static int FUNC_11(PNGDecContext *VAR_4, int VAR_5, AVFrame *VAR_6)
{
    int VAR_7, VAR_8 = 0;
    uint8_t *VAR_9, VAR_10[82];
    AVBPrint VAR_11;
    AVFrameSideData *VAR_12;

    while ((VAR_10[VAR_8++] = FUNC_7(&VAR_4->gb)) && VAR_8 < 81);
    if (VAR_8 > 80) {
        FUNC_6(VAR_4->avctx, VAR_2, "iCCP with invalid name!\n");
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_5 - VAR_8, 0);

    if (FUNC_7(&VAR_4->gb) != 0) {
        FUNC_6(VAR_4->avctx, VAR_2, "iCCP with invalid compression!\n");
        return VAR_0;
    }

    VAR_5 = FUNC_1(VAR_5 - 1, 0);

    if ((VAR_7 = FUNC_9(&VAR_11, VAR_4->gb.buffer, VAR_4->gb.buffer + VAR_5)) < 0)
        return VAR_7;

    VAR_7 = FUNC_2(&VAR_11, (char **)&VAR_9);
    if (VAR_7 < 0)
        return VAR_7;

    VAR_12 = FUNC_4(VAR_6, VAR_1, VAR_11.len);
    if (!VAR_12) {
        FUNC_5(VAR_9);
        return FUNC_0(VAR_3);
    }

    FUNC_3(&VAR_12->metadata, "name", VAR_10, 0);
    FUNC_10(VAR_12->data, VAR_9, VAR_11.len);
    FUNC_5(VAR_9);


    FUNC_8(&VAR_4->gb, VAR_5 + 4);

    return 0;
}
