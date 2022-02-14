
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct LZWState {scalar_t__ bbits; scalar_t__ cursize; int end_code; scalar_t__ mode; int bs; int bbuf; int curmask; int gb; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct LZWState * VAR_1)
{
    int VAR_2;

    if (VAR_1->bbits < VAR_1->cursize && FUNC_1(&VAR_1->gb) <= 0)
        return VAR_1->end_code;

    if(VAR_1->mode == VAR_0) {
        while (VAR_1->bbits < VAR_1->cursize) {
            if (!VAR_1->bs) {
                VAR_1->bs = FUNC_0(&VAR_1->gb);
            }
            VAR_1->bbuf |= FUNC_0(&VAR_1->gb) << VAR_1->bbits;
            VAR_1->bbits += 8;
            VAR_1->bs--;
        }
        VAR_2 = VAR_1->bbuf;
        VAR_1->bbuf >>= VAR_1->cursize;
    } else {
        while (VAR_1->bbits < VAR_1->cursize) {
            VAR_1->bbuf = (VAR_1->bbuf << 8) | FUNC_0(&VAR_1->gb);
            VAR_1->bbits += 8;
        }
        VAR_2 = VAR_1->bbuf >> (VAR_1->bbits - VAR_1->cursize);
    }
    VAR_1->bbits -= VAR_1->cursize;
    return VAR_2 & VAR_1->curmask;
}
