
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 () ;
 int VAR_7 ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int ,int,int) ;
 int FUNC_11 (int,int) ;
 int FUNC_12 (char*,...) ;
 int FUNC_13 (char*) ;
 int VAR_15 ;

int FUNC_14(int VAR_16, int VAR_17)
{
 VAR_14=VAR_13=0;
 VAR_15=1;
 FUNC_13("Initializing Sound Blaster...");

 VAR_9=VAR_17?1:0;
 VAR_10=8;

 if(VAR_16<=11025)
  VAR_11=1<<5;
 else if(VAR_16<=22050)
  VAR_11=1<<6;
 else
  VAR_11=1<<7;

 VAR_12=VAR_10*VAR_11;
 VAR_7=FUNC_9(VAR_12<<VAR_9);

 if(VAR_9)
  FUNC_10(VAR_7,0,VAR_12*2);
 else
  FUNC_10(VAR_7,128,VAR_12);

 VAR_8=VAR_3=0;

 if((VAR_16<8192) || (VAR_16>65535))
 {
  FUNC_12(" Unsupported playback rate: %d samples per second\n",VAR_16);
  return(0);
 }

 if(!FUNC_0())
  return(0);


 if(VAR_6>7)
 {
  VAR_2=FUNC_8(0xA1);
  FUNC_11(0xA1,VAR_2|(1<<(VAR_6&7)));
 }
 else
 {
  VAR_2=FUNC_8(0x21);
  FUNC_11(0x21,VAR_2|(1<<VAR_6));
 }
 if(!FUNC_5())
 {
  FUNC_13(" Error resetting the DSP.");
  return(0);
 }

 if(!(VAR_0=FUNC_1()))
 {
  FUNC_13(" Error getting the DSP version.");
  return(0);
 }

 FUNC_12(" DSP Version: %d.%d\n",VAR_0>>8,VAR_0&0xFF);
 if(VAR_0<0x201)
 {
  FUNC_12(" DSP version number is too low.\n");
  return(0);
 }

 if(VAR_0<0x400)
  VAR_9=0;
 if(!FUNC_3())
 {
  FUNC_13(" Error creating low-memory DMA buffer.");
  return(0);
 }

 if(VAR_6>7) VAR_1=VAR_6+0x68;
 else VAR_1=VAR_6+0x8;

 if(!FUNC_6())
 {
  FUNC_13(" Error setting interrupt vectors.");
  FUNC_2();
  return(0);
 }


 if(VAR_6>7)
  FUNC_11(0xA1,VAR_2&(~(1<<(VAR_6&7))));
 else
  FUNC_11(0x21,VAR_2&(~(1<<VAR_6)));

 FUNC_4();






 FUNC_7(0xD1);

 if(VAR_0>=0x400)
 {
  FUNC_7(0x41);
  FUNC_7(VAR_16>>8);
  FUNC_7(VAR_16&0xFF);
  if(!VAR_9)
  {
   FUNC_7(0xC6);
   FUNC_7(0x00);
  }
  else
  {
   FUNC_7(0xB6);
   FUNC_7(0x10);
  }
  FUNC_7((VAR_11-1)&0xFF);
  FUNC_7((VAR_11-1)>>8);
 }
 else
 {
  int VAR_18,VAR_19;
  if(VAR_16>22050)
  {
   VAR_18=(65536-(256000000/VAR_16))>>8;
   VAR_16=256000000/(65536-(VAR_18<<8));
   VAR_19=0x90;
   VAR_14=1;
  }
  else
  {
   VAR_18=256-(1000000/VAR_16);
   VAR_16=1000000/(256-VAR_18);
   VAR_19=0x1c;
  }
  FUNC_7(0x40);
  FUNC_7(VAR_18);
  FUNC_7(0x48);
  FUNC_7((VAR_11-1)&0xFF);
  FUNC_7((VAR_11-1)>>8);

  FUNC_7(VAR_19);
 }


 if(VAR_9)
  FUNC_11(0xd4,VAR_5&3);
 else
  FUNC_11(0xa,VAR_4);

 FUNC_12(" %d hz, %d-bit\n",VAR_16,8<<VAR_9);
 return(VAR_16);
}
