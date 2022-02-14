
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_10__ {int bits; int length; int * recode; int vlc; } ;
struct TYPE_9__ {int avctx; int gb; } ;
struct TYPE_8__ {int val_bits; int max_bits; int nodes; int num; int max_num; int * lens; int * bits; int * nums; void* min_bits; } ;
typedef TYPE_1__ TM2Huff ;
typedef TYPE_2__ TM2Context ;
typedef TYPE_3__ TM2Codes ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ,char*,...) ;
 int * FUNC_4 (int,int) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int,int,int *,int,int,int *,int,int,int ) ;
 int FUNC_8 (TYPE_2__*,int ,int ,TYPE_1__*) ;

__attribute__((used)) static int FUNC_9(TM2Context *VAR_3, TM2Codes *VAR_4)
{
    TM2Huff VAR_5;
    int VAR_6 = 0;

    VAR_5.val_bits = FUNC_5(&VAR_3->gb, 5);
    VAR_5.max_bits = FUNC_5(&VAR_3->gb, 5);
    VAR_5.min_bits = FUNC_5(&VAR_3->gb, 5);
    VAR_5.nodes = FUNC_6(&VAR_3->gb, 17);
    VAR_5.num = 0;


    if ((VAR_5.val_bits < 1) || (VAR_5.val_bits > 32) ||
        (VAR_5.max_bits < 0) || (VAR_5.max_bits > 25)) {
        FUNC_3(VAR_3->avctx, VAR_1, "Incorrect tree parameters - literal "
               "length: %i, max code length: %i\n", VAR_5.val_bits, VAR_5.max_bits);
        return VAR_0;
    }
    if ((VAR_5.nodes <= 0) || (VAR_5.nodes > 0x10000)) {
        FUNC_3(VAR_3->avctx, VAR_1, "Incorrect number of Huffman tree "
               "nodes: %i\n", VAR_5.nodes);
        return VAR_0;
    }

    if (VAR_5.max_bits == 0)
        VAR_5.max_bits = 1;


    VAR_5.max_num = (VAR_5.nodes + 1) >> 1;
    VAR_5.nums = FUNC_1(VAR_5.max_num, sizeof(int));
    VAR_5.bits = FUNC_1(VAR_5.max_num, sizeof(uint32_t));
    VAR_5.lens = FUNC_1(VAR_5.max_num, sizeof(int));

    if (!VAR_5.nums || !VAR_5.bits || !VAR_5.lens) {
        VAR_6 = FUNC_0(VAR_2);
        goto out;
    }

    VAR_6 = FUNC_8(VAR_3, 0, 0, &VAR_5);

    if (VAR_6 >= 0 && VAR_6 != VAR_5.max_bits) {
        FUNC_3(VAR_3->avctx, VAR_1, "Got less bits than expected: %i of %i\n",
               VAR_6, VAR_5.max_bits);
        VAR_6 = VAR_0;
    }
    if (VAR_5.num != VAR_5.max_num) {
        FUNC_3(VAR_3->avctx, VAR_1, "Got less codes than expected: %i of %i\n",
               VAR_5.num, VAR_5.max_num);
        VAR_6 = VAR_0;
    }


    if (VAR_6 >= 0) {
        int VAR_7;

        VAR_6 = FUNC_7(&VAR_4->vlc, VAR_5.max_bits, VAR_5.max_num,
                       VAR_5.lens, sizeof(int), sizeof(int),
                       VAR_5.bits, sizeof(uint32_t), sizeof(uint32_t), 0);
        if (VAR_6 < 0)
            FUNC_3(VAR_3->avctx, VAR_1, "Cannot build VLC table\n");
        else {
            VAR_4->bits = VAR_5.max_bits;
            VAR_4->length = VAR_5.max_num;
            VAR_4->recode = FUNC_4(VAR_4->length, sizeof(int));
            if (!VAR_4->recode) {
                VAR_6 = FUNC_0(VAR_2);
                goto out;
            }
            for (VAR_7 = 0; VAR_7 < VAR_4->length; VAR_7++)
                VAR_4->recode[VAR_7] = VAR_5.nums[VAR_7];
        }
    }

out:

    FUNC_2(VAR_5.nums);
    FUNC_2(VAR_5.bits);
    FUNC_2(VAR_5.lens);

    return VAR_6;
}
