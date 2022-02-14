
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int buf ;
struct TYPE_6__ {int buf; } ;
typedef TYPE_1__ PutBitContext ;
typedef int AVIOContext ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int *,int) ;
 int FUNC_3 (int*,int) ;
 int FUNC_4 (TYPE_1__*,int,int) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_6(AVIOContext *VAR_0,
                           int VAR_1, int VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
    PutBitContext VAR_7;
    uint8_t VAR_8[256];
    int VAR_9;

    FUNC_2(&VAR_7, VAR_8, sizeof(VAR_8));

    FUNC_4(&VAR_7, 1, 1);
    VAR_9 = 1;
    FUNC_3(&VAR_9, VAR_1);
    FUNC_3(&VAR_9, VAR_4);
    FUNC_4(&VAR_7, 5, VAR_9);
    FUNC_4(&VAR_7, VAR_9, VAR_1);
    FUNC_4(&VAR_7, VAR_9, VAR_4);

    FUNC_4(&VAR_7, 1, 1);
    VAR_9 = 1;
    FUNC_3(&VAR_9, VAR_3);
    FUNC_3(&VAR_9, VAR_2);
    FUNC_4(&VAR_7, 5, VAR_9);
    FUNC_4(&VAR_7, VAR_9, VAR_3);
    FUNC_4(&VAR_7, VAR_9, VAR_2);

    VAR_9 = 1;
    FUNC_3(&VAR_9, VAR_5);
    FUNC_3(&VAR_9, VAR_6);
    FUNC_4(&VAR_7, 5, VAR_9);
    FUNC_4(&VAR_7, VAR_9, VAR_5);
    FUNC_4(&VAR_7, VAR_9, VAR_6);

    FUNC_1(&VAR_7);
    FUNC_0(VAR_0, VAR_8, FUNC_5(&VAR_7) - VAR_7.buf);
}
