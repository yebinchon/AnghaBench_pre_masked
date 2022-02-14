
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_3__ {int * uu; } ;
typedef TYPE_1__ bt_uuid_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int,int,int,int,int,int) ;

void FUNC_4(bt_uuid_t *VAR_0, char *VAR_1)
{
    uint32_t VAR_2, VAR_3;
    uint16_t VAR_4, VAR_5, VAR_6, VAR_7;

    FUNC_0(&VAR_2, &(VAR_0->uu[0]), 4);
    FUNC_0(&VAR_4, &(VAR_0->uu[4]), 2);
    FUNC_0(&VAR_5, &(VAR_0->uu[6]), 2);
    FUNC_0(&VAR_6, &(VAR_0->uu[8]), 2);
    FUNC_0(&VAR_3, &(VAR_0->uu[10]), 4);
    FUNC_0(&VAR_7, &(VAR_0->uu[14]), 2);

    FUNC_3((char *)VAR_1, "%.8x-%.4x-%.4x-%.4x-%.8x%.4x",
            FUNC_1(VAR_2), FUNC_2(VAR_4),
            FUNC_2(VAR_5), FUNC_2(VAR_6),
            FUNC_1(VAR_3), FUNC_2(VAR_7));
    return;
}
