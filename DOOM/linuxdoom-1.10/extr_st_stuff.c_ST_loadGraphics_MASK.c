
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int patch_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*,int ) ;
 int *** VAR_4 ;
 int * VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__* VAR_8 ;
 int ** VAR_9 ;
 int * VAR_10 ;
 int ** VAR_11 ;
 int FUNC_1 (char*,char*,int,...) ;
 int ** VAR_12 ;
 int * VAR_13 ;

void FUNC_2(void)
{

    int VAR_14;
    int VAR_15;
    int VAR_16;

    char VAR_17[9];


    for (VAR_14=0;VAR_14<10;VAR_14++)
    {
 FUNC_1(VAR_17, "STTNUM%d", VAR_14);
 VAR_12[VAR_14] = (patch_t *) FUNC_0(VAR_17, VAR_1);

 FUNC_1(VAR_17, "STYSNUM%d", VAR_14);
 VAR_11[VAR_14] = (patch_t *) FUNC_0(VAR_17, VAR_1);
    }



    VAR_13 = (patch_t *) FUNC_0("STTPRCNT", VAR_1);


    for (VAR_14=0;VAR_14<VAR_0;VAR_14++)
    {
 FUNC_1(VAR_17, "STKEYS%d", VAR_14);
 VAR_9[VAR_14] = (patch_t *) FUNC_0(VAR_17, VAR_1);
    }


    VAR_5 = (patch_t *) FUNC_0("STARMS", VAR_1);


    for (VAR_14=0;VAR_14<6;VAR_14++)
    {
 FUNC_1(VAR_17, "STGNUM%d", VAR_14+2);


 VAR_4[VAR_14][0] = (patch_t *) FUNC_0(VAR_17, VAR_1);


 VAR_4[VAR_14][1] = VAR_11[VAR_14+2];
    }


    FUNC_1(VAR_17, "STFB%d", VAR_6);
    VAR_7 = (patch_t *) FUNC_0(VAR_17, VAR_1);


    VAR_10 = (patch_t *) FUNC_0("STBAR", VAR_1);


    VAR_16 = 0;
    for (VAR_14=0;VAR_14<VAR_2;VAR_14++)
    {
 for (VAR_15=0;VAR_15<VAR_3;VAR_15++)
 {
     FUNC_1(VAR_17, "STFST%d%d", VAR_14, VAR_15);
     VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
 }
 FUNC_1(VAR_17, "STFTR%d0", VAR_14);
 VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
 FUNC_1(VAR_17, "STFTL%d0", VAR_14);
 VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
 FUNC_1(VAR_17, "STFOUCH%d", VAR_14);
 VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
 FUNC_1(VAR_17, "STFEVL%d", VAR_14);
 VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
 FUNC_1(VAR_17, "STFKILL%d", VAR_14);
 VAR_8[VAR_16++] = FUNC_0(VAR_17, VAR_1);
    }
    VAR_8[VAR_16++] = FUNC_0("STFGOD0", VAR_1);
    VAR_8[VAR_16++] = FUNC_0("STFDEAD0", VAR_1);

}
