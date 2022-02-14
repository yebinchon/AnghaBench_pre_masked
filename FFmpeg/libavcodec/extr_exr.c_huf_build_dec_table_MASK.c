
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int len; int lit; int* p; } ;
typedef TYPE_1__ HufDec ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int* FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(const uint64_t *VAR_3, int VAR_4,
                               int VAR_5, HufDec *VAR_6)
{
    for (; VAR_4 <= VAR_5; VAR_4++) {
        uint64_t VAR_7 = VAR_3[VAR_4] >> 6;
        int VAR_8, VAR_9 = VAR_3[VAR_4] & 63;

        if (VAR_7 >> VAR_9)
            return VAR_0;

        if (VAR_9 > VAR_2) {
            HufDec *VAR_10 = VAR_6 + (VAR_7 >> (VAR_9 - VAR_2));
            if (VAR_10->len)
                return VAR_0;

            VAR_10->lit++;

            VAR_10->p = FUNC_1(VAR_10->p, VAR_10->lit * sizeof(int));
            if (!VAR_10->p)
                return FUNC_0(VAR_1);

            VAR_10->p[VAR_10->lit - 1] = VAR_4;
        } else if (VAR_9) {
            HufDec *VAR_11 = VAR_6 + (VAR_7 << (VAR_2 - VAR_9));

            for (VAR_8 = 1 << (VAR_2 - VAR_9); VAR_8 > 0; VAR_8--, VAR_11++) {
                if (VAR_11->len || VAR_11->p)
                    return VAR_0;
                VAR_11->len = VAR_9;
                VAR_11->lit = VAR_4;
            }
        }
    }

    return 0;
}
