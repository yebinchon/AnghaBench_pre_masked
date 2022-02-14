
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int (* dmix_add ) (int *,int *,int,int) ;int (* dmix_scale ) (int *,int,int) ;} ;
typedef TYPE_1__ DCADSPContext ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int,int) ;
 int FUNC_5 (int *,int,int) ;
 int FUNC_6 (int *,int *,int,int) ;
 int FUNC_7 (int *,int *,int,int) ;

void FUNC_8(DCADSPContext *VAR_3, int32_t **VAR_4,
                                    int *VAR_5, int VAR_6, int VAR_7)
{
    int VAR_8, VAR_9, VAR_10 = FUNC_2(VAR_7);
    int *VAR_11 = VAR_5 + FUNC_3(VAR_7);

    FUNC_1(FUNC_0(VAR_7));


    VAR_8 = (VAR_7 & VAR_1);
    VAR_3->dmix_scale(VAR_4[VAR_0], VAR_5[VAR_8 ], VAR_6);
    VAR_3->dmix_scale(VAR_4[VAR_2], VAR_11[VAR_8 + 1], VAR_6);


    for (VAR_9 = 0; VAR_9 <= VAR_10; VAR_9++) {
        if (!(VAR_7 & (1U << VAR_9)))
            continue;

        if (*VAR_5 && VAR_9 != VAR_0)
            VAR_3->dmix_add(VAR_4[VAR_0], VAR_4[VAR_9],
                             *VAR_5, VAR_6);

        if (*VAR_11 && VAR_9 != VAR_2)
            VAR_3->dmix_add(VAR_4[VAR_2], VAR_4[VAR_9],
                             *VAR_11, VAR_6);

        VAR_5++;
        VAR_11++;
    }
}
