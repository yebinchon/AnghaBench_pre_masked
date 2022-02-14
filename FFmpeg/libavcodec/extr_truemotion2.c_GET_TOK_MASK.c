
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t* tok_ptrs; size_t* tok_lens; int error; size_t** tokens; int** deltas; int avctx; } ;
typedef TYPE_1__ TM2Context ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,char*,size_t,...) ;

__attribute__((used)) static inline int FUNC_1(TM2Context *VAR_3,int VAR_4)
{
    if (VAR_3->tok_ptrs[VAR_4] >= VAR_3->tok_lens[VAR_4]) {
        FUNC_0(VAR_3->avctx, VAR_0, "Read token from stream %i out of bounds (%i>=%i)\n", VAR_4, VAR_3->tok_ptrs[VAR_4], VAR_3->tok_lens[VAR_4]);
        VAR_3->error = 1;
        return 0;
    }
    if (VAR_4 <= VAR_2) {
        if (VAR_3->tokens[VAR_4][VAR_3->tok_ptrs[VAR_4]] >= VAR_1) {
            FUNC_0(VAR_3->avctx, VAR_0, "token %d is too large\n", VAR_3->tokens[VAR_4][VAR_3->tok_ptrs[VAR_4]]);
            return 0;
        }
        return VAR_3->deltas[VAR_4][VAR_3->tokens[VAR_4][VAR_3->tok_ptrs[VAR_4]++]];
    }
    return VAR_3->tokens[VAR_4][VAR_3->tok_ptrs[VAR_4]++];
}
