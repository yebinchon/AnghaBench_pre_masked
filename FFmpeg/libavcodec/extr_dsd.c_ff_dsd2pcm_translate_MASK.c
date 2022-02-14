
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef int ptrdiff_t ;
typedef int buf ;
struct TYPE_3__ {unsigned int pos; size_t* buf; } ;
typedef TYPE_1__ DSDContext ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 size_t const* VAR_4 ;
 int FUNC_0 (size_t*,size_t*,int) ;

void FUNC_1(DSDContext* VAR_5, size_t VAR_6, int VAR_7,
                          const uint8_t *VAR_8, ptrdiff_t VAR_9,
                          float *VAR_10, ptrdiff_t VAR_11)
{
    uint8_t VAR_12[VAR_2];
    unsigned VAR_13, VAR_14;
    uint8_t* VAR_15;
    double VAR_16;

    VAR_13 = VAR_5->pos;

    FUNC_0(VAR_12, VAR_5->buf, sizeof(VAR_12));

    while (VAR_6-- > 0) {
        VAR_12[VAR_13] = VAR_7 ? VAR_4[*VAR_8] : *VAR_8;
        VAR_8 += VAR_9;

        VAR_15 = VAR_12 + ((VAR_13 - VAR_0) & VAR_1);
        *VAR_15 = VAR_4[*VAR_15];

        VAR_16 = 0.0;
        for (VAR_14 = 0; VAR_14 < VAR_0; VAR_14++) {
            uint8_t VAR_17 = VAR_12[(VAR_13 - VAR_14) & VAR_1];
            uint8_t VAR_18 = VAR_12[(VAR_13 - (VAR_0*2 - 1) + VAR_14) & VAR_1];
            VAR_16 += VAR_3[VAR_14][VAR_17] + VAR_3[VAR_14][VAR_18];
        }

        *VAR_10 = (float)VAR_16;
        VAR_10 += VAR_11;

        VAR_13 = (VAR_13 + 1) & VAR_1;
    }

    VAR_5->pos = VAR_13;
    FUNC_0(VAR_5->buf, VAR_12, sizeof(VAR_12));
}
