
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int entries; size_t hti; int hbits; int huff_code_size; int*** huffman_table; } ;
typedef TYPE_1__ Vp3DecodeContext ;
struct TYPE_7__ {TYPE_1__* priv_data; } ;
typedef int GetBitContext ;
typedef TYPE_2__ AVCodecContext ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,char*) ;
 int FUNC_1 (TYPE_2__*,char*,size_t,int,int,int,int) ;
 int FUNC_2 (int *,int) ;
 scalar_t__ FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(AVCodecContext *VAR_1, GetBitContext *VAR_2)
{
    Vp3DecodeContext *VAR_3 = VAR_1->priv_data;

    if (FUNC_3(VAR_2)) {
        int VAR_4;
        if (VAR_3->entries >= 32) {
            FUNC_0(VAR_1, VAR_0, "huffman tree overflow\n");
            return -1;
        }
        VAR_4 = FUNC_2(VAR_2, 5);
        FUNC_1(VAR_1, "hti %d hbits %x token %d entry : %d size %d\n",
                VAR_3->hti, VAR_3->hbits, VAR_4, VAR_3->entries, VAR_3->huff_code_size);
        VAR_3->huffman_table[VAR_3->hti][VAR_4][0] = VAR_3->hbits;
        VAR_3->huffman_table[VAR_3->hti][VAR_4][1] = VAR_3->huff_code_size;
        VAR_3->entries++;
    } else {
        if (VAR_3->huff_code_size >= 32) {
            FUNC_0(VAR_1, VAR_0, "huffman tree overflow\n");
            return -1;
        }
        VAR_3->huff_code_size++;
        VAR_3->hbits <<= 1;
        if (FUNC_4(VAR_1, VAR_2))
            return -1;
        VAR_3->hbits |= 1;
        if (FUNC_4(VAR_1, VAR_2))
            return -1;
        VAR_3->hbits >>= 1;
        VAR_3->huff_code_size--;
    }
    return 0;
}
