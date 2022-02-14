
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_3__* pMWAVE_DEVICE_DATA ;
typedef int irqreturn_t ;
struct TYPE_9__ {unsigned short usDspBaseIO; } ;
struct TYPE_6__ {TYPE_4__ rDspSettings; } ;
struct TYPE_8__ {TYPE_2__* IPCs; TYPE_1__ rBDData; } ;
struct TYPE_7__ {int usIntCount; scalar_t__ bIsEnabled; int ipc_wait_queue; } ;
typedef TYPE_4__ DSP_3780I_CONFIG_SETTINGS ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,unsigned short) ;
 int FUNC_2 (int ,char*,unsigned short,unsigned short) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (unsigned short,unsigned short*) ;
 TYPE_3__ VAR_3 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_5(int VAR_4, void *VAR_5)
{
 pMWAVE_DEVICE_DATA VAR_6 = &VAR_3;
 DSP_3780I_CONFIG_SETTINGS *VAR_7 = &VAR_6->rBDData.rDspSettings;
 unsigned short VAR_8 = VAR_7->usDspBaseIO;
 unsigned short VAR_9 = 0, VAR_10, VAR_11;

 FUNC_2(VAR_1,
  "tp3780i::DspInterrupt entry irq %x dev_id %p\n", VAR_4, VAR_5);

 if (FUNC_3(VAR_8, &VAR_9) == 0) {
  FUNC_1(VAR_1,
   "tp3780i::DspInterrupt, return from dsp3780i_GetIPCSource, usIPCSource %x\n",
   VAR_9);
  VAR_10 = 1;
  for (VAR_11 = 1; VAR_11 <= 16; VAR_11++) {
   if (VAR_9 & VAR_10) {
    VAR_9 &= ~VAR_10;
    FUNC_2(VAR_1,
     "tp3780i::DspInterrupt usPCNum %x usIPCSource %x\n",
     VAR_11, VAR_9);
    if (VAR_6->IPCs[VAR_11 - 1].usIntCount == 0) {
     VAR_6->IPCs[VAR_11 - 1].usIntCount = 1;
    }
    FUNC_1(VAR_1,
     "tp3780i::DspInterrupt usIntCount %x\n",
     VAR_6->IPCs[VAR_11 - 1].usIntCount);
    if (VAR_6->IPCs[VAR_11 - 1].bIsEnabled == VAR_2) {
     FUNC_1(VAR_1,
      "tp3780i::DspInterrupt, waking up usPCNum %x\n",
      VAR_11 - 1);
     FUNC_4(&VAR_6->IPCs[VAR_11 - 1].ipc_wait_queue);
    } else {
     FUNC_1(VAR_1,
      "tp3780i::DspInterrupt, no one waiting for IPC %x\n",
      VAR_11 - 1);
    }
   }
   if (VAR_9 == 0)
    break;

   VAR_10 = VAR_10 << 1;
  }
 } else {
  FUNC_0(VAR_1,
   "tp3780i::DspInterrupt, return false from dsp3780i_GetIPCSource\n");
 }
 FUNC_0(VAR_1, "tp3780i::DspInterrupt exit\n");
 return VAR_0;
}
