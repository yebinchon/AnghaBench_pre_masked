
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int s32 ;
struct TYPE_12__ {scalar_t__ SRR0; int SRR1; int FPSCR; int XER; int CTR; int LR; int CR; scalar_t__ FPR; scalar_t__ GPR; } ;
typedef TYPE_1__ frame_context ;
struct TYPE_13__ {scalar_t__ (* open ) (TYPE_2__*) ;int (* close ) (TYPE_2__*) ;int (* wait ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__* VAR_3 ;
 TYPE_1__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 (int,TYPE_1__*) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__*,int) ;
 int FUNC_4 (int,TYPE_1__*) ;
 int FUNC_5 (int*) ;
 int FUNC_6 (char**,int*) ;
 int FUNC_7 (char*) ;
 char* FUNC_8 (char*,void*,int) ;
 int FUNC_9 (int*,int*,char**,scalar_t__*) ;
 int FUNC_10 (int*,char*,int) ;
 int FUNC_11 (char*) ;
 int* VAR_7 ;
 char* VAR_8 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;
 scalar_t__ FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*) ;
 int FUNC_17 (TYPE_2__*) ;
 int * FUNC_18 (int*,int*) ;

void FUNC_19(frame_context *VAR_9)
{
 char *VAR_10;
 s32 VAR_11,VAR_12;
 s32 VAR_13,VAR_14;
 s32 VAR_15;
 frame_context *VAR_16;

 VAR_13 = FUNC_0();
 VAR_14 = VAR_13;

 if(VAR_3->open(VAR_3)<0) return;

 if(VAR_5) {
  FUNC_3(VAR_9,VAR_13);
  FUNC_11(VAR_8);
 }

 if(VAR_9->SRR0==(u32)VAR_2) VAR_9->SRR0 += 4;

 VAR_15 = 0;
 while(!VAR_15) {
  VAR_8[0]= 0;
  FUNC_5(VAR_7);
  switch(VAR_7[0]) {
   case '?':
    FUNC_3(VAR_9,VAR_13);
    break;
   case 'D':
    VAR_6 = 0;
    VAR_5 = 0;
    VAR_9->SRR1 &= ~VAR_1;
    FUNC_13(VAR_8,"OK");
    VAR_15 = 1;
    break;
   case 'k':
    VAR_6 = 0;
    VAR_5 = 0;
    VAR_9->SRR1 &= ~VAR_1;
    VAR_9->SRR0 = 0x80001800;
    VAR_15 = 1;
    goto exit;
   case 'g':
    VAR_16 = VAR_9;
    VAR_10 = VAR_8;
    if(VAR_14!=VAR_13) VAR_16 = &VAR_4;

    VAR_10 = FUNC_8(VAR_10,(char*)VAR_16->GPR,32*4);
    VAR_10 = FUNC_8(VAR_10,(char*)VAR_16->FPR,32*8);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->SRR0,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->SRR1,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->CR,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->LR,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->CTR,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->XER,4);
    VAR_10 = FUNC_8(VAR_10,(char*)&VAR_16->FPSCR,4);
    break;
   case 'm':
    VAR_10 = &VAR_7[1];
    if(FUNC_6(&VAR_10,&VAR_11) && ((VAR_11&0xC0000000)==0xC0000000 || (VAR_11&0xC0000000)==0x80000000)
     && *VAR_10++==','
     && FUNC_6(&VAR_10,&VAR_12) && VAR_12<=((VAR_0 - 4)/2))
     FUNC_8(VAR_8,(void*)VAR_11,VAR_12);
    else
     FUNC_13(VAR_8,"E00");
    break;
   case 'q':
    FUNC_10(VAR_7,VAR_8,VAR_13);
    break;
   case 'c':
    VAR_6 = 0;
    VAR_5 = 1;
    VAR_9->SRR1 &= ~VAR_1;
    VAR_3->wait(VAR_3);
    goto exit;
   case 's':
    VAR_6 = 1;
    VAR_5 = 1;
    VAR_9->SRR1 |= VAR_1;
    VAR_3->wait(VAR_3);
    goto exit;
   case 'z':
    {
     s32 VAR_17,VAR_18;
     u32 VAR_19;
     char *VAR_20;

     VAR_17 = FUNC_9(VAR_7,&VAR_18,&VAR_20,&VAR_19);
     if(!VAR_17) {
      FUNC_13(VAR_8,"E01");
      break;
     }
     if(VAR_18!=0) break;

     if(VAR_19<4) {
      FUNC_13(VAR_8,"E02");
      break;
     }

     VAR_17 = FUNC_12(VAR_20);
     if(!VAR_17) {
      FUNC_13(VAR_8,"E03");
      break;
     }
     FUNC_13(VAR_8,"OK");
    }
    break;
   case 'H':
    if(VAR_7[1]=='g')
    {
     s32 VAR_21,VAR_22;

     if(FUNC_18(&VAR_7[2],&VAR_21)==((void*)0)) {
      FUNC_13(VAR_8,"E01");
      break;
     }
     if(!VAR_21) VAR_21 = VAR_13;
     if(VAR_21==VAR_14) {
      FUNC_13(VAR_8,"OK");
      break;
     }

     if(VAR_14!=VAR_13) VAR_22 = FUNC_4(VAR_14,&VAR_4);
     if(VAR_21!=VAR_13) {
      VAR_22 = FUNC_1(VAR_21,&VAR_4);
      if(!VAR_22) {
       FUNC_13(VAR_8,"E02");
       break;
      }
     }
     VAR_14= VAR_21;
    }
    FUNC_13(VAR_8,"OK");
    break;
   case 'T':
    {
     s32 VAR_23;

     if(FUNC_18(&VAR_7[1],&VAR_23)==((void*)0)) {
      FUNC_13(VAR_8,"E01");
      break;
     }
     if(FUNC_2(VAR_23)==((void*)0)) FUNC_13(VAR_8,"E02");
     else FUNC_13(VAR_8,"OK");
    }
    break;
   case 'Z':
    {
     s32 VAR_24,VAR_25;
     u32 VAR_26;
     char *VAR_27;

     VAR_24 = FUNC_9(VAR_7,&VAR_25,&VAR_27,&VAR_26);
     if(!VAR_24) {
      FUNC_13(VAR_8,"E01");
      break;
     }
     if(VAR_25!=0) {
      FUNC_13(VAR_8,"E02");
      break;
     }
     if(VAR_26<4) {
      FUNC_13(VAR_8,"E03");
      break;
     }

     VAR_24 = FUNC_7(VAR_27);
     if(!VAR_24) {
      FUNC_13(VAR_8,"E04");
      break;
     }
     FUNC_13(VAR_8,"OK");
    }
    break;
  }
  FUNC_11(VAR_8);
 }
 VAR_3->close(VAR_3);
exit:
 return;
}
