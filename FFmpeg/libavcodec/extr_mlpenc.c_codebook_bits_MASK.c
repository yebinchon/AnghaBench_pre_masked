
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_8__ {int bitcount; int max; int min; } ;
struct TYPE_7__ {int max_codebook_search; } ;
typedef TYPE_1__ MLPEncodeContext ;
typedef TYPE_2__ BestOffset ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*,unsigned int,int,int ,int ,int,TYPE_2__*) ;

__attribute__((used)) static inline void FUNC_3(MLPEncodeContext *VAR_3,
                                 unsigned int VAR_4, int VAR_5,
                                 int VAR_6, int32_t VAR_7, int32_t VAR_8,
                                 BestOffset *VAR_9, int VAR_10)
{
    int VAR_11 = VAR_2;
    int VAR_12, VAR_13;
    int VAR_14 = 0;

    VAR_12 = FUNC_0(VAR_7, VAR_1);
    VAR_13 = FUNC_1(VAR_8, VAR_0);

    for (;;) {
        BestOffset VAR_15;

        FUNC_2(VAR_3, VAR_4, VAR_5,
                             VAR_7, VAR_8, VAR_6,
                             &VAR_15);

        if (VAR_15.bitcount < VAR_11) {
            if (VAR_15.bitcount < VAR_9->bitcount)
                *VAR_9 = VAR_15;

            VAR_14 = 0;
        } else if (++VAR_14 >= VAR_3->max_codebook_search)
            break;

        VAR_11 = VAR_15.bitcount;

        if (VAR_10) {
            VAR_6 = VAR_15.max + 1;
            if (VAR_6 > VAR_13)
                break;
        } else {
            VAR_6 = VAR_15.min - 1;
            if (VAR_6 < VAR_12)
                break;
        }
    }
}
