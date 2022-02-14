
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_9__ {int * z; int * y; int * x; } ;
typedef TYPE_1__ Point ;
typedef int DWORD ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int *,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_8(Point *VAR_1, Point *VAR_2, Point *VAR_3, uint32_t VAR_4)
{
    DWORD VAR_5[VAR_0];
    DWORD VAR_6[VAR_0];
    DWORD *VAR_7;
    DWORD *VAR_8;
    DWORD *VAR_9;
    DWORD *VAR_10;
    DWORD *VAR_11;
    DWORD *VAR_12;
    DWORD *VAR_13;
    DWORD *VAR_14;
    DWORD *VAR_15;

    VAR_7 = VAR_2->x; VAR_10 = VAR_2->y; VAR_13 = VAR_2->z;
    VAR_8 = VAR_3->x; VAR_11 = VAR_3->y; VAR_14 = VAR_3->z;
    VAR_9 = VAR_1->x; VAR_12 = VAR_1->y; VAR_15 = VAR_1->z;


    if (FUNC_2(VAR_14, VAR_4)) {
        FUNC_7(VAR_1, VAR_2);
        return;
    }


    if (FUNC_2(VAR_13, VAR_4)) {
        FUNC_7(VAR_1, VAR_3);
        return;
    }

    FUNC_5(VAR_5, VAR_13, VAR_4);
    FUNC_4(VAR_6, VAR_13, VAR_5, VAR_4);
    FUNC_4(VAR_5, VAR_8, VAR_5, VAR_4);
    FUNC_4(VAR_6, VAR_11, VAR_6, VAR_4);

    FUNC_6(VAR_5, VAR_5, VAR_7, VAR_4);
    FUNC_6(VAR_6, VAR_6, VAR_10, VAR_4);

    if (FUNC_2(VAR_5, VAR_4)) {
        if (FUNC_2(VAR_6, VAR_4)) {
            FUNC_0(VAR_1, VAR_3, VAR_4) ;
            return;
        } else {
            FUNC_1(VAR_15, VAR_4);
            return;
        }
    }

    FUNC_4(VAR_15, VAR_13, VAR_5, VAR_4);
    FUNC_5(VAR_12, VAR_5, VAR_4);
    FUNC_4(VAR_13, VAR_12, VAR_5, VAR_4);
    FUNC_4(VAR_12, VAR_12, VAR_7, VAR_4);
    FUNC_3(VAR_5, VAR_12, VAR_4);
    FUNC_5(VAR_9, VAR_6, VAR_4);
    FUNC_6(VAR_9, VAR_9, VAR_5, VAR_4);
    FUNC_6(VAR_9, VAR_9, VAR_13, VAR_4);
    FUNC_6(VAR_12, VAR_12, VAR_9, VAR_4);
    FUNC_4(VAR_12, VAR_12, VAR_6, VAR_4);
    FUNC_4(VAR_13, VAR_13, VAR_10, VAR_4);
    FUNC_6(VAR_12, VAR_12, VAR_13, VAR_4);
}
