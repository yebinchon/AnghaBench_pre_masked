
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int input_size; int input; int word_bytes; int avctx; } ;
typedef TYPE_1__ DBEContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,char*) ;

__attribute__((used)) static int FUNC_1(DBEContext *VAR_2, int VAR_3)
{
    if (VAR_3 > VAR_2->input_size) {
        FUNC_0(VAR_2->avctx, VAR_1, "Packet too short\n");
        return VAR_0;
    }

    VAR_2->input += VAR_3 * VAR_2->word_bytes;
    VAR_2->input_size -= VAR_3;
    return 0;
}
