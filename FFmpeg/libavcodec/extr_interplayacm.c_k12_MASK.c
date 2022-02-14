
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rows; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;


 unsigned int FUNC_0 (int *) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int,int ) ;

__attribute__((used)) static int FUNC_2(InterplayACMContext *VAR_1, unsigned VAR_2, unsigned VAR_3)
{
    GetBitContext *VAR_4 = &VAR_1->gb;
    unsigned VAR_5, VAR_6;

    for (VAR_5 = 0; VAR_5 < VAR_1->rows; VAR_5++) {
        VAR_6 = FUNC_0(VAR_4);
        if (VAR_6 == 0) {
            FUNC_1(VAR_1, VAR_5, VAR_3, 0);
            continue;
        }

        VAR_6 = FUNC_0(VAR_4);
        FUNC_1(VAR_1, VAR_5, VAR_3, VAR_0[VAR_6]);
    }
    return 0;
}
