
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
struct TYPE_3__ {int defaultTA; int htCtrlSG; int htCtrlSTBC; int htCtrlBandwidth; int preambleTypeHT; } ;
struct TYPE_4__ {int forceTxTPC; int enableWDS; int enableAggregation; TYPE_1__ sta; int preambleType; } ;


 TYPE_2__* VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t *VAR_1, u32_t *VAR_2, u32_t *VAR_3)
{
 FUNC_0(VAR_1);

 VAR_2[0] = VAR_0->preambleType;
 VAR_2[1] = VAR_0->sta.preambleTypeHT;
 VAR_2[2] = VAR_0->sta.htCtrlBandwidth;
 VAR_2[3] = VAR_0->sta.htCtrlSTBC;
 VAR_2[4] = VAR_0->sta.htCtrlSG;
 VAR_2[5] = VAR_0->sta.defaultTA;
 VAR_2[6] = VAR_0->enableAggregation;
 VAR_2[7] = VAR_0->enableWDS;

 *VAR_3 = VAR_0->forceTxTPC;
}
