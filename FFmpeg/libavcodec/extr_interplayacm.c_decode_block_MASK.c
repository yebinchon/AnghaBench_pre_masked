
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* midbuf; int gb; } ;
typedef TYPE_1__ InterplayACMContext ;
typedef int GetBitContext ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(InterplayACMContext *VAR_0)
{
    GetBitContext *VAR_1 = &VAR_0->gb;
    int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;

    VAR_2 = FUNC_1(VAR_1, 4);
    VAR_4 = FUNC_1(VAR_1, 16);

    VAR_3 = 1 << VAR_2;

    for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_3; VAR_5++) {
        VAR_0->midbuf[VAR_5] = VAR_6;
        VAR_6 += VAR_4;
    }

    for (VAR_5 = 1, VAR_6 = -VAR_4; VAR_5 <= VAR_3; VAR_5++) {
        VAR_0->midbuf[-VAR_5] = VAR_6;
        VAR_6 -= (unsigned)VAR_4;
    }

    VAR_7 = FUNC_0(VAR_0);
    if (VAR_7 < 0)
        return VAR_7;

    FUNC_2(VAR_0);

    return 0;
}
