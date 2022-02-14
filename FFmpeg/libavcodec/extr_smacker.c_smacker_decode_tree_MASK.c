
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {size_t current; size_t length; int* bits; int* lengths; int maxlength; int * values; } ;
typedef TYPE_1__ HuffContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(GetBitContext *VAR_4, HuffContext *VAR_5, uint32_t VAR_6, int VAR_7)
{
    if (VAR_7 > VAR_3 || VAR_7 > 3 * VAR_2) {
        FUNC_0(((void*)0), VAR_1, "Maximum tree recursion level exceeded.\n");
        return VAR_0;
    }

    if(!FUNC_2(VAR_4)){
        if(VAR_5->current >= VAR_5->length){
            FUNC_0(((void*)0), VAR_1, "Tree size exceeded!\n");
            return VAR_0;
        }
        if(VAR_7){
            VAR_5->bits[VAR_5->current] = VAR_6;
            VAR_5->lengths[VAR_5->current] = VAR_7;
        } else {
            VAR_5->bits[VAR_5->current] = 0;
            VAR_5->lengths[VAR_5->current] = 0;
        }
        VAR_5->values[VAR_5->current] = FUNC_1(VAR_4, 8);
        VAR_5->current++;
        if(VAR_5->maxlength < VAR_7)
            VAR_5->maxlength = VAR_7;
        return 0;
    } else {
        int VAR_8;
        VAR_7++;
        VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6, VAR_7);
        if(VAR_8)
            return VAR_8;
        return FUNC_3(VAR_4, VAR_5, VAR_6 | (1 << (VAR_7 - 1)), VAR_7);
    }
}
