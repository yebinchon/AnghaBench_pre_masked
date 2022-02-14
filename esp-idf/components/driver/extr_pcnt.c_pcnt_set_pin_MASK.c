
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pcnt_unit_t ;
typedef scalar_t__ pcnt_channel_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (int,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int ) ;

esp_err_t FUNC_6(pcnt_unit_t VAR_15, pcnt_channel_t VAR_16, int VAR_17, int VAR_18)
{
    FUNC_1(VAR_15 < VAR_13, VAR_12, VAR_0);
    FUNC_1(VAR_16 < VAR_6, VAR_5, VAR_0);
    FUNC_1(FUNC_0(VAR_17) || VAR_17 < 0, VAR_9, VAR_0);
    FUNC_1(FUNC_0(VAR_18) || VAR_18 < 0, VAR_9, VAR_0);

    int VAR_19 = (VAR_16 == 0) ? VAR_10 : VAR_11;
    int VAR_20 = (VAR_16 == 0) ? VAR_7 : VAR_8;
    if (VAR_15 > 4) {
        VAR_19 += 12;
        VAR_20 += 12;
    }
    int VAR_21 = VAR_19 + (4 * VAR_15);
    int VAR_22 = VAR_20 + (4 * VAR_15);

    if(VAR_17 >= 0) {
        FUNC_2(VAR_3[VAR_17], VAR_14);
        FUNC_4(VAR_17, VAR_2);
        FUNC_5(VAR_17, VAR_4);
        FUNC_3(VAR_17, VAR_21, 0);
    }
    if(VAR_18 >= 0) {
        FUNC_2(VAR_3[VAR_18], VAR_14);
        FUNC_4(VAR_18, VAR_2);
        FUNC_5(VAR_18, VAR_4);
        FUNC_3(VAR_18, VAR_22, 0);
    }
    return VAR_1;
}
