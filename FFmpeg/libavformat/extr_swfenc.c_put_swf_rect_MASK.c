
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
                         int VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    PutBitContext VAR_5;
    uint8_t VAR_6[256];
    int VAR_7, VAR_8;

    FUNC_2(&VAR_5, VAR_6, sizeof(VAR_6));

    VAR_7 = 0;
    FUNC_3(&VAR_7, VAR_1);
    FUNC_3(&VAR_7, VAR_2);
    FUNC_3(&VAR_7, VAR_3);
    FUNC_3(&VAR_7, VAR_4);
    VAR_8 = (1 << VAR_7) - 1;


    FUNC_4(&VAR_5, 5, VAR_7);
    FUNC_4(&VAR_5, VAR_7, VAR_1 & VAR_8);
    FUNC_4(&VAR_5, VAR_7, VAR_2 & VAR_8);
    FUNC_4(&VAR_5, VAR_7, VAR_3 & VAR_8);
    FUNC_4(&VAR_5, VAR_7, VAR_4 & VAR_8);

    FUNC_1(&VAR_5);
    FUNC_0(VAR_0, VAR_6, FUNC_5(&VAR_5) - VAR_5.buf);
}
