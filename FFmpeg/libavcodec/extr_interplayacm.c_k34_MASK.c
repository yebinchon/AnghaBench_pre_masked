
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rows; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;


 unsigned int FUNC_0 (int *,int) ;
 unsigned int FUNC_1 (int *) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_2 (TYPE_1__*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_3(InterplayACMContext *VAR_2, unsigned VAR_3, unsigned VAR_4)
{
    GetBitContext *VAR_5 = &VAR_2->gb;
    unsigned VAR_6, VAR_7;

    for (VAR_6 = 0; VAR_6 < VAR_2->rows; VAR_6++) {
        VAR_7 = FUNC_1(VAR_5);
        if (VAR_7 == 0) {
            FUNC_2(VAR_2, VAR_6, VAR_4, 0);
            continue;
        }

        VAR_7 = FUNC_1(VAR_5);
        if (VAR_7 == 0) {
            VAR_7 = FUNC_1(VAR_5);
            FUNC_2(VAR_2, VAR_6, VAR_4, VAR_0[VAR_7]);
            continue;
        }

        VAR_7 = FUNC_0(VAR_5, 2);
        FUNC_2(VAR_2, VAR_6, VAR_4, VAR_1[VAR_7]);
    }
    return 0;
}
