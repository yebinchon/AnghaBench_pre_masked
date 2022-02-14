
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dvb_audio_info {int off; int bit_rate; int frequency; int framesize; scalar_t__ layer; } ;


 int* VAR_0 ;
 int** VAR_1 ;
 int* VAR_2 ;
 int FUNC_0 (char*,...) ;

int FUNC_1(u8 *VAR_3, int VAR_4, struct dvb_audio_info *VAR_5, int VAR_6)
{
 u8 *VAR_7;
 int VAR_8 = 0;
 int VAR_9 = 0;
 u8 VAR_10 = 0;
 int VAR_11 = 0;

 while ( !VAR_8 && VAR_9 < VAR_4){
  u8 *VAR_12 = VAR_3+VAR_9;

  if ( VAR_12[0] == 0x0b && VAR_12[1] == 0x77 )
   VAR_8 = 1;
  else {
   VAR_9++;
  }
 }

 if (!VAR_8) return -1;
 if (VAR_6)
  FUNC_0("Audiostream: AC3");

 VAR_5->off = VAR_9;
 if (VAR_9+5 >= VAR_4) return -1;

 VAR_5->layer = 0;
 VAR_7 = VAR_3+VAR_9+2;

 VAR_10 = (VAR_7[2]&0x3f);
 VAR_5->bit_rate = VAR_0[VAR_10 >> 1]*1000;

 if (VAR_6)
  FUNC_0("  BRate: %d kb/s", (int) VAR_5->bit_rate/1000);

 VAR_5->frequency = (VAR_7[2] & 0xc0 ) >> 6;
 VAR_11 = (VAR_7[2] & 0xc0 ) >> 6;
 VAR_5->frequency = VAR_2[VAR_11]*100;
 if (VAR_6) FUNC_0 ("  Freq: %d Hz\n", (int) VAR_5->frequency);


 VAR_5->framesize = VAR_1[VAR_11][VAR_10 >> 1];
 if ((VAR_10 & 1) && (VAR_11 == 1)) VAR_5->framesize++;
 VAR_5->framesize = VAR_5->framesize << 1;
 if (VAR_6) FUNC_0 ("  Framesize %d\n",(int) VAR_5->framesize);


 return 0;
}
