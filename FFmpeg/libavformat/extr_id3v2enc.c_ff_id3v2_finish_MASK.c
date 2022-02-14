
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ len; int size_pos; } ;
typedef TYPE_1__ ID3v2EncContext ;
typedef int AVIOContext ;


 int VAR_0 ;
 int FUNC_0 (int,int,scalar_t__) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int *,scalar_t__) ;

void FUNC_5(ID3v2EncContext *VAR_1, AVIOContext *VAR_2,
                     int VAR_3)
{
    int64_t VAR_4;

    if (VAR_3 < 0)
        VAR_3 = 10;







    VAR_3 = FUNC_0(VAR_3, 10, 268435455 - VAR_1->len);
    FUNC_3(VAR_2, 0, VAR_3);
    VAR_1->len += VAR_3;

    VAR_4 = FUNC_2(VAR_2);
    FUNC_1(VAR_2, VAR_1->size_pos, VAR_0);
    FUNC_4(VAR_2, VAR_1->len);
    FUNC_1(VAR_2, VAR_4, VAR_0);
}
