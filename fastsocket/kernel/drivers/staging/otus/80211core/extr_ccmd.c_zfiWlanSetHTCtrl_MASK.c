
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef void* u8_t ;
typedef scalar_t__ u32_t ;
struct TYPE_3__ {void* defaultTA; void* htCtrlSG; void* htCtrlSTBC; void* htCtrlBandwidth; void* preambleTypeHT; } ;
struct TYPE_4__ {scalar_t__ forceTxTPC; void* enableWDS; void* enableAggregation; TYPE_1__ sta; void* preambleType; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t *VAR_1, u32_t *VAR_2, u32_t VAR_3)
{
 FUNC_0(VAR_1);

 VAR_0->preambleType = (u8_t)VAR_2[0];
 VAR_0->sta.preambleTypeHT = (u8_t)VAR_2[1];
 VAR_0->sta.htCtrlBandwidth = (u8_t)VAR_2[2];
 VAR_0->sta.htCtrlSTBC = (u8_t)VAR_2[3];
 VAR_0->sta.htCtrlSG = (u8_t)VAR_2[4];
 VAR_0->sta.defaultTA = (u8_t)VAR_2[5];
 VAR_0->enableAggregation = (u8_t)VAR_2[6];
 VAR_0->enableWDS = (u8_t)VAR_2[7];

 VAR_0->forceTxTPC = VAR_3;
}
