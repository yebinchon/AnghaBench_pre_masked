
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zfpFreqChangeCompleteCb ;
typedef int zdev_t ;
typedef void* u8_t ;
typedef int u16_t ;
struct TYPE_3__ {size_t freqReqQueueTail; int * freqChangeCompCb; void** freqReqExtOffset; void** freqReqBw40; int * freqReqQueue; } ;
struct TYPE_4__ {TYPE_1__ freqCtrl; } ;


 size_t VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(zdev_t* VAR_2, u16_t VAR_3, u8_t VAR_4,
        u8_t VAR_5, zfpFreqChangeCompleteCb VAR_6)
{
    FUNC_0(VAR_2);


    VAR_1->freqCtrl.freqReqQueue[VAR_1->freqCtrl.freqReqQueueTail] = VAR_3;
    VAR_1->freqCtrl.freqReqBw40[VAR_1->freqCtrl.freqReqQueueTail] = VAR_4;
    VAR_1->freqCtrl.freqReqExtOffset[VAR_1->freqCtrl.freqReqQueueTail] = VAR_5;
    VAR_1->freqCtrl.freqChangeCompCb[VAR_1->freqCtrl.freqReqQueueTail] = VAR_6;
    VAR_1->freqCtrl.freqReqQueueTail++;
    if ( VAR_1->freqCtrl.freqReqQueueTail >= VAR_0 )
    {
        VAR_1->freqCtrl.freqReqQueueTail = 0;
    }
}
