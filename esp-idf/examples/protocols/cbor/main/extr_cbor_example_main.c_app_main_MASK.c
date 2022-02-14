
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int buf ;
typedef int CborValue ;
typedef int CborParser ;
typedef int CborEncoder ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,double) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *,int,int ) ;
 int FUNC_12 (int *,int,int ,int *,int *) ;
 int FUNC_13 (int ,int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (char*) ;
 int VAR_1 ;

void FUNC_16(void)
{
    CborEncoder VAR_2;
    CborParser VAR_3;
    CborValue VAR_4;
    uint8_t VAR_5[100];


    FUNC_11(&VAR_2, VAR_5, sizeof(VAR_5), 0);


    CborEncoder VAR_6;
    CborEncoder VAR_7;
    FUNC_8(&VAR_2, &VAR_6, 5);

    FUNC_9(&VAR_6, &VAR_7, 3);

    FUNC_4(&VAR_7, "chip");
    FUNC_4(&VAR_7, "esp32");

    FUNC_4(&VAR_7, "unicore");
    FUNC_1(&VAR_7, 0);

    FUNC_4(&VAR_7, "ip");
    CborEncoder VAR_8;
    FUNC_8(&VAR_7, &VAR_8, 4);

    FUNC_5(&VAR_8, 192);
    FUNC_5(&VAR_8, 168);
    FUNC_5(&VAR_8, 1);
    FUNC_5(&VAR_8, 100);
    FUNC_7(&VAR_7, &VAR_8);
    FUNC_7(&VAR_6, &VAR_7);

    FUNC_2(&VAR_6, 3.14);

    FUNC_3(&VAR_6, 99);

    FUNC_4(&VAR_6, "2019-07-10 09:00:00+0000");

    FUNC_6(&VAR_6);
    FUNC_7(&VAR_2, &VAR_6);


    FUNC_0(VAR_0, "encoded buffer size %d", FUNC_10(&VAR_2, VAR_5));


    FUNC_12(VAR_5, sizeof(VAR_5), 0, &VAR_3, &VAR_4);

    FUNC_0(VAR_0, "convert CBOR to JSON");

    FUNC_13(VAR_1, &VAR_4, 0);
    FUNC_15("");

    FUNC_0(VAR_0, "decode CBOR manually");

    FUNC_14(&VAR_4, 0);
}
