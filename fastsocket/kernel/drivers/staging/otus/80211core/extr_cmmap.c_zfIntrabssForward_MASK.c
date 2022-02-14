
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int zdev_t ;
typedef int zbuf_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 (int *,int*,int*,scalar_t__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,int *,scalar_t__) ;
 int FUNC_5 (int *,int *,scalar_t__,int ,int ) ;
 int * FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,int *,int) ;
 int FUNC_12 (int *,int *,int,int) ;

u16_t FUNC_13(zdev_t* VAR_10, zbuf_t* VAR_11, u8_t VAR_12)
{
    u16_t VAR_13;
    u16_t VAR_14 = 0;
    u16_t VAR_15[3];
    u16_t VAR_16;
    u16_t VAR_17;
    zbuf_t* VAR_18;
    u16_t VAR_19;
    u16_t VAR_20;
    u16_t VAR_21;
    u16_t VAR_22;
    u8_t VAR_23 = 0;





    VAR_15[0] = FUNC_11(VAR_10, VAR_11, 0);
    VAR_15[1] = FUNC_11(VAR_10, VAR_11, 2);
    VAR_15[2] = FUNC_11(VAR_10, VAR_11, 4);



    if ((VAR_15[0]&0x1) != 0x1)
    {
        VAR_16 = FUNC_1(VAR_10, VAR_15, &VAR_17, &VAR_23);
        if ((VAR_16 != 0xffff) && (VAR_17 == VAR_6) && (VAR_12 == VAR_23))
        {
            VAR_14 = 1;
            FUNC_10(VAR_3, "Intra-BSS forward : asoc STA");
        }

    }
    else
    {
        VAR_23 = VAR_12;
        FUNC_10(VAR_3, "Intra-BSS forward : BCorMC");
    }


    if ((VAR_14 == 1) || ((VAR_15[0]&0x1) == 0x1))
    {

        if ((VAR_18 = FUNC_6(VAR_10, VAR_5))
                == ((void*)0))
        {
            FUNC_10(VAR_2, "Alloc intra-bss buf Fail!");
            goto zlAllocError;
        }


        VAR_19 = FUNC_8(VAR_10, VAR_11);
        for (VAR_20=0; VAR_20<VAR_19; VAR_20+=2)
        {
            VAR_21 = FUNC_11(VAR_10, VAR_11, VAR_20);
            FUNC_12(VAR_10, VAR_18, VAR_20, VAR_21);
        }
        FUNC_9(VAR_10, VAR_18, VAR_19);
        if ((VAR_13 = FUNC_4(VAR_10, VAR_18, VAR_23)) == VAR_4)
        {
            VAR_13 = VAR_0;
            goto zlTxError;
        }



        if ((VAR_22 = FUNC_0(VAR_10, VAR_18, VAR_23)) == 0)
        {



            VAR_22 = FUNC_3(VAR_10, VAR_18);

            FUNC_2(VAR_10);




        }

    }
    return VAR_14;

zlTxError:
    FUNC_7(VAR_10, VAR_18, 0);
zlAllocError:
    return VAR_14;
}
