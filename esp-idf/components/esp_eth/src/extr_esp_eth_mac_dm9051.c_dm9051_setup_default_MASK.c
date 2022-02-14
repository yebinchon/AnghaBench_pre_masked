
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ esp_err_t ;
typedef int emac_dm9051_t ;


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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (int,char*,int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_1 (int *,int ,int) ;
 int VAR_34 ;

__attribute__((used)) static esp_err_t FUNC_2(emac_dm9051_t *VAR_35)
{
    esp_err_t VAR_36 = VAR_20;

    FUNC_0(FUNC_1(VAR_35, VAR_10, 0x00) == VAR_20, "write NCR failed", VAR_34, VAR_19);
    FUNC_0(FUNC_1(VAR_35, VAR_18, 0x00) == VAR_20, "write WCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_15, 0x00) == VAR_20, "write TCR failed", VAR_34, VAR_19);


    FUNC_0(FUNC_1(VAR_35, VAR_12, VAR_29 | VAR_28) == VAR_20, "write RCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_2, 0x3F) == VAR_20, "write BPTR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_4, 0x38) == VAR_20, "write FCTR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_3, VAR_21) == VAR_20, "write FCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_16, VAR_30) == VAR_20, "write TCR2 failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_1, VAR_0) == VAR_20, "write ATCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_17, VAR_31 | VAR_32 | VAR_33) == VAR_20,
              "write TCSCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_13, 0x00) == VAR_20, "write RCSCSR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_6, 0x00) == VAR_20, "write INTCR failed", VAR_34, VAR_19);
    FUNC_0(FUNC_1(VAR_35, VAR_5, 0x00) == VAR_20, "write INTCKCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_14, 0x00) == VAR_20, "write RLENCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_8, 0x00) == VAR_20, "write MEMSCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_9, VAR_23 | VAR_24) == VAR_20,
              "write MPTRCR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_11, VAR_27 | VAR_26 | VAR_25) == VAR_20, "write NSR failed", VAR_34, VAR_19);

    FUNC_0(FUNC_1(VAR_35, VAR_7, VAR_22) == VAR_20, "write ISR failed", VAR_34, VAR_19);
    return VAR_20;
err:
    return VAR_36;
}
