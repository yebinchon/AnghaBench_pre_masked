
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int naf ;
typedef int UINT8 ;
struct TYPE_16__ {int * p; } ;
struct TYPE_15__ {int * p; } ;
struct TYPE_14__ {int* z; int* x; int* y; } ;
typedef TYPE_1__ Point ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,scalar_t__) ;
 int FUNC_2 (int*,scalar_t__*,int *,scalar_t__) ;
 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_3 (int*,int ,int) ;
 int FUNC_4 (int*,int*,scalar_t__) ;
 int FUNC_5 (int*,scalar_t__) ;
 int FUNC_6 (int*,int*,scalar_t__) ;
 int FUNC_7 (int*,int*,int*,scalar_t__) ;
 int FUNC_8 (int*,int*,scalar_t__) ;
 int FUNC_9 (int*,int *,int*,scalar_t__) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;

void FUNC_12(Point *VAR_3, Point *VAR_4, DWORD *VAR_5, uint32_t VAR_6)
{
    uint32_t VAR_7;
    UINT8 VAR_8[256 / 4 + 1];
    uint32_t VAR_9;
    Point VAR_10;
    Point VAR_11;
    DWORD *VAR_12;

    if (VAR_6 == VAR_0) {
        VAR_12 = VAR_2;
    } else {
        VAR_12 = VAR_1.p;
    }

    FUNC_11(&VAR_11);
    FUNC_5(VAR_4->z, VAR_6);
    VAR_4->z[0] = 1;


    FUNC_11(VAR_3);


    FUNC_4(VAR_10.x, VAR_4->x, VAR_6);
    FUNC_9(VAR_10.y, VAR_12, VAR_4->y, VAR_6);

    FUNC_5(VAR_10.z, VAR_6);
    VAR_10.z[0] = 1;


    FUNC_3(VAR_8, 0, sizeof(VAR_8));
    FUNC_2(VAR_8, &VAR_9, VAR_5, VAR_6);

    for (int VAR_13 = VAR_9 - 1; VAR_13 >= 0; VAR_13--) {
        FUNC_10(&VAR_11, VAR_3);
        FUNC_1(VAR_3, &VAR_11, VAR_6);
        VAR_7 = (VAR_8[VAR_13 / 4] >> ((VAR_13 % 4) * 2)) & 0x03;

        if (VAR_7 == 1) {
            FUNC_10(&VAR_11, VAR_3);
            FUNC_0(VAR_3, &VAR_11, VAR_4, VAR_6);
        } else if (VAR_7 == 3) {
            FUNC_10(&VAR_11, VAR_3);
            FUNC_0(VAR_3, &VAR_11, &VAR_10, VAR_6);
        }
    }

    FUNC_6(VAR_10.x, VAR_3->z, VAR_6);
    FUNC_8(VAR_3->z, VAR_10.x, VAR_6);
    FUNC_7(VAR_3->x, VAR_3->x, VAR_3->z, VAR_6);
    FUNC_7(VAR_3->z, VAR_3->z, VAR_10.x, VAR_6);
    FUNC_7(VAR_3->y, VAR_3->y, VAR_3->z, VAR_6);
}
