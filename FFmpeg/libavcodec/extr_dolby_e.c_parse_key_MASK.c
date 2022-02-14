
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int word_bits; int * input; scalar_t__ key_present; } ;
typedef TYPE_1__ DBEContext ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_2(DBEContext *VAR_0)
{
    if (VAR_0->key_present) {
        uint8_t *VAR_1 = VAR_0->input;
        int VAR_2 = FUNC_1(VAR_0, 1);
        if (VAR_2 < 0)
            return VAR_2;
        return FUNC_0(VAR_1) >> (24 - VAR_0->word_bits);
    }
    return 0;
}
