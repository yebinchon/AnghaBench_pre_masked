
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
struct TYPE_3__ {struct TYPE_3__* next; } ;
typedef TYPE_1__ AVOutputFormat ;
typedef TYPE_2__ AVInputFormat ;


 int VAR_0 ;
 scalar_t__* VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__* VAR_2 ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;

__attribute__((used)) static void FUNC_2(void)
{
    AVOutputFormat *VAR_5 = ((void*)0), *VAR_6;
    AVInputFormat *VAR_7 = ((void*)0), *VAR_8;

    FUNC_0(&VAR_0);

    for (int VAR_9 = 0; (VAR_6 = (AVOutputFormat*)VAR_3[VAR_9]); VAR_9++) {
        if (VAR_5)
            VAR_5->next = VAR_6;
        VAR_5 = VAR_6;
    }

    if (VAR_4) {
        for (int VAR_10 = 0; (VAR_6 = (AVOutputFormat*)VAR_4[VAR_10]); VAR_10++) {
            if (VAR_5)
                VAR_5->next = VAR_6;
            VAR_5 = VAR_6;
        }
    }

    for (int VAR_11 = 0; (VAR_8 = (AVInputFormat*)VAR_1[VAR_11]); VAR_11++) {
        if (VAR_7)
            VAR_7->next = VAR_8;
        VAR_7 = VAR_8;
    }

    if (VAR_2) {
        for (int VAR_12 = 0; (VAR_8 = (AVInputFormat*)VAR_2[VAR_12]); VAR_12++) {
            if (VAR_7)
                VAR_7->next = VAR_8;
            VAR_7 = VAR_8;
        }
    }

    FUNC_1(&VAR_0);
}
