
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rows; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;


 int FUNC_0 (int *,unsigned int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_2(InterplayACMContext *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
    GetBitContext *VAR_3 = &VAR_0->gb;
    unsigned int VAR_4;
    int VAR_5, VAR_6 = 1 << (VAR_1 - 1);

    for (VAR_4 = 0; VAR_4 < VAR_0->rows; VAR_4++) {
        VAR_5 = FUNC_0(VAR_3, VAR_1);
        FUNC_1(VAR_0, VAR_4, VAR_2, VAR_5 - VAR_6);
    }
    return 0;
}
