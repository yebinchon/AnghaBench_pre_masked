
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsWlanProbeRspFrameHeader {int dummy; } ;
struct zsBssInfo {scalar_t__ macaddr; } ;
struct zsAdditionInfo {int dummy; } ;
struct TYPE_2__ {scalar_t__ wlanMode; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 struct zsBssInfo* FUNC_0 (int *) ;
 int FUNC_1 (int *,struct zsBssInfo*) ;
 int FUNC_2 (int *,struct zsBssInfo*) ;
 int FUNC_3 (int *,struct zsBssInfo*) ;
 int FUNC_4 (int *,int *,int *,int ,int) ;
 struct zsBssInfo* FUNC_5 (int *,int *,struct zsWlanProbeRspFrameHeader*) ;
 int FUNC_6 (int *,int *,int*) ;
 int FUNC_7 (int *,int *,struct zsWlanProbeRspFrameHeader*,struct zsBssInfo*,struct zsAdditionInfo*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(zdev_t* VAR_2, zbuf_t* VAR_3, struct zsAdditionInfo* VAR_4)
{


    struct zsWlanProbeRspFrameHeader* VAR_5;
    struct zsBssInfo* VAR_6;
    u8_t VAR_7[sizeof(struct zsWlanProbeRspFrameHeader)];
    int VAR_8;

    FUNC_10(VAR_2);

    FUNC_8();

    FUNC_4(VAR_2, VAR_3, VAR_7, 0,
                       sizeof(struct zsWlanProbeRspFrameHeader));
    VAR_5 = (struct zsWlanProbeRspFrameHeader*) VAR_7;

    FUNC_9(VAR_2);



    VAR_6 = FUNC_5(VAR_2, VAR_3, VAR_5);


    if ( VAR_6 == ((void*)0) )
    {

        VAR_6 = FUNC_0(VAR_2);
        if (VAR_6 != ((void*)0))
        {
            VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_5, VAR_6, VAR_4, 0);

            if ( VAR_8 != 0 )
            {
                FUNC_1(VAR_2, VAR_6);
            }
            else
            {
                FUNC_2(VAR_2, VAR_6);
            }
        }
    }
    else
    {
        VAR_8 = FUNC_7(VAR_2, VAR_3, VAR_5, VAR_6, VAR_4, 1);
        if (VAR_8 == 2)
        {
            FUNC_3(VAR_2, VAR_6);
            FUNC_1(VAR_2, VAR_6);
        }
        else if ( VAR_1->wlanMode == VAR_0 )
        {
            int VAR_9;


            FUNC_6(VAR_2, (u16_t *)VAR_6->macaddr, &VAR_9);
        }
    }

    FUNC_11(VAR_2);

    return;
}
