
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_3__ {void* encryMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_0 (int *,int,int ,void*,int *,int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_5, u8_t VAR_6, u8_t VAR_7)
{
    u16_t VAR_8[3] = {0, 0, 0};
    u32_t VAR_9[4] = {0, 0, 0, 0};

    FUNC_3(VAR_5);

    if ( VAR_6 == 0 )
    {

        FUNC_2("remove WEP key");
        FUNC_0(VAR_5, VAR_1+VAR_7, 0,
                 VAR_0, VAR_8, VAR_9);
        VAR_4->sta.encryMode = VAR_0;
    }
    else if ( VAR_6 == 1 )
    {

        FUNC_2("remove pairwise key");
        FUNC_1(VAR_5, VAR_3);
        VAR_4->sta.encryMode = VAR_0;
    }
    else
    {

        FUNC_2("remove group key");
        FUNC_1(VAR_5, VAR_2);
    }
}
