
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int data_size; scalar_t__ data; int data_ref; } ;
struct TYPE_8__ {int log_ctx; } ;
struct TYPE_7__ {int data_size; scalar_t__ data; int data_ref; } ;
typedef int GetBitContext ;
typedef TYPE_1__ CodedBitstreamUnit ;
typedef TYPE_2__ CodedBitstreamContext ;
typedef TYPE_3__ AV1RawTileData ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,char*,int) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(CodedBitstreamContext *VAR_3,
                                 CodedBitstreamUnit *VAR_4,
                                 GetBitContext *VAR_5,
                                 AV1RawTileData *VAR_6)
{
    int VAR_7;

    VAR_7 = FUNC_4(VAR_5);
    if (VAR_7 >= 8 * VAR_4->data_size) {
        FUNC_3(VAR_3->log_ctx, VAR_1, "Bitstream ended before "
               "any data in tile group (%d bits read).\n", VAR_7);
        return VAR_0;
    }

    FUNC_1(VAR_7 % 8 == 0);

    VAR_6->data_ref = FUNC_2(VAR_4->data_ref);
    if (!VAR_6->data_ref)
        return FUNC_0(VAR_2);

    VAR_6->data = VAR_4->data + VAR_7 / 8;
    VAR_6->data_size = VAR_4->data_size - VAR_7 / 8;

    return 0;
}
