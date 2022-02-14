
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_4__* i2eBordStrPtr ;
typedef TYPE_5__* i2ChanStrPtr ;
typedef TYPE_6__* flowStatPtr ;
typedef int flowStat ;
typedef int * failStatPtr ;
typedef int failStat ;
typedef int * debugStatPtr ;
typedef int debugStat ;
typedef void** cntStatPtr ;
typedef int cntStat ;
typedef int * bidStatPtr ;
typedef int bidStat ;
struct TYPE_20__ {scalar_t__ asof; scalar_t__ room; } ;
struct TYPE_17__ {int rx; int overrun; int frame; int parity; int brk; int rng; int dsr; int dcd; int cts; } ;
struct TYPE_16__ {scalar_t__ room; scalar_t__ asof; } ;
struct TYPE_15__ {int expires; } ;
struct TYPE_19__ {int hotKeyIn; unsigned short Ibuf_stuff; unsigned char* Ibuf; int dataSetIn; int channelNeeds; int tqueue_status; int dss_now_wait; TYPE_3__ icount; int channelFail; void* channelRcount; void* channelTcount; int channelStatus; int pTTY; TYPE_2__ outfl; TYPE_1__ BookmarkTimer; int pBookmarkWait; int bookMarks; int tqueue_input; int Ibuf_spinlock; } ;
struct TYPE_18__ {int* i2eLeadoffWord; int got_input; int i2eFatal; int i2eChannelCnt; int i2eOutMailWaiting; int read_fifo_spinlock; int channelBtypes; scalar_t__ i2eChannelPtr; } ;


 int VAR_0 ;
 int FUNC_0 (int*) ;
 int FUNC_1 (int*) ;
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
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 unsigned int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int*) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;

 int VAR_27 ;
 int FUNC_4 (int*) ;
 unsigned char VAR_28 ;
 unsigned char VAR_29 ;
 unsigned char VAR_30 ;



 unsigned char VAR_31 ;





 unsigned char* VAR_32 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,TYPE_5__*,int ,int,int ) ;
 int FUNC_8 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_9 (TYPE_4__*,unsigned char*,int) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int,int ,int,int,...) ;
 unsigned char* VAR_33 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 int FUNC_17 (int *,unsigned long) ;
 int* VAR_34 ;

__attribute__((used)) static inline void
FUNC_18(i2eBordStrPtr VAR_35)
{
 i2ChanStrPtr VAR_36;
 int VAR_37;
 int VAR_38;
 unsigned short VAR_39;
 int VAR_40;
 unsigned char *VAR_41, *VAR_42;
 unsigned char VAR_43;
 unsigned char VAR_44;
 unsigned long VAR_45,VAR_46;



 while (FUNC_2(VAR_35)) {



  FUNC_16(&VAR_35->read_fifo_spinlock, VAR_45);



  VAR_35->i2eLeadoffWord[0] = FUNC_10(VAR_35);

  switch(FUNC_4(VAR_35->i2eLeadoffWord))
  {
  case 147:
   VAR_35->got_input = 1;



   VAR_37 = FUNC_0(VAR_35->i2eLeadoffWord);
   VAR_38 = FUNC_10(VAR_35);





   if ( ((unsigned int)VAR_38) > VAR_15 ) {
    VAR_35->i2eFatal = 2;
    FUNC_17(&VAR_35->read_fifo_spinlock,
      VAR_45);
    return;
   }

   if ((VAR_37 >= VAR_35->i2eChannelCnt) ||
    (((void*)0)==(VAR_36 = ((i2ChanStrPtr*)VAR_35->i2eChannelPtr)[VAR_37])))
   {
    FUNC_9(VAR_35, VAR_33, VAR_38);
    FUNC_17(&VAR_35->read_fifo_spinlock,
      VAR_45);
    break;
   }
   if(FUNC_3(VAR_35->i2eLeadoffWord) == VAR_16)
   {
    VAR_36->hotKeyIn = FUNC_10(VAR_35) & 0xff;
    FUNC_17(&VAR_35->read_fifo_spinlock,
      VAR_45);
    FUNC_7(VAR_26, VAR_36, 0, 1, VAR_1);
    break;
   }



   FUNC_16(&VAR_36->Ibuf_spinlock, VAR_46);

   VAR_39 = VAR_36->Ibuf_stuff;
   VAR_40 = VAR_15 - VAR_39;
   if (VAR_40 > VAR_38)
    VAR_40 = VAR_38;





   FUNC_9(VAR_35, &(VAR_36->Ibuf[VAR_39]), VAR_40);
   VAR_36->icount.rx += VAR_40;
   VAR_39 += VAR_40;

   if (VAR_39 >= VAR_15) {
    if ((VAR_40 & 1) && (VAR_38 > VAR_40)) {
     VAR_36->Ibuf[0] = VAR_36->Ibuf[VAR_15];
     VAR_40++;
     VAR_39 = 1;
    } else {
     VAR_39 = 0;
    }
   }


   if (VAR_38 > VAR_40) {
    VAR_40 = VAR_38 - VAR_40;
    FUNC_9(VAR_35, &(VAR_36->Ibuf[VAR_39]), VAR_40);
    VAR_36->icount.rx += VAR_40;
    VAR_39 += VAR_40;
   }


   VAR_36->Ibuf_stuff = VAR_39;
   FUNC_17(&VAR_36->Ibuf_spinlock, VAR_46);
   FUNC_17(&VAR_35->read_fifo_spinlock,
     VAR_45);




   FUNC_5(&VAR_36->tqueue_input);







   break;

  case 146:
   FUNC_12 (VAR_19, VAR_21, 4, 0 );

   VAR_38 = FUNC_1(VAR_35->i2eLeadoffWord);

   FUNC_9(VAR_35, VAR_32, VAR_38);

   FUNC_17(&VAR_35->read_fifo_spinlock,
     VAR_45);

   VAR_41 = VAR_32;
   VAR_42 = &(VAR_32[VAR_38]);

   while (VAR_41 < VAR_42) {
    VAR_37 = *VAR_41++;

    FUNC_12 (VAR_37, VAR_21, 7, 2, VAR_37, *VAR_41 );


    if (VAR_37 < VAR_35->i2eChannelCnt
      &&
      (VAR_36 = (((i2ChanStrPtr*)VAR_35->i2eChannelPtr)[VAR_37])) != ((void*)0)
     )
    {
     VAR_44 = 0;

     switch (VAR_43 = *VAR_41++)
     {

     case 141:
      if ( !(VAR_36->dataSetIn & VAR_4) )
      {
       VAR_36->dataSetIn |= VAR_6;
       VAR_36->icount.cts++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn |= VAR_4;
      break;

     case 142:
      if ( VAR_36->dataSetIn & VAR_4 )
      {
       VAR_36->dataSetIn |= VAR_6;
       VAR_36->icount.cts++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn &= ~VAR_4;
      break;

     case 139:
      FUNC_12 (VAR_37, VAR_18, 1, 1, VAR_36->dataSetIn );

      if ( !(VAR_36->dataSetIn & VAR_5) )
      {
       FUNC_12 (VAR_0, VAR_18, 2, 0 );
       VAR_36->dataSetIn |= VAR_7;
       VAR_36->icount.dcd++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn |= VAR_5;

      FUNC_12 (VAR_37, VAR_18, 3, 1, VAR_36->dataSetIn );
      break;

     case 140:
      FUNC_12 (VAR_37, VAR_18, 4, 1, VAR_36->dataSetIn );
      if ( VAR_36->dataSetIn & VAR_5 )
      {
       FUNC_12 (VAR_37, VAR_18, 5, 0 );
       VAR_36->dataSetIn |= VAR_7;
       VAR_36->icount.dcd++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn &= ~VAR_5;

      FUNC_12 (VAR_37, VAR_18, 6, 1, VAR_36->dataSetIn );
      break;

     case 137:
      if ( !(VAR_36->dataSetIn & VAR_10) )
      {
       VAR_36->dataSetIn |= VAR_8;
       VAR_36->icount.dsr++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn |= VAR_10;
      break;

     case 138:
      if ( VAR_36->dataSetIn & VAR_10 )
      {
       VAR_36->dataSetIn |= VAR_8;
       VAR_36->icount.dsr++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn &= ~VAR_10;
      break;

     case 131:
      if ( !(VAR_36->dataSetIn & VAR_14) )
      {
       VAR_36->dataSetIn |= VAR_9;
       VAR_36->icount.rng++;
       VAR_44 = 1;
      }
      VAR_36->dataSetIn |= VAR_14 ;
      break;

     case 132:







      VAR_36->dataSetIn &= ~VAR_14 ;
      break;

     case 143:
      VAR_36->dataSetIn |= VAR_3;
      VAR_36->icount.brk++;
      VAR_44 = 1;
      break;


     case 145:
      VAR_36->bookMarks--;
      if (VAR_36->bookMarks <= 0 ) {
       VAR_36->bookMarks = 0;
       FUNC_15( &VAR_36->pBookmarkWait );

      FUNC_12 (VAR_37, VAR_17, 20, 1, VAR_36->BookmarkTimer.expires );
      }
      break;



     case 135:
      VAR_36->outfl.room =
       ((flowStatPtr)VAR_41)->room -
       (VAR_36->outfl.asof - ((flowStatPtr)VAR_41)->asof);

      FUNC_12 (VAR_37, VAR_22, 1, 1, VAR_36->outfl.room );

      if (VAR_36->channelNeeds & VAR_24)
      {
       FUNC_12 (VAR_37, VAR_22, 2, 1, VAR_36->channelNeeds);

       VAR_36->channelNeeds &= ~VAR_24;
       FUNC_8(VAR_35, VAR_36, VAR_25);
       if ( VAR_36->pTTY )
        FUNC_11(VAR_36->pTTY);
      }

      FUNC_12 (VAR_37, VAR_22, 3, 1, VAR_36->channelNeeds);

      VAR_41 += sizeof(flowStat);
      break;




     case 129:

      VAR_36->channelStatus = *((debugStatPtr)VAR_41);
      VAR_41 += sizeof(debugStat);
      break;

     case 128:

      VAR_36->channelTcount = *((cntStatPtr)VAR_41);
      VAR_41 += sizeof(cntStat);
      break;

     case 130:

      VAR_36->channelRcount = *((cntStatPtr)VAR_41);
      VAR_41 += sizeof(cntStat);
      break;

     case 144:
      VAR_35->channelBtypes = *((bidStatPtr)VAR_41);
      VAR_41 += sizeof(bidStat);
      FUNC_14(VAR_35);
      break;

     case 134:
      FUNC_7 (VAR_27, VAR_36, 0, 1, VAR_2);
      VAR_36->channelFail = *((failStatPtr)VAR_41);
      VAR_41 += sizeof(failStat);
      break;




     default:
      switch (VAR_43 & VAR_31)
      {
      case 136:
       if (VAR_43 & VAR_30) {
        VAR_36->dataSetIn |= VAR_13;
        VAR_36->icount.parity++;
       }
       if (VAR_43 & VAR_28){
        VAR_36->dataSetIn |= VAR_11;
        VAR_36->icount.frame++;
       }
       if (VAR_43 & VAR_29){
        VAR_36->dataSetIn |= VAR_12;
        VAR_36->icount.overrun++;
       }
       break;

      case 133:

       VAR_36->dataSetIn = (VAR_36->dataSetIn
        & ~(VAR_14 | VAR_4 | VAR_5 | VAR_10) )
        | VAR_34[VAR_43 & 0xf];
       FUNC_15 ( &VAR_36->dss_now_wait );
      default:
       break;
      }
     }
     if (VAR_44) {



      FUNC_6(&VAR_36->tqueue_status);

     }
    }
    else
    {



     switch (*VAR_41++)
     {
     case 135:
      VAR_41 += 4;
      break;

     default:
      break;
     }
    }
   }
   break;

  default:
   FUNC_12 (VAR_19, VAR_21, 5, 1,
    FUNC_4(VAR_35->i2eLeadoffWord) );
   FUNC_17(&VAR_35->read_fifo_spinlock,
     VAR_45);

   break;
  }
 }

 FUNC_12 (VAR_19, VAR_21, VAR_20, 0 );


 VAR_35->i2eOutMailWaiting |= VAR_23;
 return;
}
