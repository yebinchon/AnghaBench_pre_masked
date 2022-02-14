
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double re; double im; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int,int) ;
 double FUNC_2 (double) ;
 TYPE_1__* VAR_2 ;
 double FUNC_3 (double) ;

__attribute__((used)) static int FUNC_4(int VAR_3, int VAR_4)
{
    int VAR_5, VAR_6 = 1 << VAR_3;

    VAR_2 = FUNC_1((VAR_6 / 2), sizeof(*VAR_2));
    if (!VAR_2)
        return FUNC_0(VAR_0);

    for (VAR_5 = 0; VAR_5 < (VAR_6 / 2); VAR_5++) {
        double VAR_7 = 2 * VAR_1 * (float) VAR_5 / (float) VAR_6;
        double VAR_8 = FUNC_2(VAR_7), VAR_9 = FUNC_3(VAR_7);
        if (!VAR_4)
            VAR_9 = -VAR_9;
        VAR_2[VAR_5].re = VAR_8;
        VAR_2[VAR_5].im = VAR_9;
    }
    return 0;
}
