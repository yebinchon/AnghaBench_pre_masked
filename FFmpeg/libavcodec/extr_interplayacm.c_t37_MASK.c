
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int rows; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*,unsigned int) ;
 unsigned int FUNC_1 (int *,int) ;
 int* VAR_2 ;
 int FUNC_2 (TYPE_1__*,unsigned int,unsigned int,int) ;

__attribute__((used)) static int FUNC_3(InterplayACMContext *VAR_3, unsigned VAR_4, unsigned VAR_5)
{
    GetBitContext *VAR_6 = &VAR_3->gb;
    unsigned VAR_7, VAR_8;
    int VAR_9, VAR_10;
    for (VAR_7 = 0; VAR_7 < VAR_3->rows; VAR_7++) {

        VAR_8 = FUNC_1(VAR_6, 7);
        if (VAR_8 > 120) {
            FUNC_0(((void*)0), VAR_1, "Too large b = %d > 120\n", VAR_8);
            return VAR_0;
        }

        VAR_9 = (VAR_2[VAR_8] & 0x0F) - 5;
        VAR_10 = ((VAR_2[VAR_8] >> 4) & 0x0F) - 5;

        FUNC_2(VAR_3, VAR_7++, VAR_5, VAR_9);
        if (VAR_7 >= VAR_3->rows)
            break;
        FUNC_2(VAR_3, VAR_7, VAR_5, VAR_10);
    }
    return 0;
}
