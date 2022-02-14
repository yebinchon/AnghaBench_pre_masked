
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u32_t ;
typedef int u16_t ;
struct zsKeyInfo {int flag; int keyLength; size_t keyIndex; size_t vapId; int * key; int initIv; scalar_t__ macAddr; } ;
struct TYPE_12__ {size_t encryMode; } ;
struct TYPE_13__ {scalar_t__ iv32; scalar_t__ iv16; scalar_t__ tk; } ;
struct TYPE_11__ {int ibssWpa2Psk; int* bssid; size_t encryMode; int* txiv; int* rxiv; size_t cencKeyId; int keyId; scalar_t__ wpaState; int* rxivGK; size_t** wepKey; size_t* SWEncryMode; scalar_t__ iv32; scalar_t__ iv16; int * rxMicKey; TYPE_6__* rxSeed; TYPE_2__* oppositeInfo; int txMicKey; TYPE_6__ txSeed; } ;
struct TYPE_10__ {int** txiv; int* capab; size_t* encryMode; size_t* bcKeyIndex; size_t* bcHalKeyIdx; int * bcMicKey; scalar_t__* iv32; scalar_t__* iv16; TYPE_1__* staTable; } ;
struct TYPE_14__ {int TKIP_Group_KeyChanging; TYPE_5__ ws; TYPE_4__ sta; TYPE_3__ ap; scalar_t__ macAddr; } ;
struct TYPE_9__ {int camIdx; int pkInstalled; size_t encryMode; scalar_t__ wpaState; scalar_t__ iv32; scalar_t__ iv16; } ;
struct TYPE_8__ {size_t encryMode; int* txiv; int* rxiv; size_t cencKeyIdx; int keyIdx; int rxMicKey; int txMicKey; scalar_t__ iv32; scalar_t__ iv16; } ;


 size_t VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 void* VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 TYPE_7__* VAR_21 ;
 int FUNC_0 (int *,int*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int *,scalar_t__,size_t,int *,int *,size_t) ;
 int FUNC_3 (int *,int*,size_t,int *,int *,int) ;
 int FUNC_4 (int *,size_t,size_t,int *,int *) ;
 int FUNC_5 (int *,size_t,size_t,size_t*,size_t,int *,int *) ;
 int FUNC_6 (size_t*,int *,int) ;
 int FUNC_7 (int *,int *) ;
 size_t FUNC_8 (int *,int*,size_t*) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int *,int ,int) ;
 int FUNC_11 (int *,size_t*,TYPE_6__*,int ) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

u8_t FUNC_17(zdev_t* VAR_22, struct zsKeyInfo VAR_23)
{
    u16_t VAR_24[3] = {0xffff, 0xffff, 0xffff};
    u32_t* VAR_25;
    u8_t VAR_26 = VAR_9;



    u8_t VAR_27[16];
    u16_t VAR_28 = 0;
    u8_t VAR_29, VAR_30, VAR_31[6];
    u8_t VAR_32=0;
    FUNC_15(VAR_22);


    if ( VAR_23.flag & VAR_3 )
    {

        if (VAR_23.flag & VAR_8)
        {

            if ((VAR_28 = FUNC_1(VAR_22, VAR_23.macAddr)) == 0xffff)
            {

                return VAR_10;
            }

            VAR_21->ap.staTable[VAR_28].iv16 = 0;
            VAR_21->ap.staTable[VAR_28].iv32 = 0;

            if (VAR_23.keyLength == 32)
            {
                {
                    VAR_21->ap.staTable[VAR_28].encryMode = VAR_15;

                    FUNC_6(VAR_27, &VAR_23.key[16], 8);
                    FUNC_6(&VAR_27[8], &VAR_23.key[24], 8);





                    FUNC_6((u8_t *)&(VAR_21->ap.staTable[VAR_28].txMicKey), &(VAR_23.key[16]), 8);
                    FUNC_6((u8_t *)&(VAR_21->ap.staTable[VAR_28].rxMicKey), &(VAR_23.key[24]), 8);

                }
            }
            else if (VAR_23.keyLength == 16)
            {
                VAR_21->ap.staTable[VAR_28].encryMode = VAR_0;
            }
            else if (VAR_23.keyLength == 0)
            {

                FUNC_0(VAR_22, (u16_t *)VAR_23.macAddr);

                return VAR_11;
            }
            else
            {
                return VAR_10;
            }



            FUNC_3(VAR_22, (u16_t *)VAR_23.macAddr,
                    VAR_21->ap.staTable[VAR_28].encryMode, (u32_t*) VAR_23.key,
                    (u32_t*) &VAR_23.key[16], VAR_28+1);
            VAR_21->ap.staTable[VAR_28].keyIdx = VAR_28 + 1 + 4;
        }
        else if (VAR_23.flag & VAR_6)
        {
            VAR_29 = VAR_23.vapId;

            VAR_21->ap.iv16[VAR_29] = 0;
            VAR_21->ap.iv32[VAR_29] = 0;

            if (VAR_23.keyLength == 32)
            {
                {
                    VAR_26 = VAR_15;
                    VAR_25 = (u32_t *)VAR_23.key;







                    FUNC_7(&(VAR_23.key[16]), &(VAR_21->ap.bcMicKey[0]));
                    VAR_25 = (u32_t*) VAR_23.key;
                }
            }
            else if (VAR_23.keyLength == 16)
            {
                VAR_26 = VAR_0;
                VAR_25 = (u32_t *)VAR_23.key;
                FUNC_12("CWY - Set AES Group Key");
            }
            else if (VAR_23.keyLength == 0)
            {

                FUNC_0(VAR_22, VAR_24);


                VAR_21->ap.capab[VAR_29] &= 0xffef;

                return VAR_11;
            }
            else
            {
                if (VAR_23.keyLength == 5)
                {
                    VAR_26 = VAR_20;
                }
                else if (VAR_23.keyLength == 13)
                {
                    VAR_26 = VAR_18;
                }
                else if (VAR_23.keyLength == 29)
                {
                    VAR_26 = VAR_19;
                }

                VAR_25 = (u32_t*) VAR_23.key;
            }





            FUNC_2(VAR_22, VAR_21->macAddr, VAR_26,
                    VAR_25, (u32_t*) &VAR_23.key[16], VAR_29);


            VAR_21->ws.encryMode = VAR_26;


            VAR_21->ap.encryMode[VAR_29] = VAR_26;


            VAR_21->ap.bcKeyIndex[VAR_29] = VAR_23.keyIndex;
            VAR_21->ap.bcHalKeyIdx[VAR_29] = VAR_29 + 60;


            VAR_21->ap.capab[VAR_29] |= 0x10;
        }
    }
    else
    {

        if ( VAR_23.flag & VAR_8 )
        {
            VAR_21->sta.iv16 = 0;
            VAR_21->sta.iv32 = 0;

            VAR_21->sta.oppositeInfo[VAR_32].pkInstalled = 1;


            if ( VAR_23.keyLength == 32 )
            {
                FUNC_11(VAR_23.key, (u8_t*) VAR_21->macAddr,
                        &VAR_21->sta.txSeed, VAR_23.initIv);
                FUNC_11(VAR_23.key, (u8_t*) VAR_21->sta.bssid,
                        &VAR_21->sta.rxSeed[VAR_23.keyIndex], VAR_23.initIv);
                {
                    VAR_21->sta.encryMode = VAR_15;




                    FUNC_7(&VAR_23.key[16], &VAR_21->sta.txMicKey);
                    FUNC_7(&VAR_23.key[24],
                                &VAR_21->sta.rxMicKey[VAR_23.keyIndex]);
                }
            }
            else if ( VAR_23.keyLength == 16 )
            {
                VAR_21->sta.encryMode = VAR_0;

            }
            else
            {
                return VAR_10;
            }
            for (VAR_30 = 0; VAR_30 < 3; VAR_30++)
            {
                VAR_31[2 * VAR_30] = VAR_21->sta.bssid[VAR_30] & 0xff;
                VAR_31[2 * VAR_30 + 1] = VAR_21->sta.bssid[VAR_30] >> 8;
            }
            FUNC_5(VAR_22,
                              VAR_17,
                              0,
                              VAR_31,
                              VAR_21->sta.encryMode,
                              (u32_t*) VAR_23.key, (u32_t*) &VAR_23.key[16]);

            VAR_21->sta.keyId = 4;


            VAR_21->sta.wpaState = VAR_14;
        }
        else if ( VAR_23.flag & VAR_6 )
        {

            FUNC_11(VAR_23.key, (u8_t*) VAR_21->sta.bssid,
                       &VAR_21->sta.rxSeed[VAR_23.keyIndex], VAR_23.initIv);

            if ( VAR_23.keyLength == 32 )
            {
                {
                    VAR_26 = VAR_15;
                    VAR_25 = (u32_t*) VAR_21->sta.rxSeed[VAR_23.keyIndex].tk;

                    if ( !(VAR_23.flag & VAR_7) )
                    {
                        VAR_21->sta.rxSeed[VAR_23.keyIndex].iv16 = 0;
                        VAR_21->sta.rxSeed[VAR_23.keyIndex].iv32 = 0;
                    }





                    FUNC_7(&VAR_23.key[24],
                                &VAR_21->sta.rxMicKey[VAR_23.keyIndex]);
                }
            }
            else if ( VAR_23.keyLength == 16 )
            {
                VAR_26 = VAR_0;

            }
            else
            {
                if ( VAR_23.keyLength == 5 )
                {
                    VAR_26 = VAR_20;
                }
                else if ( VAR_23.keyLength == 13 )
                {
                    VAR_26 = VAR_18;
                }
                else if ( VAR_23.keyLength == 29 )
                {
                    VAR_26 = VAR_19;
                }

                VAR_25 = (u32_t*) VAR_23.key;
            }
            FUNC_5(VAR_22,
                              VAR_16,
                              0,
                              (u8_t *)VAR_24,
                              VAR_26,
                              (u32_t*) VAR_23.key, (u32_t*) &VAR_23.key[16]);

            VAR_21->sta.wpaState = VAR_12;

        }
        else
        {
            FUNC_12("legacy WEP");

            if ( VAR_23.keyIndex >= 4 )
            {
                return VAR_10;
            }

            if ( VAR_23.keyLength == 5 )
            {
                FUNC_12("WEP 64");

                VAR_26 = VAR_20;
            }
            else if ( VAR_23.keyLength == 13 )
            {
                FUNC_12("WEP 128");

                VAR_26 = VAR_18;
            }
            else if ( VAR_23.keyLength == 32 )
            {
                VAR_26 = VAR_15;

                FUNC_11(VAR_23.key, (u8_t*) VAR_21->sta.bssid,
                           &VAR_21->sta.rxSeed[VAR_23.keyIndex], VAR_23.initIv);
                FUNC_7(&VAR_23.key[24],
                           &VAR_21->sta.rxMicKey[VAR_23.keyIndex]);
            }
            else if ( VAR_23.keyLength == 16 )
            {
                VAR_26 = VAR_0;
            }
            else if ( VAR_23.keyLength == 29 )
            {
                FUNC_12("WEP 256");

                VAR_26 = VAR_19;


            }
            else
            {
                return VAR_10;
            }

            {
                u8_t VAR_33;

                FUNC_12("key = ");
                for(VAR_33 = 0; VAR_33 < VAR_23.keyLength; VAR_33++)
                {
                    FUNC_13("", VAR_23.key[VAR_33]);
                }
            }

            if ( VAR_23.flag & VAR_5 )
            {

                VAR_29 = 0;
                VAR_21->ap.bcHalKeyIdx[VAR_29] = VAR_23.keyIndex;
                VAR_21->ap.bcKeyIndex[VAR_29] = VAR_23.keyIndex;
                VAR_21->sta.keyId = VAR_23.keyIndex;
            }

   if(VAR_26 == VAR_15)
   {
    if(VAR_21->TKIP_Group_KeyChanging == 0x1)
    {
     FUNC_12("Countermeasure : Cancel Old Timer ");
     FUNC_9(VAR_22, VAR_2);
    }
    else
    {
     FUNC_12("Countermeasure : Create New Timer ");
    }

    VAR_21->TKIP_Group_KeyChanging = 0x1;
    FUNC_10(VAR_22, VAR_2, 150);
   }
            if ( VAR_26 == VAR_15 ||
                 VAR_26 == VAR_0 )
            {
                FUNC_4(VAR_22, VAR_23.keyIndex, VAR_26,
                                 (u32_t*) VAR_23.key, (u32_t*) &VAR_23.key[16]);
                if (VAR_21->sta.wpaState == VAR_14)
                    VAR_21->sta.wpaState = VAR_12;
                else if ( VAR_21->sta.wpaState == VAR_13 )
                {
                    VAR_21->sta.wpaState = VAR_14;
                    VAR_21->sta.encryMode = VAR_26;
                    VAR_21->ws.encryMode = VAR_26;
                }

            }
            else
            {
                FUNC_4(VAR_22, VAR_23.keyIndex, VAR_26,
                               (u32_t*) VAR_23.key, ((void*)0));


                FUNC_6(VAR_21->sta.wepKey[VAR_23.keyIndex], VAR_23.key,
                        VAR_23.keyLength);


                VAR_21->sta.SWEncryMode[VAR_23.keyIndex] = VAR_26;

                VAR_21->sta.encryMode = VAR_26;
                VAR_21->ws.encryMode = VAR_26;
            }
        }
    }


    return VAR_11;
}
