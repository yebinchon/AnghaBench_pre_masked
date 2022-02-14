
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct zd_ioreq16 {int value; int addr; } ;
struct zd_chip {int ** ofdm_cal_values; } ;


 int FUNC_0 (struct zd_ioreq16*) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct zd_chip*,struct zd_ioreq16*,int ) ;

__attribute__((used)) static int FUNC_2(struct zd_chip *VAR_6, u8 VAR_7)
{
 struct zd_ioreq16 VAR_8[3];

 VAR_8[0].addr = VAR_5;
 VAR_8[0].value = VAR_6->ofdm_cal_values[VAR_0][VAR_7-1];
 VAR_8[1].addr = VAR_4;
 VAR_8[1].value = VAR_6->ofdm_cal_values[VAR_1][VAR_7-1];
 VAR_8[2].addr = VAR_3;
 VAR_8[2].value = VAR_6->ofdm_cal_values[VAR_2][VAR_7-1];

 return FUNC_1(VAR_6, VAR_8, FUNC_0(VAR_8));
}
