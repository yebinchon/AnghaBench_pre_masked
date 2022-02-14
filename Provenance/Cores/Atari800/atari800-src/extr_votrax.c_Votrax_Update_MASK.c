
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ iType; int* lpStart; int* iLength; } ;
struct TYPE_5__ {int actIntonation; int iDelay; int iSamplesInBuffer; int iRemainingSamples; size_t actPhoneme; int pActPos; int pBufferPos; scalar_t__ busy; TYPE_1__* intf; } ;
struct TYPE_4__ {int (* BusyCallback ) (scalar_t__) ;} ;
typedef int SWORD ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int,int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_2__ VAR_2 ;

void FUNC_3(int VAR_3, SWORD *VAR_4, int VAR_5)
{
 int VAR_6;
 while ( VAR_5 ) {

  if ( VAR_2.iDelay ) {
   VAR_6 = (VAR_5<=VAR_2.iDelay)?VAR_5:VAR_2.iDelay;

   FUNC_1(VAR_4, 0x00, VAR_6*sizeof(SWORD));
   VAR_4 += VAR_6;

   VAR_2.iDelay -= VAR_6;
   VAR_5 -= VAR_6;
  }

  else if ( VAR_2.iSamplesInBuffer==0 ) {
   if ( VAR_2.busy ) {

    VAR_2.busy = 0;
    if ( VAR_2.intf->BusyCallback )
     (*VAR_2.intf->BusyCallback)(VAR_2.busy);
   }

   if ( VAR_2.iRemainingSamples==0 ) {
    if ( VAR_1[VAR_2.actPhoneme].iType>=VAR_0 ) {
     VAR_2.pActPos = VAR_1[0x3f].lpStart[0];
     VAR_2.iRemainingSamples = VAR_1[0x3f].iLength[0];
    }
    else {
     VAR_2.pActPos = VAR_1[VAR_2.actPhoneme].lpStart[VAR_2.actIntonation];
     VAR_2.iRemainingSamples = VAR_1[VAR_2.actPhoneme].iLength[VAR_2.actIntonation];
    }

   }


   VAR_6 = (VAR_5<=VAR_2.iRemainingSamples)?VAR_5:VAR_2.iRemainingSamples;

   FUNC_0(VAR_4, VAR_2.pActPos, VAR_6*sizeof(SWORD));
   VAR_4 += VAR_6;

   VAR_2.pActPos += VAR_6;
   VAR_2.iRemainingSamples -= VAR_6;

   VAR_5 -= VAR_6;
  }

  else {
   VAR_6 = (VAR_5<=VAR_2.iSamplesInBuffer)?VAR_5:VAR_2.iSamplesInBuffer;

   FUNC_0(VAR_4, VAR_2.pBufferPos, VAR_6*sizeof(SWORD));
   VAR_4 += VAR_6;

   VAR_2.pBufferPos += VAR_6;
   VAR_2.iSamplesInBuffer -= VAR_6;

   VAR_5 -= VAR_6;
  }
 }
}
