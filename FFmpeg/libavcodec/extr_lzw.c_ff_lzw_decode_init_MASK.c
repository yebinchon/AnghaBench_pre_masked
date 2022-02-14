
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct LZWState {int codesize; int cursize; int top_slot; int clear_code; int end_code; int slot; int newcodes; int oc; int fc; int mode; int extra_slot; int stack; int sp; int curmask; scalar_t__ bs; scalar_t__ bbits; scalar_t__ bbuf; int gb; } ;
typedef int LZWState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int const*,int) ;
 int * VAR_2 ;

int FUNC_1(LZWState *VAR_3, int VAR_4, const uint8_t *VAR_5, int VAR_6, int VAR_7)
{
    struct LZWState *VAR_8 = (struct LZWState *)VAR_3;

    if(VAR_4 < 1 || VAR_4 >= VAR_1)
        return -1;

    FUNC_0(&VAR_8->gb, VAR_5, VAR_6);
    VAR_8->bbuf = 0;
    VAR_8->bbits = 0;
    VAR_8->bs = 0;


    VAR_8->codesize = VAR_4;
    VAR_8->cursize = VAR_8->codesize + 1;
    VAR_8->curmask = VAR_2[VAR_8->cursize];
    VAR_8->top_slot = 1 << VAR_8->cursize;
    VAR_8->clear_code = 1 << VAR_8->codesize;
    VAR_8->end_code = VAR_8->clear_code + 1;
    VAR_8->slot = VAR_8->newcodes = VAR_8->clear_code + 2;
    VAR_8->oc = VAR_8->fc = -1;
    VAR_8->sp = VAR_8->stack;

    VAR_8->mode = VAR_7;
    VAR_8->extra_slot = VAR_8->mode == VAR_0;
    return 0;
}
