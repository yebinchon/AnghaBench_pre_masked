
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct LZWState {int end_code; int oc; int fc; int clear_code; size_t cursize; size_t codesize; int slot; int newcodes; int top_slot; int* suffix; int* prefix; size_t extra_slot; int * sp; void* curmask; int * stack; } ;
typedef int LZWState ;


 int VAR_0 ;
 int FUNC_0 (struct LZWState*) ;
 void** VAR_1 ;

int FUNC_1(LZWState *VAR_2, uint8_t *VAR_3, int VAR_4){
    int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    uint8_t *VAR_10;
    struct LZWState *VAR_11 = (struct LZWState *)VAR_2;

    if (VAR_11->end_code < 0)
        return 0;

    VAR_5 = VAR_4;
    VAR_10 = VAR_11->sp;
    VAR_8 = VAR_11->oc;
    VAR_9 = VAR_11->fc;

    for (;;) {
        while (VAR_10 > VAR_11->stack) {
            *VAR_3++ = *(--VAR_10);
            if ((--VAR_5) == 0)
                goto the_end;
        }
        VAR_6 = FUNC_0(VAR_11);
        if (VAR_6 == VAR_11->end_code) {
            break;
        } else if (VAR_6 == VAR_11->clear_code) {
            VAR_11->cursize = VAR_11->codesize + 1;
            VAR_11->curmask = VAR_1[VAR_11->cursize];
            VAR_11->slot = VAR_11->newcodes;
            VAR_11->top_slot = 1 << VAR_11->cursize;
            VAR_9= VAR_8= -1;
        } else {
            VAR_7 = VAR_6;
            if (VAR_7 == VAR_11->slot && VAR_9>=0) {
                *VAR_10++ = VAR_9;
                VAR_7 = VAR_8;
            }else if(VAR_7 >= VAR_11->slot)
                break;
            while (VAR_7 >= VAR_11->newcodes) {
                *VAR_10++ = VAR_11->suffix[VAR_7];
                VAR_7 = VAR_11->prefix[VAR_7];
            }
            *VAR_10++ = VAR_7;
            if (VAR_11->slot < VAR_11->top_slot && VAR_8>=0) {
                VAR_11->suffix[VAR_11->slot] = VAR_7;
                VAR_11->prefix[VAR_11->slot++] = VAR_8;
            }
            VAR_9 = VAR_7;
            VAR_8 = VAR_6;
            if (VAR_11->slot >= VAR_11->top_slot - VAR_11->extra_slot) {
                if (VAR_11->cursize < VAR_0) {
                    VAR_11->top_slot <<= 1;
                    VAR_11->curmask = VAR_1[++VAR_11->cursize];
                }
            }
        }
    }
    VAR_11->end_code = -1;
  the_end:
    VAR_11->sp = VAR_10;
    VAR_11->oc = VAR_8;
    VAR_11->fc = VAR_9;
    return VAR_4 - VAR_5;
}
