
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ iType; int iSecondStart; int iLengthms; int** lpStart; scalar_t__ sameAs; int* iLength; } ;
struct TYPE_3__ {size_t actPhoneme; int iRemainingSamples; int iSamplesInBuffer; int* lpBuffer; size_t actIntonation; int* pActPos; int* pBufferPos; int iDelay; } ;
typedef int SWORD ;
 TYPE_2__* VAR_0 ;
 int FUNC_0 (int*,int*,int) ;
 double FUNC_1 (double) ;
 int FUNC_2 (int) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(int VAR_2, int VAR_3)
{
 int VAR_4;
 SWORD *VAR_5, *VAR_6;

 int VAR_7;
 int VAR_8;

 int VAR_9;
 int VAR_10;

 int VAR_11;

 int VAR_12;

 int VAR_13, VAR_14;

 SWORD VAR_15;

 VAR_12 = 0;

 if ( VAR_0[VAR_1.actPhoneme].iType>=128 && VAR_1.actPhoneme!=VAR_2 ) {
  VAR_12 = VAR_0[VAR_1.actPhoneme].iSecondStart;
 }

 if ( VAR_0[VAR_2].iType>=128 ) {

  VAR_1.iRemainingSamples = 0;
  return;
 }


 VAR_13 = FUNC_2(VAR_0[VAR_2].iLengthms);

 VAR_1.iSamplesInBuffer = VAR_13+VAR_12;

 if ( VAR_12 )
  FUNC_0(VAR_1.lpBuffer, VAR_0[VAR_1.actPhoneme].lpStart[VAR_1.actIntonation], VAR_12*sizeof(SWORD));

 VAR_6 = VAR_1.lpBuffer + VAR_12;

 VAR_4 = 0;
 VAR_5 = ((void*)0);

 VAR_7 = 0;
 VAR_8 = 0;

 VAR_9 = 0;
 VAR_10 = 0;

 VAR_11 = 0;


 if ( VAR_0[VAR_1.actPhoneme].sameAs!=VAR_0[VAR_2].sameAs ) {



  switch ( VAR_0[VAR_1.actPhoneme].iType ) {
   case 131:

    VAR_7 = FUNC_2(30);
    VAR_8 = 0;


    VAR_10 = -FUNC_2(30);
    VAR_9 = FUNC_2(30);
    break;

   case 130:
   case 129:
    switch ( VAR_0[VAR_2].iType ){
     case 134:
     case 129:

      VAR_8 = 0;
      VAR_7 = FUNC_2(30);

      VAR_10 = -FUNC_2(30);
      VAR_9 = FUNC_2(30);
      break;

     case 132:

      VAR_8 = 0;
      VAR_7 = FUNC_2(40);

      VAR_10 = -FUNC_2(10);
      VAR_9 = FUNC_2(10);
      break;

     default:

      VAR_8 = 0;
      VAR_7 = FUNC_2(20);

      VAR_10 = -FUNC_2(0);
      VAR_9 = FUNC_2(20);
      break;
    }
    break;

   case 132:
    switch ( VAR_0[VAR_2].iType ){
     case 130:
     case 129:

      VAR_8 = 0;
      VAR_7 = FUNC_2(30);

      VAR_10 = -FUNC_2(10);
      VAR_9 = FUNC_2(40);
      break;

     default:
      break;
    }

   case 128:
   case 133:
    VAR_8 = 0;
    VAR_7 = VAR_0[VAR_1.actPhoneme].iLength[VAR_1.actIntonation] - VAR_0[VAR_1.actPhoneme].iSecondStart;
    VAR_1.pActPos = VAR_0[VAR_1.actPhoneme].lpStart[VAR_1.actIntonation] + VAR_0[VAR_1.actPhoneme].iSecondStart;
    VAR_1.iRemainingSamples = VAR_7;
    VAR_11 = 1;

    VAR_10 = -FUNC_2(0);
    VAR_9 = FUNC_2(0);

    break;

   default:

    VAR_8 = 0;
    VAR_7 = FUNC_2(20);

    VAR_10 = -FUNC_2(20);
    break;
  }

  if ( !VAR_1.iDelay ) {


   VAR_8 = 0;
   VAR_7 = 0;
  }

 }
 else {

  VAR_4 = VAR_1.iRemainingSamples;
  VAR_5 = VAR_1.pActPos;
 }

 for (VAR_14=0; VAR_14<VAR_13; VAR_14++)
 {
  VAR_15 = 0x00;


  if ( VAR_8<VAR_7 )
  {
   double VAR_16 = 1.0;

   if ( !VAR_11 )
    VAR_16 = 1.0-FUNC_1((1.0*VAR_8/VAR_7)*3.1415/2);

   if ( !VAR_1.iRemainingSamples ) {
    VAR_1.iRemainingSamples = VAR_0[VAR_1.actPhoneme].iLength[VAR_1.actIntonation];
    VAR_1.pActPos = VAR_0[VAR_1.actPhoneme].lpStart[VAR_1.actIntonation];
   }

   VAR_15 = (SWORD) (*VAR_1.pActPos++ * VAR_16);

   VAR_1.iRemainingSamples--;
   VAR_8++;
  }


  if ( VAR_10>=0 )
  {
   double VAR_17 = 1.0;

   if ( VAR_10<VAR_9 ) {
    VAR_17 = FUNC_1((1.0*VAR_10/VAR_9)*3.1415/2);
    VAR_10++;
   }

   if ( !VAR_4 ) {
    VAR_4 = VAR_0[VAR_2].iLength[VAR_3];
    VAR_5 = VAR_0[VAR_2].lpStart[VAR_3];
   }

   VAR_15 += (SWORD) (*VAR_5++ * VAR_17);

   VAR_4--;
  }
  VAR_10++;

  *VAR_6++ = VAR_15;
 }

 VAR_1.pBufferPos = VAR_1.lpBuffer;

 VAR_1.pActPos = VAR_5;
 VAR_1.iRemainingSamples = VAR_4;
}
