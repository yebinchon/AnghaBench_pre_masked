
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int nreslevels; } ;
struct TYPE_5__ {int quantsty; int nguardbits; int* expn; int* mant; } ;
struct TYPE_6__ {int buf_end; int buf; TYPE_1__ qntsty; TYPE_3__ codsty; } ;
typedef TYPE_1__ Jpeg2000QuantStyle ;
typedef TYPE_2__ Jpeg2000EncoderContext ;
typedef TYPE_3__ Jpeg2000CodingStyle ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int*,int) ;

__attribute__((used)) static int FUNC_2(Jpeg2000EncoderContext *VAR_2, int VAR_3)
{
    int VAR_4, VAR_5;
    Jpeg2000CodingStyle *VAR_6 = &VAR_2->codsty;
    Jpeg2000QuantStyle *VAR_7 = &VAR_2->qntsty;

    if (VAR_7->quantsty == VAR_1)
        VAR_5 = 4 + 3 * (VAR_6->nreslevels-1);
    else
        VAR_5 = 5 + 6 * (VAR_6->nreslevels-1);

    if (VAR_2->buf_end - VAR_2->buf < VAR_5 + 2)
        return -1;

    FUNC_0(&VAR_2->buf, VAR_0);
    FUNC_0(&VAR_2->buf, VAR_5);
    FUNC_1(&VAR_2->buf, (VAR_7->nguardbits << 5) | VAR_7->quantsty);
    if (VAR_7->quantsty == VAR_1)
        for (VAR_4 = 0; VAR_4 < VAR_6->nreslevels * 3 - 2; VAR_4++)
            FUNC_1(&VAR_2->buf, VAR_7->expn[VAR_4] << 3);
    else
        for (VAR_4 = 0; VAR_4 < VAR_6->nreslevels * 3 - 2; VAR_4++)
            FUNC_0(&VAR_2->buf, (VAR_7->expn[VAR_4] << 11) | VAR_7->mant[VAR_4]);
    return 0;
}
